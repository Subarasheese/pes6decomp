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
    def test_separate_jump_tables_require_matching_code_entries_and_padding(self):
        import build
        import match

        def words(*values):
            return struct.pack('<' + 'I' * len(values), *values)

        def section(name, data):
            return dict(name=name, data=data, size=len(data), alignment=16)

        entry, base = 0x100000, 0x128000
        addresses = words(0x3c020000, 0x24420000, 0x3c030000, 0x24630000)
        high, low = match.R_MIPS_HI16, match.R_MIPS_LO16
        obj = dict(
            sections=[section('', b''), section('.text', addresses),
                      section('.rodata', words(0)), section('.rodata', words(8, 12))],
            symbols=[('', 0, 0, True), ('handler', 0, 1, False),
                     ('.rodata', 0, 2, True), ('.rodata', 0, 3, True)],
            relocs={1: [(0, high, 2), (4, low, 2), (8, high, 3), (12, low, 3)],
                    2: [(0, build.R_MIPS_32, 1)],
                    3: [(0, build.R_MIPS_32, 1), (4, build.R_MIPS_32, 1)]})
        code = words(0x3c020013, 0x24428000, 0x3c030013, 0x24638010)
        tables = words(entry, 0, 0, 0, entry + 8, entry + 12)

        def place(text, data):
            return build.jump_table_group(obj, [2, 3], entry, entry, text, base, data)

        self.assertEqual(place(code, tables), base)
        for offset in (0, 4, 16, 20):
            with self.subTest(table_offset=offset):
                changed = bytearray(tables)
                changed[offset] ^= 4
                self.assertIsNone(place(code, changed))
        for offset in (4, 12):
            with self.subTest(code_offset=offset):
                changed = bytearray(code)
                changed[offset] ^= 4
                self.assertIsNone(place(changed, tables))
        self.assertIsNone(place(code, tables[:-1]))

    def test_text_splits_use_only_assembly_in_each_address_range(self):
        with tempfile.TemporaryDirectory() as directory, patch.object(overlays, 'ROOT', Path(directory)):
            root = Path(directory)
            target = dict(name='sample', code_start=0x1000, code_end=0x1060)
            config = root/'config/overlays/sample'
            config.mkdir(parents=True)
            self.assertEqual(overlays.text_ranges(target), [(0x1000, 0x1060, 'core/text')])
            splits = config/'text_splits.txt'
            splits.write_text('# First instruction after the mixed region\n0x1020\n')
            assembly = root/'assembly'
            for unit, addresses in [('core/text', [0x1000, 0x1020, 0x1040]),
                                    ('core/text_00001020', [0x1010, 0x1020, 0x1060])]:
                (assembly/unit).mkdir(parents=True)
                for address in addresses:
                    (assembly/unit/f'func_{address:08X}.s').touch()
            files = [path.relative_to(assembly).as_posix() for path in overlays.assembly_paths(target, assembly)]
            self.assertEqual(sorted(files), ['core/text/func_00001000.s', 'core/text_00001020/func_00001020.s'])
            (config/'symbol_addrs.txt').write_text('func_00001020 = 0x1020; // type:func size:0x20\n')
            for address in (0x1024, 0x103c, 0x1040):
                (assembly/'core/text_00001020'/f'func_{address:08X}.s').touch()
            self.assertEqual(sorted(path.name for path in overlays.assembly_paths(target, assembly)),
                             ['func_00001000.s', 'func_00001020.s', 'func_00001040.s'])
            for invalid in ('0x1000', '0x1011', '0x1060', '0x1040\n0x1020'):
                with self.subTest(invalid=invalid), self.assertRaises(ValueError):
                    splits.write_text(invalid)
                    overlays.text_ranges(target)

    def member(self):
        data = bytearray(0x180)  # archive padding beyond a 0x100-byte loaded image
        struct.pack_into('<8I', data, 0, 0x336f574d, 1, 0x900000, 0xc0, 0, 0x20, 0x900100, 0x900100)
        data[32:40] = b'test.ovl'
        struct.pack_into('<I', data, 0x80, 0x03e00008)
        return data

    def test_gap_label_in_compiled_function(self):
        import build
        gap = ['bnel $10, $5, .L00C1113C', 'beq $2, $0, .L00C11140', '  .L00C11140:',
               'b .L00C11148', 'b .L00C1114C', 'b .L00C22200']
        funcs = {0xC11130: (0x20, ['  .L00C1113C:', '  .L00C11140:', '  .L00C11148:']),
                 0xC22200: (8, ['  .L00C22200:'])}
        self.assertEqual(build.gap_local_bindings(gap, funcs, {0xC11130: 0x18}),
                         ['PROVIDE(.L00C1113C = 0x00c1113c);'])

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
