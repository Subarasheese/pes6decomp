/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_00372A90;
extern int D_00374638;
extern char D_003F3858[];
extern void printf(const char *fmt, ...);
extern int func_00115258(unsigned int, unsigned int, void *, int, void *);

int func_001151B8(void)
{
    D_00374638 = 1;
    if (D_00372A90 > 0)
        printf("sceCdStResume call\n");
    return func_00115258(0, 0, 0, 8, D_003F3858);
}
