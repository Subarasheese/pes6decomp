/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_00374638;
extern char D_003F3858[];
extern "C" int func_00115258(int, int, int, int, void *);
extern "C" int func_00114FA8(void) {
    D_00374638 = 0;
    return func_00115258(0, 0, 0, 3, D_003F3858);
}
