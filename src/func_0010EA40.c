/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int func_00105770(int);
void func_001057E0(void);
void func_001115A8(int, int);

int func_0010EA40(void) {
    if (func_00105770(4) & 0x40000) {
        func_001057E0();
        func_001115A8(1, 1);
        func_001115A8(0, 1);
        return 1;
    }
    return 0;
}
