/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008075A0(s32, u8 *, s32);              /* extern */
M2C_UNK func_00807A60(s32, u8 *, s32, s32);         /* extern */
M2C_UNK func_0081D5A0(void *, s8, u8 *);            /* extern */

void func_0081F390(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_a1_2;
    u8 *temp_a2;
    u8 *temp_a2_3;
    u8 temp_a1;

    var_a3 = arg3;
    temp_a2 = M2C_FIELD(arg0, u8 **, 0x6C);
    temp_a1 = *temp_a2;
    temp_s1 = (temp_a1 - 1) & 0xFF;
    var_a0 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), u8 *, 0x40) == temp_s1;
    temp_s0 = (temp_s1 - 1) & 0xFF;
    if (var_a0 != 0) {
        var_a0 = (s32) temp_a1 >= 3;
    }
    var_v1 = var_a0 != 0;
    if (var_v1 != 0) {
        temp_a0 = temp_a1 - 1;
        var_a3 = 0;
        var_a1 = 0;
        if (temp_a0 > 0) {
            do {
                if (M2C_FIELD((temp_a2 + var_a1), s8 *, 0x12E) != 0) {
                    var_a3 += 1;
                }
                var_a1 += 1;
            } while (var_a1 < temp_a0);
        }
        var_v1_2 = var_a3 >= 2;
        if (var_v1_2 == 0) {
            var_v1_2 = M2C_FIELD(((temp_s0 & 0xFF) + temp_a2), s8 *, 0x12E) == 0;
        }
        var_v1 = var_v1_2 != 0;
    }
    if (var_v1 != 0) {
        M2C_FIELD(((temp_s0 & 0xFF) + temp_a2), s8 *, 0x12E) = 0;
        func_00807A60(M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s32 *, 0) + (temp_s1 * 0x130), M2C_FIELD(arg0, u8 **, 0x6C), temp_s1, var_a3);
        temp_a2_2 = temp_s0 & 0xFF;
        func_008075A0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s32 *, 4) + (temp_a2_2 * 0x130), M2C_FIELD(arg0, u8 **, 0x6C), temp_a2_2);
        temp_a2_3 = M2C_FIELD(arg0, u8 **, 0x6C);
        temp_a1_2 = temp_s1 - 1;
        *temp_a2_3 -= 1;
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), s8 *, 0x40) = temp_a1_2;
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
        M2C_FIELD(arg0, s32 *, 0x17088) = 1;
        if (M2C_FIELD(arg0, u8 *, 0x41) == temp_a1_2) {
            M2C_FIELD(arg0, u8 *, 0x41) = (u8) (temp_s1 - 2);
        }
        func_0081D5A0(arg0, temp_a1_2, temp_a2_3);
    }
}
