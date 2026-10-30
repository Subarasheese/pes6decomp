/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B1A7E0(void *, s8, s32, s32);
s32 func_0097D080(M2C_UNK, u8);                     /* extern */
s32 func_00B199C0(s32, s32, M2C_UNK);               /* extern */
extern void *D_003EAD90;

void func_00B23580(s32 arg0, u8 arg1) {
    M2C_UNK var_a2;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_a0;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u8 var_a1;
    void *temp_s3;
    void *temp_s5;

    var_a1 = arg1;
    temp_s3 = D_003EAD90;
    if ((temp_s3 != NULL) && ((temp_s2 = arg0 & 0xFF, ((temp_s2 < 0xA) != 0)) || (var_a1 = M2C_FIELD(temp_s3, u8 *, 0xC25), (M2C_FIELD(((var_a1 * 0x48) + temp_s3), s32 *, 0x568) == 1))) && ((temp_s2 < 0xA) || (func_0097D080(5, var_a1) & 0xFF)) && ((temp_s2 < 0xA) || (M2C_FIELD(((M2C_FIELD(temp_s3, u8 *, 0xC26) * 0x48) + temp_s3), s32 *, 0x61C) == 0) || (M2C_FIELD(((M2C_FIELD(temp_s3, u8 *, 0xC29) * 0x48) + temp_s3), s32 *, 0x7A8) == 1))) {
        if (temp_s2 >= 6) {
            if (temp_s2 >= 8) {
                if (temp_s2 >= 0xA) {
                    if (temp_s2 >= 0xD) {
                        var_v0 = temp_s2 - 0xD;
                    } else {
                        var_v0 = temp_s2 - 0xA;
                    }
                    var_a0 = var_v0 & 0xFF;
                } else {
                    var_a0 = 1;
                }
            } else {
                var_a0 = 1;
            }
        } else {
            var_a0 = temp_s2 & 0xFF;
        }
        if (temp_s2 < 6) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 2;
        }
        if (temp_s2 < 6) {
            var_a2 = 1;
        } else {
            var_a2 = 9;
        }
        temp_s0 = func_00B199C0(var_a0, var_v0_2 & 0xFF, var_a2) & 0xFF;
        var_s4 = 0;
        do {
            temp_s5 = temp_s3 + ((arg0 & 0xFF) * 0x90) + ((var_s4 & 0xFF) * 0x48);
            func_00B1A7E0(temp_s5 + 0x290, var_a0 & 0xFF, temp_s0, var_s4);
            if (M2C_FIELD(temp_s5, u16 *, 0x294) != 0xFFFF) {
                M2C_FIELD((temp_s3 + temp_s2), s8 *, 0xC20) = (s8) var_s4;
            }
            var_s4 = (var_s4 + 1) & 0xFF;
        } while (var_s4 < 2);
    }
}
