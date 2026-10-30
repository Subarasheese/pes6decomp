/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
void *func_00C13280(u32);                           /* extern */

s32 func_00C5C590(u32 arg0, u32 arg1, s32 arg2, s32 (*arg3)(s16 *)) {
    s16 sp6C;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0;
    u32 var_s1;
    u8 temp_v0;

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
        temp_v0 = M2C_FIELD(func_00C13280(var_s1), u8 *, 6);
        temp_v1 = temp_v0 << 0x10;
        var_v0 = temp_v1 >> 8;
        if (temp_v0 & 0x8000) {
            var_v0 = (s32) (temp_v1 + 0xFF) >> 8;
        }
        sp6C = (s16) var_v0;
        var_s2 = arg3(&sp6C);
    }
    return var_s2;
}
