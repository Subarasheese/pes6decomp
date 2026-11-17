"""Guard against counting assembly as recovered C through alternate spellings."""
import unittest

import asm_policy


class AssemblyPolicyTests(unittest.TestCase):
    def test_rejects_assembly_dialects_and_inclusion_macros(self):
        cases = [
            'void f(void) { __asm__ __volatile__("sync"); }',
            'void f(void) { asm volatile("ei"); }',
            'void f(void) { __asm("sync"); }',
            'void f(void) { __as\\\nm__("sync"); }',
            '  __asm__(".include \\"local.s\\"");',
            'asm void f() { sync }',
            'register int value __asm__("$3");',
            'INCLUDE_ASM("local", func_00100000);',
            '#define WRAP(x) INCLUDE_RODATA("local", x)',
        ]
        for source in cases:
            with self.subTest(source=source):
                self.assertTrue(asm_policy.violations(source))

    def test_allows_documentation_literals_and_ordinary_c(self):
        cases = [
            '/* asm("sync"); INCLUDE_ASM */ int f(void) { return 1; }',
            '// __asm__("sync");\nint f(void) { return 1; }',
            'const char *s = "asm(\\"sync\\"); INCLUDE_ASM";',
            "char quote = '\\''; int assemblyCount = 1;",
            'int f(int value) { return value != 0; }',
            '// continued comment \\\n__asm__("sync");\nint f(void) { return 1; }',
        ]
        for source in cases:
            with self.subTest(source=source):
                self.assertFalse(asm_policy.violations(source))

    def test_drafts_may_use_vu0_macro_instructions_only(self):
        vu0 = ('void f(void *o, void *i) { __asm__ volatile("lqc2 $vf4, 0x0(%1)\\n vmulx.xyz $vf6, $vf4, $vf5x\\n'
               ' vmaddw.xyzw $vf9, $vf7, $vf0w\\n qmfc2.ni %0, $vf6\\n sqc2 $vf6, 0x0(%0)" : : "r"(o), "r"(i) : "memory"); }')
        self.assertFalse(asm_policy.violations(vu0, allow_vu0=True))
        # sources under src/ keep the strict rule
        self.assertTrue(asm_policy.violations(vu0))
        rejected = [
            'void f(void) { __asm__ volatile("vadd.xyz $vf1, $vf2, $vf3\\n sync"); }',   # a non-VU0 instruction
            'void f(void) { __asm__("vnop"); __asm__("ei"); }',                          # one VU0 block, one not
            'register int value __asm__("$3");',                                         # register pinning
            'asm void f() { vnop }',                                                     # asm function body
            'INCLUDE_ASM("local", func_00100000);',
        ]
        for source in rejected:
            with self.subTest(source=source):
                self.assertTrue(asm_policy.violations(source, allow_vu0=True))

    def test_detects_register_pinning(self):
        self.assertTrue(asm_policy.fakematch('register int x __asm__("$3");'))
        self.assertFalse(asm_policy.fakematch('/* register int x asm("$3"); */'))


if __name__ == "__main__":
    unittest.main()
