/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011DFEEC, D_005BD42C;
extern void func_0014A0A8(void);
extern s32 func_00147C90(NtguiWindowTask *task);
extern s32 func_001474E8(NtguiWindowTask *task);

void func_0014A1F0(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011DFEEC = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_0014A0A8, (s32)func_00147C90, 0);
            D_005BD42C = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD42C)
                func_00131760(D_005BD42C);
            func_00131560(&closeTask, 1, (s32)func_0014A0A8, (s32)func_001474E8, 0);
            func_00131580(&closeTask);
        }
    }
}
