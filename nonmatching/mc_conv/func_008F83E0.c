/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008F83E0(s32 arg0, void *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a5;
    s32 var_a5_2;
    u8 *temp_a4;
    u8 *temp_a4_2;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a2_4;
    u8 var_v1;
    u8 var_v1_2;
    void *var_a3;

    var_a5 = 0;
    M2C_FIELD(arg1, u8 *, 0x3C) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg1, u8 *, 0x3D) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg1, u8 *, 0x3E) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg1, u8 *, 0x3F) = (u8) M2C_FIELD(arg1, u8 *, 3);
    do {
        temp_a4 = arg0 + var_a5;
        temp_a2 = *temp_a4;
        temp_v1 = (s32) temp_a2 >> 4;
        if (temp_v1 == 0xF) {
            var_v1 = temp_a2 & 0xF;
            goto block_5;
        }
        if (temp_v1 == 0) {
            var_v1 = temp_a2 | 0xF0;
block_5:
            *temp_a4 = var_v1;
        }
        temp_a2_2 = *temp_a4;
        temp_v1_2 = temp_a2_2 & 0xF;
        if (temp_v1_2 == 0xF) {
            var_v1_2 = temp_a2_2 & 0xF0;
            goto block_11;
        }
        if (temp_v1_2 == 0) {
            var_v1_2 = temp_a2_2 | 0xF;
block_11:
            *temp_a4 = var_v1_2;
        }
        var_a5 += 1;
    } while (var_a5 < 0x200);
    M2C_FIELD(arg1, u8 *, 3) = 0U;
    var_a2 = 1;
    M2C_FIELD(arg1, u8 *, 2) = 0U;
    var_a3 = arg1 + 4;
    M2C_FIELD(arg1, u8 *, 1) = 0U;
    M2C_FIELD(arg1, u8 *, 0) = 0U;
loop_14:
    if (M2C_FIELD(var_a3, u8 *, 3) != 0) {
        var_a2 += 1;
        var_a3 += 4;
        if (var_a2 >= 0x10) {

        } else {
            goto loop_14;
        }
    }
    if (var_a2 != 0x10) {
        var_a5_2 = 0;
        do {
            temp_a4_2 = arg0 + var_a5_2;
            temp_a2_3 = *temp_a4_2;
            if (((s32) temp_a2_3 >> 4) == 0) {
                *temp_a4_2 = temp_a2_3 & 0xF;
                *temp_a4_2 |= (var_a2 * 0x10) & 0xFF;
            }
            temp_a2_4 = *temp_a4_2;
            if (!(temp_a2_4 & 0xF)) {
                *temp_a4_2 = temp_a2_4 & ((var_a2 | 0xF0) & 0xFF);
            }
            var_a5_2 += 1;
        } while (var_a5_2 < 0x200);
    }
}
