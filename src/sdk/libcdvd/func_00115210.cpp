/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_00372A90;
extern char D_003F3858[];
extern "C" void printf(const char *, ...);
extern "C" int func_00115258(unsigned, unsigned, void *, int, void *);
extern "C" int func_00115210(void) {
    if (D_00372A90 > 0) printf("sceCdStStat call\n");
    return func_00115258(0, 0, 0, 6, D_003F3858);
}
