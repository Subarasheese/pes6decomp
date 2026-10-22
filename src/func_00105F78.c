/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
int DIntr(void);
void EIntr(void);
int func_001050C0(void *arg);

int func_00105F78(void *arg)
{
    int status;
    int ret;

    __asm__ volatile("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    if (status)
        DIntr();
    ret = func_001050C0(arg);
    __asm__ volatile("sync.l");
    if (status)
        EIntr();
    return ret;
}
