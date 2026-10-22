/* compiler: ee-gcc-2.96-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern "C" int func_00105E30(void) {
    int status;
    __asm__ volatile("mfc0 %0, $12" : "=r"(status));
    return (status ^ 1) & 1;
}
