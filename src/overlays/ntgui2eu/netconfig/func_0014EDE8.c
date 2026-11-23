/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011E0AC0, D_005BD988;
extern void func_0014ED40(void);
extern s32 func_0014E8D0(NtguiWindowTask *task);
extern s32 func_0014E5A0(NtguiWindowTask *task);

void func_0014EDE8(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011E0AC0 = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_0014ED40, (s32)func_0014E8D0, 0);
            D_005BD988 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD988)
                func_00131760(D_005BD988);
            func_00131560(&closeTask, 1, (s32)func_0014ED40, (s32)func_0014E5A0, 0);
            func_00131580(&closeTask);
        }
    }
}
