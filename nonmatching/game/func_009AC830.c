/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002849D0(void);
M2C_UNK func_009945C0(M2C_UNK);                     /* extern */
s32 func_009ACA70(s64, s32);                        /* extern */
s32 func_009ACB20(void *, s64, s32);                /* extern */
M2C_UNK func_009AD400(void *, s32);                 /* extern */
M2C_UNK func_009AD9F0(void *, s32);                 /* extern */
s32 func_009ADB60(void *, void *);                  /* extern */
s32 func_009AE900(void *, void *, s32);             /* extern */

s32 func_009AC830(void *arg0, s64 arg1, s32 arg2, s32 arg3) {
    f32 sp70;
    f32 sp74;
    f32 sp78;
    M2C_UNK var_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s64 temp_s0;

    temp_s0 = (s64) (arg1 << 0x38) >> 0x38;
    sp70 = M2C_FIELD(arg0, f32 *, 0x24);
    sp74 = M2C_FIELD(arg0, f32 *, 0x28);
    sp78 = M2C_FIELD(arg0, f32 *, 0x2C);
    switch (temp_s0) {                              /* irregular */
    case -1:
        var_v0 = func_009ADB60(arg0 + 0x30, arg0) & 0xFF;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        var_v0 = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        break;
    case 1:
        var_v0 = func_009AE900(arg0 + 0x30, arg0, arg3) & 0xFF;
        break;
    }
    if (var_v0 & 0xFF) {
        temp_s1 = func_009ACB20(arg0, arg1, var_v0) & 0xFF;
        if (temp_s1 != 0) {
            func_009AD9F0(arg0, arg3);
            temp_s2 = temp_s1 & ~(temp_s1 & (arg2 & 0xFF) & 0xFF) & 0xFF;
            if (temp_s2 != 0) {
                func_009AD400(arg0, func_009ACA70(arg1, temp_s2));
                if (temp_s0 != 1) {
                    temp_v1 = temp_s2 & 0xFF;
                    if (temp_v1 & 0x18) {
                        var_s0 = 6;
                    } else if (!(temp_v1 & 4)) {
                        var_s0 = 8;
                    } else {
                        var_s0 = 7;
                    }
                } else {
                    temp_v1_2 = temp_s2 & 0xFF;
                    if (temp_v1_2 & 0x18) {
                        var_s0 = 9;
                    } else if (!(temp_v1_2 & 4)) {
                        var_s0 = 0xB;
                    } else {
                        var_s0 = 0xA;
                    }
                }
                func_002849D0();
                func_009945C0(var_s0);
            }
            if ((sp70 != 0.0f) && ((sp70 * M2C_FIELD(arg0, f32 *, 0x24)) <= 0.0f)) {
                goto block_20;
            }
            if ((sp74 == 0.0f) || !((sp74 * M2C_FIELD(arg0, f32 *, 0x28)) <= 0.0f)) {
                if ((sp78 != 0.0f) && ((sp78 * M2C_FIELD(arg0, f32 *, 0x2C)) <= 0.0f)) {
                    goto block_20;
                }
            } else {
block_20:
                func_009AD400(arg0, func_009ACA70(arg1, temp_s1));
            }
            return temp_s1;
        }
        return temp_s1;
    }
    return var_v0;
}
