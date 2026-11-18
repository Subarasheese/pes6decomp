/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int func_001A4728(void);
extern void func_001A4778(void);
extern void func_001A5018(unsigned int mode);

int func_001A5308(void) {
    int intr = func_001A4728();
    unsigned int mode = *(volatile unsigned int *)0x10001010;
    if ((mode & 0x80) == 0) {
        if (intr)
            func_001A4778();
        return 0;
    }
    func_001A5018(mode & ~0xC80);
    if (intr)
        func_001A4778();
    return 1;
}
