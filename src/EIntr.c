/* compiler: ee-gcc-2.96-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Enables interrupts (EI) and returns whether they were enabled before: libkernel's EIntr(). */
int EIntr(void)
{
    int status;
    __asm__ volatile("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    __asm__ volatile("ei");
    return status != 0;
}
