/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011E6BFC, D_005BEE60;
extern void func_00160CE8(void);
extern s32 func_0015FF80(NtguiWindowTask *task);
extern s32 func_0015FCC8(NtguiWindowTask *task);

void func_00160E98(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011E6BFC = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_00160CE8, (s32)func_0015FF80, 0);
            D_005BEE60 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BEE60)
                func_00131760(D_005BEE60);
            func_00131560(&closeTask, 1, (s32)func_00160CE8, (s32)func_0015FCC8, 0);
            func_00131580(&closeTask);
        }
    }
}
