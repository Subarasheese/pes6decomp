/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern "C" {
extern int D_003729B8;
extern int D_003729BC;
extern char D_003F2FC8[];
void func_001C48E8(char *, int, int);

void func_001113F0(void) {
    D_003729B8 = 0;
    D_003729BC = 0;
    return func_001C48E8(D_003F2FC8, 0, 0x200);
}
}
