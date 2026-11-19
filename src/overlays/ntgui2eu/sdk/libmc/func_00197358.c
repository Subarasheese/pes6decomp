/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern short D_005CAA50;
int func_00197218(void);
void func_0019B1D0(void *);
int func_00197358(void) {
    int status[4];
    int result;
    if (func_00197218()) {
        result = D_005CAA50;
    } else {
        func_0019B1D0(status);
        result = status[0] >> 21;
        if (((unsigned int)status[0] >> 13 & 7) == 0) result = 540;
    }
    return result;
}
