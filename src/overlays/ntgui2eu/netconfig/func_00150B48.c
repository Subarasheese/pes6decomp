/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern void func_00152010(s32 opacity, s32 frames);
extern s32 D_011E0CA0, D_005BDA24;
extern void func_00150AA8(NtguiWindowTask *task);
extern s32 func_00150980(NtguiWindowTask *task);
extern s32 func_001505C0(NtguiWindowTask *task);

void func_00150B48(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011E0CA0 = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_00150AA8, (s32)func_00150980, 0);
            D_005BDA24 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BDA24)
                func_00131760(D_005BDA24);
            func_00131560(&closeTask, 1, (s32)func_00150AA8, (s32)func_001505C0, 0);
            func_00131580(&closeTask);
            func_00152010(255, 20);
        }
    }
}
