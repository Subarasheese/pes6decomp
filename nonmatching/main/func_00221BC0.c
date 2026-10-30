/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223B60(void);
extern s32 func_00223B70(void);
extern s32 func_00223960(u16);
s32 func_00210DF0(s32);                             /* extern */
M2C_UNK func_00223520(u16 *, u8 *, s32);            /* extern */
M2C_UNK func_002245D0(s32, s32, s8);                /* extern */

void func_00221BC0(u16 arg0, u8 arg1, s32 arg2, s8 arg3) {
    u16 sp4C;
    u8 sp4F;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a2;
    s8 *var_v1;

    var_a2 = arg2;
    sp4C = arg0;
    sp4F = arg1;
    if ((var_a2 != 0) && (var_a2 != 1)) {
        var_a2 = 0;
    }
    temp_s2 = arg0 & 0xFFFF;
    if ((temp_s2 >= 0x40) && (temp_s2 < 0xCC)) {
        temp_s1 = arg1 & 0xFF;
        if (temp_s1 < 0x20) {
            if (var_a2 == 0) {
                if (func_00210DF0(var_a2) == 2) {
                    func_002245D0(temp_s2, temp_s1, arg3);
                }
            } else {
                var_v1 = func_00223B60() + (sp4F + ((sp4C - 0x40) << 5));
                goto block_17;
            }
        }
    } else {
        if ((u32) (temp_s2 - 0x126) >= 2U) {
            func_00223520(&sp4C, &sp4F, var_a2);
            if (((s32) sp4C < 0x49) && ((s32) sp4F < 0x17)) {
                var_v1 = func_00223B70() + (sp4F + (sp4C * 0x17));
block_17:
                *var_v1 = arg3;
            }
            return;
        }
        M2C_FIELD((sp4F + func_00223960((u16) temp_s2)), s8 *, 0x1174) = arg3;
    }
}
