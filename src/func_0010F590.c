/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int func_0010F4F8(void *, const void *, unsigned int);
extern int *D_00371A08;
int func_0010F590(int index) {
    int value;
    func_0010F4F8(&value, D_00371A08 + index, 4);
    return value;
}
