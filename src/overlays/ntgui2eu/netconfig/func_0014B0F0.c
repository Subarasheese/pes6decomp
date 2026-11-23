/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011DFFB8, D_005BD460;
extern void func_0014B048(void);
extern s32 func_0014AA70(NtguiWindowTask *task);
extern s32 func_0014A758(NtguiWindowTask *task);

void func_0014B0F0(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011DFFB8 = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_0014B048, (s32)func_0014AA70, 0);
            D_005BD460 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD460)
                func_00131760(D_005BD460);
            func_00131560(&closeTask, 1, (s32)func_0014B048, (s32)func_0014A758, 0);
            func_00131580(&closeTask);
        }
    }
}
