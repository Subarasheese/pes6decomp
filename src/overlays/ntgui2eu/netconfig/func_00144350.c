/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011DFA70, D_005BD34C;
extern void func_001442B8(void);
extern s32 func_00143C18(NtguiWindowTask *task);
extern s32 func_00143830(NtguiWindowTask *task);

void func_00144350(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011DFA70 = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 0, (s32)func_001442B8, (s32)func_00143C18, 0);
            D_005BD34C = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD34C)
                func_00131760(D_005BD34C);
            func_00131560(&closeTask, 1, (s32)func_001442B8, (s32)func_00143830, 0);
            func_00131580(&closeTask);
        }
    }
}
