/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
u32 func_002C6130(u32);                             /* extern */
u32 func_00C13740(u32, M2C_UNK);                    /* extern */

s32 func_00C5BF80(u32 arg0, u32 arg1, s32 arg2) {
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;

    var_s2 = 0;
    var_s1 = -1U;
    if ((arg0 != -1U) && (arg1 != -1U)) {
        var_s1 = arg1;
        if (arg1 < arg0) {
            goto block_3;
        }
loop_5:
        if ((func_00C132C0((void *) var_s1) & 0xFF) == 0xA) {
            if ((arg2 & 0xFF) != (func_00C132B0((void *) var_s1) & 0xFF)) {
                goto block_8;
            }
        } else {
block_8:
            var_s1 = func_00C137B0(var_s1);
            if (var_s1 < arg0) {
block_3:
                var_s1 = -1U;
            } else {
                goto loop_5;
            }
        }
    }
    if (var_s1 != -1U) {
        temp_v0 = func_002C6130(var_s1);
        if (temp_v0 != -1U) {
            var_s2 = func_00C13740(var_s1, 0x19) < temp_v0;
        }
    }
    return var_s2;
}
