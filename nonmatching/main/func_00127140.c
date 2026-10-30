/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, u32, u64);               /* extern */

s32 func_00127140(void *arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s64 (*temp_v0_2)(s64, u32, u32);
    s64 (*temp_v0_5)(s64, u32, u32);
    s64 temp_v0_3;
    s64 temp_v0_6;
    u32 temp_s5;
    u32 temp_s5_2;
    u32 temp_v0;
    u32 temp_v0_4;
    u32 temp_v1;
    u32 var_s4;
    u32 var_s4_2;
    u32 var_s5;
    u32 var_v0;

    temp_s5 = M2C_FIELD(arg0, u32 *, 0x34);
    var_v0 = M2C_FIELD(arg0, u32 *, 0x38);
    temp_s0 = M2C_FIELD(arg1, s32 *, 0x10);
    var_s1 = arg2;
    if (var_v0 >= temp_s5) {

    } else {
        var_v0 = M2C_FIELD(arg0, u32 *, 0x30);
    }
    var_s4 = var_v0 - temp_s5;
    temp_v0 = M2C_FIELD(arg1, u32 *, 0x14);
    if (temp_v0 < var_s4) {
        var_s4 = temp_v0;
    }
    if (var_s4 != 0) {
        if (var_s1 == -5) {
            var_s1 = 0;
        }
    }
    M2C_FIELD(arg1, u32 *, 0x14) = (u32) (M2C_FIELD(arg1, u32 *, 0x14) - var_s4);
    M2C_FIELD(arg1, s64 *, 0x18) = (s64) (M2C_FIELD(arg1, s64 *, 0x18) + ((u64) ((s64) var_s4 << 0x20) >> 0x20));
    temp_v0_2 = M2C_FIELD(arg0, s64 (**)(s64, u32, u32), 0x3C);
    if (temp_v0_2 != NULL) {
        temp_v0_3 = temp_v0_2(M2C_FIELD(arg0, s64 *, 0x40), temp_s5, var_s4);
        M2C_FIELD(arg0, s64 *, 0x40) = temp_v0_3;
        M2C_FIELD(arg1, s64 *, 0x38) = temp_v0_3;
    }
    func_001C4730(temp_s0, temp_s5, (u64) var_s4);
    temp_v1 = M2C_FIELD(arg0, u32 *, 0x30);
    var_s5 = temp_s5 + var_s4;
    var_s0 = temp_s0 + var_s4;
    if (var_s5 == temp_v1) {
        temp_s5_2 = M2C_FIELD(arg0, u32 *, 0x2C);
        if (M2C_FIELD(arg0, u32 *, 0x38) == temp_v1) {
            M2C_FIELD(arg0, u32 *, 0x38) = temp_s5_2;
        }
        temp_v0_4 = M2C_FIELD(arg1, u32 *, 0x14);
        var_s4_2 = M2C_FIELD(arg0, u32 *, 0x38) - temp_s5_2;
        if (temp_v0_4 < var_s4_2) {
            var_s4_2 = temp_v0_4;
        }
        if (var_s4_2 != 0) {
            if (var_s1 == -5) {
                var_s1 = 0;
            }
        }
        M2C_FIELD(arg1, u32 *, 0x14) = (u32) (M2C_FIELD(arg1, u32 *, 0x14) - var_s4_2);
        M2C_FIELD(arg1, s64 *, 0x18) = (s64) (M2C_FIELD(arg1, s64 *, 0x18) + ((u64) ((s64) var_s4_2 << 0x20) >> 0x20));
        temp_v0_5 = M2C_FIELD(arg0, s64 (**)(s64, u32, u32), 0x3C);
        if (temp_v0_5 != NULL) {
            temp_v0_6 = temp_v0_5(M2C_FIELD(arg0, s64 *, 0x40), temp_s5_2, var_s4_2);
            M2C_FIELD(arg0, s64 *, 0x40) = temp_v0_6;
            M2C_FIELD(arg1, s64 *, 0x38) = temp_v0_6;
        }
        func_001C4730(var_s0, temp_s5_2, (u64) var_s4_2);
        var_s5 = temp_s5_2 + var_s4_2;
        var_s0 += var_s4_2;
    }
    M2C_FIELD(arg1, s32 *, 0x10) = var_s0;
    M2C_FIELD(arg0, u32 *, 0x34) = var_s5;
    return var_s1;
}
