/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011DFB4C, D_005BD3F0;
extern void func_00147190(void);
extern s32 func_00146D00(NtguiWindowTask *task);
extern s32 func_001468D0(NtguiWindowTask *task);

void func_00147240(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011DFB4C = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_00147190, (s32)func_00146D00, 0);
            D_005BD3F0 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD3F0)
                func_00131760(D_005BD3F0);
            func_00131560(&closeTask, 1, (s32)func_00147190, (s32)func_001468D0, 0);
            func_00131580(&closeTask);
        }
    }
}
