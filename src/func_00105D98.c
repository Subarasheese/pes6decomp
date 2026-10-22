/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
void DIntr(void);
void EIntr(void);
void func_00105CF0(unsigned int, unsigned int);

void func_00105D98(unsigned int start, unsigned int end) {
    unsigned int enabled;
    __asm__ volatile ("mfc0 %0,$12" : "=r" (enabled));
    enabled &= 0x10000;
    if (enabled)
        DIntr();
    func_00105CF0(start & ~63U, end & ~63U);
    if (enabled)
        EIntr();
}
