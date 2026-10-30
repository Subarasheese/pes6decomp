/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00178A68(void *, void *);
s32 func_00178958(s32);                             /* extern */
u32 func_001C83D8(u32, s32, M2C_UNK);               /* extern */

u32 func_00178AA0(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_s1;
    u32 temp_s4;
    u32 temp_v0;
    u32 var_s0;
    u32 var_v0;

    M2C_FIELD(arg3, s32 *, 0) = 0;
    M2C_FIELD(arg3, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, u32 *, 0);
    var_s0 = temp_v0;
    temp_s4 = temp_v0 + M2C_FIELD(arg0, s32 *, 4);
loop_4:
    temp_s1 = var_s0 < temp_s4;
    if (temp_s1 != 0) {
        if (func_001C83D8(var_s0, arg1, 7) == 0) {
            func_00178A68((void *) var_s0, arg3);
            goto block_7;
        }
        if ((arg2 == 0) || (var_v0 = func_001C83D8(var_s0, arg2, 7), (var_v0 != 0))) {
            var_s0 = var_s0 + func_00178958(var_s0 + 8) + 0x10;
            goto loop_4;
        }
    } else {
block_7:
        var_v0 = (temp_s1 != 0) ? var_s0 : 0U;
    }
    return var_v0;
}
