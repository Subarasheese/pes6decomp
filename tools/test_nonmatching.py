import copy
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import nonmatching


class ComparisonTests(unittest.TestCase):
    def test_changed_direct_call_is_rejected_even_at_high_similarity(self):
        original = [0] * 100 + [0x0C040000, 0]
        changed = original[:-2] + [0x0C040001, 0]
        with self.assertRaisesRegex(ValueError, "targets differ"):
            nonmatching.compare(original, changed, 0x200000)

    def test_full_body_and_length_are_counted(self):
        r = nonmatching.compare([1, 2, 3, 4], [1, 2, 3, 5, 6], 0x200000)
        self.assertEqual(r["instruction_similarity"], 60)
        self.assertEqual(r["original_code_bytes"], 16)
        with self.assertRaisesRegex(ValueError, "length"):
            nonmatching.compare([0x24020000 + i for i in range(20)], [0x24020001, 0x24020002], 0x200000)

    def test_lost_indirect_callback_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "indirect"):
            nonmatching.compare([0x0040F809, 0, 1, 2], [0, 0, 1, 2], 0x200000)

    def test_global_address_evidence_rejects_wrong_global_and_loaded_value(self):
        # lui v0,0x40; lw v0,0x100(v0); lw v1,4(v0); lw v0,0x20(gp)
        addresses = nonmatching.referenced_addresses([0x3C020040, 0x8C420100, 0x8C430004, 0x8F820020], 0x3E0000)
        self.assertIn(0x400100, addresses)
        self.assertIn(0x3E0020, addresses)
        self.assertNotIn(0x400104, addresses)
        self.assertNotIn(0x400200, addresses)

    def test_incomplete_or_faked_translation_is_rejected(self):
        for text in ["return M2C_ERROR(\"missing\");", "return CLZ(a);",
                     "#define fill(x) 0\nint f(void) { return fill(2); }",
                     "return saved_reg_s0;", 'asm("nop");']:
            self.assertTrue(nonmatching.source_problems(text), text)
        self.assertFalse(nonmatching.source_problems('return M2C_FIELD(p, s32 *, 4);'))
        self.assertTrue(nonmatching.source_problems('s32 func_00100000(s32 arg0, s32 arg2) { return arg2; }'))
        self.assertTrue(nonmatching.source_problems('void f(void) {\n    M2C_UNK buffer;\n    g(&buffer);\n}'))
        self.assertTrue(nonmatching.source_problems('s32 D_00300000;\n'))


class ReportTests(unittest.TestCase):
    def test_changed_dependencies_invalidate_verification(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "proof.json"
            path.write_text(json.dumps({"fingerprint": "old", "functions": []}))
            with patch.object(nonmatching, "MANIFEST", path), patch.object(nonmatching, "PROOF", path), \
                    patch.object(nonmatching, "load_manifest", return_value={"functions": []}), \
                    patch.object(nonmatching, "fingerprint", return_value="changed"):
                with self.assertRaisesRegex(ValueError, "stale"):
                    nonmatching.verified_records()

    def test_image_namespaces_and_exact_metrics_are_preserved(self):
        def unit(name, image, size):
            return {"name": name, "measures": {"matched_code": "0"},
                    "functions": [{"name": "func_00200000", "size": str(size),
                                   "fuzzy_match_percent": 0,
                                   "metadata": {"virtual_address": str(0x200000)}}],
                    "sections": [{"name": ".text"}],
                    "metadata": {"image": image, "progress_categories": ["game"]}}
        report = {"units": [unit("game/core", "main", 40), unit("overlays/other", "other", 60)],
                  "measures": {"matched_code": "0", "matched_functions": 0, "total_functions": 2},
                  "categories": [{"id": "game", "measures": {}}]}
        exact = copy.deepcopy(report["measures"])
        rows = [{"image": "main", "address": "00200000", "source": "nonmatching/main/f.c", "instruction_similarity": 90},
                {"image": "other", "address": "00200000", "source": "nonmatching/other/f.c", "instruction_similarity": 50}]
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "progress").mkdir()
            proof = root / "proof.json"
            proof.write_text(json.dumps({"fingerprint": "tested"}))
            with patch.object(nonmatching, "ROOT", root), patch.object(nonmatching, "PROOF", proof), \
                    patch.object(nonmatching, "verified_records", return_value=rows):
                nonmatching.add_to_report(report, {"commit": "source-commit"})
            summary = json.loads((root / "progress/reconstruction.json").read_text())
            self.assertEqual(summary["reconstructed_code_bytes"], 100)
            self.assertEqual(summary["nonmatching_functions"], 2)
        self.assertEqual(report["measures"]["fuzzy_match_percent"], 66)
        for key, value in exact.items():
            self.assertEqual(report["measures"][key], value)

    def test_manifest_rejects_changed_sources_and_duplicate_addresses(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            source = root / "nonmatching/main/func_00200000.c"
            source.parent.mkdir(parents=True)
            source.write_text("int f(void) { return 1; }\n")
            row = {"image": "main", "address": "00200000", "source": str(source.relative_to(root)),
                   "source_sha256": nonmatching.sha256(source), "review": "checked", "known_issues": ["register allocation"]}
            manifest = root / "manifest.json"
            manifest.write_text(json.dumps({"functions": [row, row]}))
            with patch.object(nonmatching, "ROOT", root), patch.object(nonmatching, "MANIFEST", manifest):
                with self.assertRaisesRegex(ValueError, "duplicate"):
                    nonmatching.load_manifest()
                manifest.write_text(json.dumps({"functions": [row]}))
                source.write_text("int f(void) { return 2; }\n")
                with self.assertRaisesRegex(ValueError, "changed"):
                    nonmatching.load_manifest()


if __name__ == "__main__":
    unittest.main()
