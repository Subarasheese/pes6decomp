/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/srd.c (SRD_SetLockHost). See THIRD_PARTY.md. */

extern void printf(const char *format, ...);
extern volatile int D_003850DC;
extern int D_0038510C;

void func_0016D640(int value) {
    D_003850DC = (char)value;
    D_0038510C = D_003850DC;
    if (value == 1) {
        printf("SRD: Enable HostLock\r\n");
    }
}
