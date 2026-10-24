"""Image identity and section mapping checks; no game bytes or compiler are required."""
import struct
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

import overlays
import overlay_report
import project


class OverlayTests(unittest.TestCase):
    def member(self):
        data = bytearray(0x180)  # archive padding beyond a 0x100-byte loaded image
        struct.pack_into('<8I', data, 0, 0x336f574d, 1, 0x900000, 0xc0, 0, 0x20, 0x900100, 0x900100)
        data[32:40] = b'test.ovl'
        struct.pack_into('<I', data, 0x80, 0x03e00008)
        return data

    def test_mapping_and_archive_padding(self):
        data = self.member()
        t = overlays.parse_mwo3(data,0,0x800,[(0,)*8,(1,0,0x900000,0,0,0x800,7,0x800)])
        self.assertEqual(t['code_start'],0x900080)
        self.assertEqual(t['load_bytes'],0x100)
        self.assertEqual(t['text_bytes'],0x40)
        self.assertTrue(t['executable'])

    def test_rejects_wrong_reservation_and_truncated_archive(self):
        with self.assertRaises(ValueError):
            overlays.parse_mwo3(self.member(),0,0,[(0,)*8,(1,0,0x910000,0,0,0x800,7,0x800)])
        with self.assertRaises(ValueError):
            list(overlays.afs_members(b'AFS\0'+struct.pack('<I',9)))

    def test_does_not_count_reservation_as_code(self):
        d=self.member();struct.pack_into('<I',d,0x80,0)
        t=overlays.parse_mwo3(d,0,0,[(0,)*8,(1,0,0x900000,0,0,0x800,7,0x800)])
        self.assertFalse(t['executable']);self.assertEqual(t['text_bytes'],0)

    def test_resident_source_walk_excludes_other_images(self):
        with tempfile.TemporaryDirectory() as d:
            Path(d,'overlays','bank').mkdir(parents=True)
            Path(d,'func_00100000.c').touch()
            Path(d,'overlays','bank','func_00100000.c').touch()
            with patch.object(project,'SRC',d),patch.object(project,'TARGET','main'):
                paths=[Path(root,f).relative_to(d).as_posix() for root,_,fs in project.source_walk() for f in fs]
            self.assertEqual(paths,['func_00100000.c'])

    def test_gp_relocation_uses_selected_image(self):
        import match
        # A different executable can use the same addresses with a different GP.
        with patch.dict(project.CONFIG['game'], gp=0x200000), patch.object(match.symbols, 'address_of', return_value=0x200010):
            words, unresolved = match.link_words([0x8f820000], {0: (match.R_MIPS_GPREL16, 'D_00200010', 0, False)}, 0, 0x100000)
        self.assertEqual(words, [0x8f820010])
        self.assertFalse(unresolved)

    def test_proof_cannot_cross_overlay_identity(self):
        t=dict(name='bank_a',text_sha1='text',data_sha1='data',sha1='image')
        proof=dict(original_image_sha1='image',target='bank_b',text_sha1='text',data_sha1='data',text_matches=True,data_matches=True)
        self.assertFalse(overlay_report.valid_proof(t,proof))
        proof['target']='bank_a';self.assertTrue(overlay_report.valid_proof(t,proof))
        proof['text_sha1']='corrupt';self.assertFalse(overlay_report.valid_proof(t,proof))

    def test_report_counts_overlapping_images_without_borrowing_matches(self):
        import json
        from report import measures
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory)
            (root/'config').mkdir()
            images=[]
            for name in ['bank_a','bank_b']:
                images.append(dict(name=name,kind='mwo3',executable=True,data_bytes=0,bss_bytes=0,
                                   text_sha1='text',data_sha1='data',sha1=name))
                d=root/'config/overlays'/name;d.mkdir(parents=True)
                (d/'functions.csv').write_text('address,max_size,calls,size\n0x00900080,4,0,4\n')
            (root/'config/overlays.json').write_text(json.dumps(dict(images=images)))
            functions=[dict(addr=0x900080,size=4,matched=True,complete=True)]
            m=measures(functions)
            report=dict(measures=m,units=[dict(name='resident',measures=m.copy(),metadata=dict(progress_categories=['game']))],categories=[])
            meta=dict(linked_functions=1)
            with patch.object(overlay_report,'ROOT',root):
                overlay_report.add_images(report,meta,measures)
            self.assertEqual(report['measures']['total_functions'],3)
            self.assertEqual(report['measures']['matched_functions'],1)
            self.assertEqual(len(report['units']),3)
            self.assertFalse(meta['images'])


if __name__=='__main__':
    unittest.main()
