/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int func_001A4800(void *, const void *, unsigned int);
extern int *D_005CAC08;
int func_001A4898(int index) {
    int value;
    func_001A4800(&value, D_005CAC08 + index, 4);
    return value;
}
