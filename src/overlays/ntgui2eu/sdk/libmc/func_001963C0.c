/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_005CAA30;
extern int D_005CAA34;
extern int D_005CAA38;
extern int D_011FED80;
void func_0019B140(int);
int func_0019B160(int);
int func_0019B170(int);

int func_001963C0(int arg0, int *arg1, int *arg2) {
    int state;
    if (D_005CAA30 == 0) return -1;
    if (func_0019B170(D_005CAA38) < 0) state = 1;
    else state = 0;
    if (arg0 == 0 && state != 0) {
        state = 0;
        func_0019B160(D_005CAA38);
    }
    state = state == 0;
    if (arg1 != 0) *arg1 = D_005CAA30;
    if (state != 0) {
        D_005CAA30 = 0;
        if (arg2 != 0) *arg2 = D_011FED80;
        func_0019B140(D_005CAA34);
    }
    return state;
}
