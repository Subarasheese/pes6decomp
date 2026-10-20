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

    def test_detects_register_pinning(self):
        self.assertTrue(asm_policy.fakematch('register int x __asm__("$3");'))
        self.assertFalse(asm_policy.fakematch('/* register int x asm("$3"); */'))


if __name__ == "__main__":
    unittest.main()
