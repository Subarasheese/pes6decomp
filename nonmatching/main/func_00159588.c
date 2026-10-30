/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(s32, s32, M2C_UNK);               /* extern */

s32 func_00159588(s32 arg0, s32 arg1, s16 *arg2, s8 *arg3, u8 *arg4, u8 *arg5, u8 *arg6, s32 *arg7, s32 *arg_sp0, s32 *arg_sp8, s16 *arg_sp10) {
    s8 *sp0;
    s32 *sp4;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s8 temp_a1;
    u8 temp_v1;
    void *temp_a0;
    void *temp_s1;

    var_s0 = 0;
    sp0 = arg3;
    sp4 = arg7;
loop_1:
    if (var_s0 < arg1) {
        if (func_001C4698(arg0 + var_s0, *(s32 *)0x378068, 4) != 0) {
            var_s0 += 1;
            goto loop_1;
        }
    }
    var_v0 = -1;
    if ((var_s0 != arg1) && !(var_s0 & 3) && (temp_a0 = arg0 + var_s0, temp_s1 = temp_a0 + 8, ((M2C_FIELD(temp_a0, s16 *, 8) < 2) != 0))) {
        var_s0_2 = 0;
loop_9:
        if (var_s0_2 < arg1) {
            if (func_001C4698(arg0 + var_s0_2, *(s32 *)0x37806C, 4) != 0) {
                var_s0_2 += 1;
                goto loop_9;
            }
        }
        var_v0 = -1;
        if (var_s0_2 != arg1) {
            *arg2 = var_s0_2 + 8;
            temp_a2 = M2C_FIELD((arg0 + var_s0_2), s32 *, 4);
            *sp0 = -1;
            *sp4 = M2C_FIELD(temp_s1, s32 *, 4);
            *arg6 = M2C_FIELD(temp_s1, u8 *, 2);
            *arg4 = M2C_FIELD(temp_s1, u8 *, 0xE);
            temp_v1 = M2C_FIELD(temp_s1, u8 *, 0xC);
            *arg5 = temp_v1;
            *arg_sp0 = temp_a2 / (s8) temp_v1;
            *arg_sp8 = 1;
            temp_a1 = (s8) *arg4;
            switch (temp_a1) {                      /* irregular */
            case 16:
                *arg_sp10 = 0;
                break;
            case 8:
                *arg_sp10 = 1;
                break;
            case 4:
                *arg5 = (s8) *arg6 * 2;
                *arg_sp8 = (s32) temp_a1;
                *arg_sp0 = (s32) ((s32) (temp_a2 + ((u32) temp_a2 >> 0x1F)) >> 1) / (s8) *arg6;
                *arg4 = 0x10;
                *arg_sp10 = 2;
                break;
            }
            var_v0 = -1;
            if (*arg4 != 0) {
                if ((s8) *arg5 != 0) {
                    if ((u32) (*arg6 - 1) < 2U) {
                        var_v0 = (*sp4 != 0) ? 0 : -1;
                    }
                }
            }
        }
    }
    return var_v0;
}
