/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011E9C8(s32);                         /* extern */
extern char D_011C8A40[];

s32 func_0011E550(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    var_s0 = ((void *)D_011C8A40);
loop_1:
    if ((M2C_FIELD(var_s0, s32 *, 0) == arg0) && (var_s1 != arg1) && ((arg2 != 0) || (M2C_FIELD(var_s0, s32 *, 0x18) >= M2C_FIELD(var_s0, s32 *, 8)))) {
        var_v0 = 0;
        if (M2C_FIELD(var_s0, s32 *, 0x10) >= arg3) {
            func_0011E9C8(var_s1);
            goto block_7;
        }
    } else {
block_7:
        var_s1 += 1;
        var_s0 += 0xB4;
        if (var_s1 >= 0x100) {
            var_v0 = 1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
