/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_00374638;
extern "C" int func_00115258(int, int, int, int, int);
extern "C" int func_00114F10(int a, int b) {
    D_00374638 = 1;
    return func_00115258(a, 0, 0, 1, b);
}
