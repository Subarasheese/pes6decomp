/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591A90[];
extern char D_005A2020[];

s32 func_00C325A0(u8 *arg0) {
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a4;
    u8 *var_a3_2;
    u8 temp_a1;
    void *temp_a1_2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_v0;
    void *var_a2;
    void *var_a5;

    temp_a1 = *arg0;
    var_a3 = 0;
    var_a2 = ((void *)D_00591A90) + (temp_a1 * 0x8B);
loop_1:
    if (M2C_FIELD((arg0 + var_a3), u8 *, 0x28) == M2C_FIELD(var_a2, u8 *, 7)) {
        var_a3 += 1;
        var_a2 += 1;
        if (var_a3 >= 0x20) {
            var_a2_2 = 0;
            var_a4 = 0;
            var_a3_2 = arg0;
            temp_a1_2 = ((void *)D_005A2020) + (temp_a1 * 0x168);
            var_a5 = temp_a1_2 + (M2C_FIELD(temp_a1_2, u8 *, 1) * 0x52);
loop_7:
            temp_v0 = arg0 + var_a2_2;
            if (M2C_FIELD(temp_v0, u8 *, 0x5C) != M2C_FIELD(var_a5, u8 *, 0x1C)) {
                goto block_18;
            }
            if (var_a2_2 > 0) {
                temp_t0 = temp_a1_2 + (M2C_FIELD(temp_a1_2, u8 *, 1) * 0x52) + var_a4;
                if (M2C_FIELD(var_a3_2, u8 *, 0x46) == M2C_FIELD(temp_t0, u8 *, 6)) {
                    if (M2C_FIELD(var_a3_2, u8 *, 0x47) != M2C_FIELD(temp_t0, u8 *, 7)) {
                        goto block_13;
                    }
                    goto block_14;
                }
block_13:
                goto block_18;
            }
block_14:
            temp_t0_2 = temp_a1_2 + (M2C_FIELD(temp_a1_2, u8 *, 1) * 0x52) + var_a2_2;
            if ((M2C_FIELD(temp_v0, u8 *, 0x67) == M2C_FIELD(temp_t0_2, u8 *, 0x27)) && (M2C_FIELD(temp_v0, u8 *, 0x72) == M2C_FIELD(temp_t0_2, u8 *, 0x32))) {
                var_a2_2 += 1;
                var_a5 += 1;
                var_a4 += 2;
                var_a3_2 += 2;
                if (var_a2_2 >= 0xB) {
                    return 0;
                }
                goto loop_7;
            }
            goto block_18;
        }
        goto loop_1;
    }
block_18:
    return 1;
}
