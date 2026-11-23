/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011DFAE4, D_005BD3B8;
extern void func_001461C8(void);
extern s32 func_001451E8(NtguiWindowTask *task);
extern s32 func_00144F18(NtguiWindowTask *task);

void func_00146258(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011DFAE4 = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_001461C8, (s32)func_001451E8, 0);
            D_005BD3B8 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD3B8)
                func_00131760(D_005BD3B8);
            func_00131560(&closeTask, 1, (s32)func_001461C8, (s32)func_00144F18, 0);
            func_00131580(&closeTask);
        }
    }
}
