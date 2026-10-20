/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_00372A90;
extern int D_00374638;
extern char D_003F3858[];
extern void func_00108048(const char *fmt, ...);
extern int func_00115258(unsigned int, unsigned int, void *, int, void *);

int func_00115168(void)
{
    D_00374638 = 0;
    if (D_00372A90 > 0)
        func_00108048("sceCdStPause call\n");
    return func_00115258(0, 0, 0, 7, D_003F3858);
}
