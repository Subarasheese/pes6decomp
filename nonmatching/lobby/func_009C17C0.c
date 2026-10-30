/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_001E4DD0(void);
extern s32 *D_00A7DD50;

s32 func_009C17C0(void) {
    s32 *var_s1;
    s32 *var_s1_3;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s8 *var_s1_2;
    s8 var_a1;
    s8 var_v0_2;

    temp_a0 = M2C_FIELD(D_00A7DD50, s32 *, 0);
    switch (temp_a0) {                              /* irregular */
    case 3:
    case 2:
        var_s1 = D_00A7DD50 + 8;
        var_s0 = 0;
loop_7:
        if (*var_s1 != 0) {
            var_s0 += 1;
            var_s1 += func_001E4DD0() & 0xFF;
            goto loop_7;
        }
        var_a1 = M2C_FIELD((M2C_FIELD(D_00A7DD50, s8 *, 0x11A1) + D_00A7DD50), s8 *, 0x116C);
block_14:
        temp_v1 = M2C_FIELD(D_00A7DD50, s32 *, 0);
        if (temp_v1 != 3) {
            var_v0 = 1;
        } else {
            var_v0 = 2;
        }
        if (M2C_FIELD(((var_v0 * 4) + D_00A7DD50), s32 *, 0x11A8) == 0) {
            var_a1 = 0;
        }
        if (var_s0 >= var_a1) {
            if (temp_v1 == 1) {
                var_s1_2 = D_00A7DD50 + 0x109;
                var_s0_2 = 0;
loop_30:
                if (*var_s1_2 != 0) {
                    var_s0_2 += 1;
                    var_s1_2 += func_001E4DD0() & 0xFF;
                    goto loop_30;
                }
                if (M2C_FIELD(D_00A7DD50, s32 *, 0x11B0) != 0) {
                    var_v0_2 = M2C_FIELD(D_00A7DD50, s8 *, 0x21D);
                } else {
                    var_v0_2 = 0;
                }
                if (var_s0_2 >= var_v0_2) {
                    return 1;
                }
                goto block_38;
            }
            return 1;
        }
block_38:
        return 0;
    case 1:
    case 0:
        var_s1_3 = D_00A7DD50 + 8;
        var_s0 = 0;
loop_11:
        if (*var_s1_3 != 0) {
            var_s0 += 1;
            var_s1_3 += func_001E4DD0() & 0xFF;
            goto loop_11;
        }
        var_a1 = M2C_FIELD(D_00A7DD50, s8 *, 0x21C);
        goto block_14;
    default:
        return 1;
    }
}
