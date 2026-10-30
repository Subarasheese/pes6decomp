/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B1A7E0(void *, s8, s32, s32);
s32 func_0097D080(M2C_UNK);                         /* extern */
s32 func_00B199C0(s32, s32, M2C_UNK);               /* extern */
extern void *D_003EAD5C;

void func_00B07BF0(s32 arg0) {
    M2C_UNK var_a2;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_a0;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s3;
    void *temp_s5;

    temp_s3 = D_003EAD5C;
    if ((temp_s3 != NULL) && ((temp_s2 = arg0 & 0xFF, ((temp_s2 < 0xB) != 0)) || (M2C_FIELD(temp_s3, s32 *, 0x55C) == 1)) && ((temp_s2 < 0xB) || (func_0097D080(5) & 0xFF)) && ((temp_s2 < 0xB) || (M2C_FIELD(temp_s3, s32 *, 0x610) == 0) || (M2C_FIELD(temp_s3, s32 *, 0x79C) == 1))) {
        if (temp_s2 >= 6) {
            if (temp_s2 >= 8) {
                if (temp_s2 >= 0xA) {
                    if (temp_s2 >= 0xE) {
                        var_v0 = temp_s2 - 0xE;
                    } else {
                        var_v0 = temp_s2 - 0xB;
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
            func_00B1A7E0(temp_s5 + 0x284, var_a0 & 0xFF, temp_s0, var_s4);
            if (M2C_FIELD(temp_s5, u16 *, 0x288) != 0xFFFF) {
                M2C_FIELD((temp_s3 + temp_s2), s8 *, 0xCA4) = (s8) var_s4;
            }
            var_s4 = (var_s4 + 1) & 0xFF;
        } while (var_s4 < 2);
    }
}
