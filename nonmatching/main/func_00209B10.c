/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_0021F440(s32, s32, u8);                    /* extern */
s32 func_0021F520(s32, u8, u8);                     /* extern */
s32 func_0021FA50(s32);                             /* extern */
M2C_UNK func_002659F0(s32, s32, u8 *);              /* extern */

void func_00209B10(s32 arg0, M2C_UNK arg1, u8 arg2) {
    u8 sp48;
    s8 sp49;
    s8 sp4A;
    s8 sp4B;
    s8 sp4C;
    s8 sp4D;
    s8 sp4E;
    s8 sp4F;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_v0;
    u8 *var_s0_2;
    u8 temp_a1;
    u8 var_a2;

    var_a2 = arg2;
    if ((arg0 < 0x40) || (arg0 >= 0xCC)) {
        if ((u32) (arg0 - 0x126) >= 2U) {
            var_s0 = 0;
            sp48 = 0xFF;
            sp49 = 0xFF;
            sp4A = 0xFF;
            sp4B = 0xFF;
            sp4C = 0xFF;
            sp4D = 0xFF;
            sp4E = 0xFF;
            sp4F = 0xFF;
        } else {
            goto block_5;
        }
    } else {
block_5:
        var_s1 = 0;
        var_s0_2 = &sp48;
        do {
            temp_v0 = func_0021F440(arg0 & 0xFFFF, var_s1, var_a2);
            var_a2 = M2C_FIELD(temp_v0, u8 *, 0);
            var_s1 += 1;
            temp_a1 = M2C_FIELD(temp_v0, u8 *, 1);
            M2C_FIELD(var_s0_2, u8 *, 0) = var_a2;
            M2C_FIELD(var_s0_2, u8 *, 1) = temp_a1;
            M2C_FIELD(var_s0_2, u8 *, 2) = (u8) M2C_FIELD(temp_v0, u8 *, 2);
            M2C_FIELD(var_s0_2, u8 *, 3) = (u8) M2C_FIELD(temp_v0, u8 *, 3);
            var_s0_2 += 4;
        } while (var_s1 < 2);
        var_s0 = func_0021F520(arg0 & 0xFFFF, temp_a1, var_a2) & 0xFF;
    }
    func_002659F0(func_0021FA50(arg0 & 0xFFFF), var_s0, &sp48);
}
