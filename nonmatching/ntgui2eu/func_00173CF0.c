/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00173CF0(void *arg0) {
    s32 temp_a0;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a3;
    u32 temp_v1_2;
    void *var_a4;

    temp_a5 = M2C_FIELD(arg0, s32 *, 0xBF0);
    var_a4 = M2C_FIELD(arg0, void **, 0xB80);
    M2C_FIELD(arg0, s32 *, 0xBA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB9C) = 0;
    if (temp_a5 != 0) {
        var_a3 = 0;
        M2C_FIELD(arg0, s32 *, 0xB9C) = -1;
        temp_a6 = M2C_FIELD(arg0, s32 *, 0xBF4);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x5AC) - ((M2C_FIELD(arg0, s32 *, 0xCF0) + M2C_FIELD(arg0, s32 *, 0x8D4)) * 2);
        M2C_FIELD(arg0, s32 *, 0xBA0) = -1;
        if (temp_a5 > 0) {
            do {
                temp_v1 = temp_a6 + M2C_FIELD(var_a4, s32 *, 0x1C);
                if ((temp_v1 + M2C_FIELD(var_a4, s32 *, 0x10)) >= 0) {
                    if (temp_a0 >= temp_v1) {
                        if (M2C_FIELD(arg0, s32 *, 0xB9C) == -1) {
                            M2C_FIELD(arg0, s32 *, 0xB9C) = var_a3;
                        }
                        goto block_6;
                    }
                    goto block_7;
                }
block_6:
                if (temp_a0 < (temp_a6 + M2C_FIELD(var_a4, s32 *, 0x1C))) {
block_7:
                    if (M2C_FIELD(arg0, s32 *, 0xBA0) == -1) {
                        M2C_FIELD(arg0, s32 *, 0xBA0) = var_a3;
                    }
                }
                temp_v1_2 = M2C_FIELD(var_a4, u32 *, 0);
                if (temp_v1_2 >= 0x80U) {
                    var_a1 = 1;
                    if (temp_v1_2 >= 0xE0U) {
                        var_a1 = 2;
                        if (temp_v1_2 >= 0xF0U) {
                            var_a1 = (temp_v1_2 > 0xF7U) ? 0 : 3;
                        }
                    }
                    var_a3 += var_a1;
                    var_a4 += var_a1 * 0x24;
                }
                var_a3 += 1;
                var_a4 += 0x24;
            } while (var_a3 < temp_a5);
        }
        if ((M2C_FIELD(arg0, s32 *, 0xB9C) != -1) && (M2C_FIELD(arg0, s32 *, 0xBA0) == -1)) {
            M2C_FIELD(arg0, s32 *, 0xBA0) = (s32) M2C_FIELD(arg0, s32 *, 0xBF0);
        }
    }
}
