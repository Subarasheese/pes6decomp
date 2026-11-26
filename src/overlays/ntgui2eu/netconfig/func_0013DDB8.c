/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_005BD24C;
extern s32 D_011DA4FC, D_005BD250;
extern void func_0013DCF0(NtguiWindowTask *task);
extern s32 func_0013D6B8(NtguiWindowTask *task);
extern s32 func_0013D0D0(NtguiWindowTask *task);

void func_0013DDB8(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011DA4FC = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_0013DCF0, (s32)func_0013D6B8, 0);
            D_005BD250 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD250)
                func_00131760(D_005BD250);
            if (D_005BD24C)
                func_00131760(D_005BD24C);
            func_00131560(&closeTask, 1, (s32)func_0013DCF0, (s32)func_0013D0D0, 0);
            func_00131580(&closeTask);
        }
    }
}
