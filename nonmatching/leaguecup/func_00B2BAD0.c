/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B1A7E0(void *, s8, s32, s32);
s32 func_0097D080(M2C_UNK, u8);                     /* extern */
s32 func_00B199C0(s32, s32, M2C_UNK);               /* extern */
extern void *D_003EAD98;

void func_00B2BAD0(s32 arg0, u8 arg1) {
    M2C_UNK var_a2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 var_a0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    u8 var_a1;
    void *temp_s0;
    void *temp_s0_2;

    var_a1 = arg1;
    temp_s0 = D_003EAD98;
    if ((temp_s0 != NULL) && ((temp_s1 = arg0 & 0xFF, ((temp_s1 < 0xC) != 0)) || (var_a1 = M2C_FIELD(temp_s0, u8 *, 0x134D), (M2C_FIELD(((var_a1 * 0x48) + temp_s0), s32 *, 0xADC) == 1))) && ((temp_s1 < 0xC) || (M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x134E) * 0x48) + temp_s0), s32 *, 0xBD8) == 0) || (var_a1 = M2C_FIELD(temp_s0, u8 *, 0x134F), (M2C_FIELD(((var_a1 * 0x48) + temp_s0), s32 *, 0xC8C) == 1))) && ((temp_s1 < 0xC) || (func_0097D080(5, var_a1) & 0xFF))) {
        if (temp_s1 >= 0xA) {
            if (temp_s1 >= 0xC) {
                if (temp_s1 >= 0xF) {
                    var_v0 = temp_s1 - 0xF;
                } else {
                    var_v0 = temp_s1 - 0xC;
                }
                var_a0 = var_v0 & 0xFF;
            } else {
                var_a0 = 1;
            }
        } else {
            var_a0 = temp_s1 & 0xFF;
        }
        if (temp_s1 < 0xA) {
            var_a2 = 0;
        } else {
            var_a2 = 8;
        }
        temp_s4 = func_00B199C0(var_a0, (temp_s1 >= 0xA) & 0xFF, var_a2) & 0xFF;
        if (temp_s1 < 0xA) {
            var_v1 = 3;
        } else {
            var_v1 = 2;
        }
        temp_s2 = var_v1 & 0xFF;
        var_s3 = 0;
        if (temp_s2 > 0) {
            do {
                temp_s0_2 = temp_s0 + ((arg0 & 0xFF) * 0xD8) + ((var_s3 & 0xFF) * 0x48);
                func_00B1A7E0(temp_s0_2 + 0x33C, var_a0 & 0xFF, temp_s4, var_s3);
                if (M2C_FIELD(temp_s0_2, u16 *, 0x340) != 0xFFFF) {
                    M2C_FIELD((temp_s0 + temp_s1), s8 *, 0x1344) = (s8) var_s3;
                }
                var_s3 = (var_s3 + 1) & 0xFF;
            } while (var_s3 < temp_s2);
        }
    }
}
