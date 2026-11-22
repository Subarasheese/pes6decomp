/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern s32 func_0016FF38(s32, s32 *, u32, s32);
extern s32 func_001700B8(s32, s32, s32, u32, s32);

s32 func_001648D0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = 0;
    if (arg0 != NULL) {
        var_s0 = func_001700B8(arg1, arg2, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, u32 *, 0xC), M2C_FIELD(arg0, s32 *, 4));
    } else {
        func_0016FF38((s32) arg0, NULL, 0U, 0);
    }
    return var_s0;
}
