/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_widget_timer.h"

extern s32 D_005BFCA8[];
extern s32 func_00163C30(void *widget, s32 type);
extern s32 func_0016A788(void *queue, u64 delay, void *manager, void *user, NtTimerCallback callback);

s32 func_00167BB8(void *manager, u64 delay, void *user, NtTimerCallback callback) {
    if (!manager)
        return 0;
    if (!func_00163C30(manager, D_005BFCA8[0]))
        return 0;
    return func_0016A788((u8 *)manager + 0x9d0, delay, manager, user, callback);
}
