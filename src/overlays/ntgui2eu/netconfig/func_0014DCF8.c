/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"

extern s32 D_011E0A50, D_011E0A54;
extern void func_0014DC58(void);
extern s32 func_0014D9D0(NtguiWindowTask *task);
extern s32 func_0014D840(NtguiWindowTask *task);

void func_0014DCF8(s32 mode) {
    NtguiWindowTask openTask, closeTask;
    D_011E0A50 = mode;
    if (mode >= 0) {
        if (mode < 7) {
            func_00131560(&openTask, 1, (s32)func_0014DC58, (s32)func_0014D9D0, 0);
            D_011E0A54 = func_00131580(&openTask);
        } else if (mode < 14) {
            if (D_011E0A54)
                func_00131760(D_011E0A54);
            func_00131560(&closeTask, 1, (s32)func_0014DC58, (s32)func_0014D840, 0);
            func_00131580(&closeTask);
        }
    }
}
