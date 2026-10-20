/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_00374650;
extern "C" int func_00115898(void *, void *, void *, int);
extern "C" int func_001159C0(void *a, void *b, void *c) {
    int r = func_00115898(a, b, c, 0x40);
    if (r == 0) D_00374650 = 0xB;
    return r;
}
