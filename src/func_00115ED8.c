/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_00374650;
extern int D_00374654;
extern int D_00374658;
extern int D_003F4E40;
void func_00105380(int);
int WaitSema(int);
int func_001053B0(int);

int func_00115ED8(int arg0, int *arg1, int *arg2) {
    int state;
    if (D_00374650 == 0) return -1;
    if (func_001053B0(D_00374658) < 0) state = 1;
    else state = 0;
    if (arg0 == 0 && state != 0) {
        state = 0;
        WaitSema(D_00374658);
    }
    state = state == 0;
    if (arg1 != 0) *arg1 = D_00374650;
    if (state != 0) {
        D_00374650 = 0;
        if (arg2 != 0) *arg2 = D_003F4E40;
        func_00105380(D_00374654);
    }
    return state;
}
