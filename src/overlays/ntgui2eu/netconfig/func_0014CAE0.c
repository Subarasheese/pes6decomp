/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011E09E8, D_005BD8C4;
extern void func_0014CA10(void);
extern s32 func_0014C388(NtguiWindowTask *task);
extern s32 func_0014BFB8(NtguiWindowTask *task);

void func_0014CAE0(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011E09E8 = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_0014CA10, (s32)func_0014C388, 0);
            D_005BD8C4 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_005BD8C4)
                func_00131760(D_005BD8C4);
            func_00131560(&closeTask, 1, (s32)func_0014CA10, (s32)func_0014BFB8, 0);
            func_00131580(&closeTask);
        }
    }
}
