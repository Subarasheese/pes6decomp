/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int DIntr(void);
extern void EIntr(void);
extern void func_0010FD10(unsigned int mode);

int func_00110000(void) {
    int intr = DIntr();
    unsigned int mode = *(volatile unsigned int *)0x10001010;
    if ((mode & 0x80) == 0) {
        if (intr)
            EIntr();
        return 0;
    }
    func_0010FD10(mode & ~0xC80);
    if (intr)
        EIntr();
    return 1;
}
