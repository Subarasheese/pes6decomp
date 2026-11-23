/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_window_task.h"
extern NtguiWindowTask D_011D4DD8[256];
extern s32 func_00134328(void);
s32 func_00131580(NtguiWindowTask *input) {
    NtguiWindowTask task;
    s32 i;
    NtguiWindowTask *slot;
    NtguiWindowTask *copy;
    slot = D_011D4DD8;
    copy = &task;
    *copy = *input;
    for (i = 0; i < 256; ++i, ++slot) {
        if (slot->update == 0) {
            copy->handle = -1;
            if (copy->flags & 1)
                copy->handle = func_00134328();
            *slot = *copy;
            if (slot->start)
                slot->start(slot);
            return i;
        }
    }
    return -1;
}
