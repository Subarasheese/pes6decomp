/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B1A7E0(void *, s8, s32, s32);
s32 func_0097D080(M2C_UNK, u8);                     /* extern */
s32 func_00B199C0(s32, s32, M2C_UNK);               /* extern */
extern void *D_003EAD9C;

void func_00B30160(s32 arg0, u8 arg1) {
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
    temp_s0 = D_003EAD9C;
    if ((temp_s0 != NULL) && ((temp_s1 = arg0 & 0xFF, ((temp_s1 < 0x14) != 0)) || (var_a1 = M2C_FIELD(temp_s0, u8 *, 0x2ADD), (M2C_FIELD(((var_a1 * 0x48) + temp_s0), s32 *, 0x1CC4) == 1))) && ((temp_s1 < 0x14) || (M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x2ADE) * 0x48) + temp_s0), s32 *, 0x1E50) == 0) || (var_a1 = M2C_FIELD(temp_s0, u8 *, 0x2ADF), (M2C_FIELD(((var_a1 * 0x48) + temp_s0), s32 *, 0x1F94) == 1))) && ((temp_s1 < 0x14) || (func_0097D080(5, var_a1) & 0xFF))) {
        if (temp_s1 >= 0x12) {
            if (temp_s1 >= 0x14) {
                if (temp_s1 >= 0x17) {
                    var_v0 = temp_s1 - 0x17;
                } else {
                    var_v0 = temp_s1 - 0x14;
                }
                var_a0 = var_v0 & 0xFF;
            } else {
                var_a0 = 1;
            }
        } else {
            var_a0 = temp_s1 & 0xFF;
        }
        if (temp_s1 < 0x12) {
            var_a2 = 0;
        } else {
            var_a2 = 8;
        }
        temp_s4 = func_00B199C0(var_a0, (temp_s1 >= 0x12) & 0xFF, var_a2) & 0xFF;
        if (temp_s1 < 0x12) {
            var_v1 = 5;
        } else {
            var_v1 = 2;
        }
        temp_s2 = var_v1 & 0xFF;
        var_s3 = 0;
        if (temp_s2 > 0) {
            do {
                temp_s0_2 = temp_s0 + ((arg0 & 0xFF) * 0x168) + ((var_s3 & 0xFF) * 0x48);
                func_00B1A7E0(temp_s0_2 + 0x4D4, var_a0 & 0xFF, temp_s4, var_s3);
                if (M2C_FIELD(temp_s0_2, u16 *, 0x4D8) != 0xFFFF) {
                    M2C_FIELD((temp_s0 + temp_s1), s8 *, 0x2ACC) = (s8) var_s3;
                }
                var_s3 = (var_s3 + 1) & 0xFF;
            } while (var_s3 < temp_s2);
        }
    }
}
