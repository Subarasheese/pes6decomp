/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001744D0(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a7;
    s32 temp_t0;
    s32 var_a2;
    s32 var_a5;
    s32 var_a6;
    s32 var_v0;
    s32 var_v0_2;
    void *var_a4;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xBF0);
    var_a4 = M2C_FIELD(arg0, void **, 0xB80);
    if (temp_a0 <= 0) {
        return -1;
    }
    var_a6 = 0;
    var_a5 = -1;
    var_a2 = 0;
    if ((temp_a0 + 1) > 0) {
        do {
            temp_a7 = M2C_FIELD(arg0, s32 *, 0xBF0);
            temp_t0 = M2C_FIELD(var_a4, s32 *, 4);
            if (var_a2 == temp_a7) {
                var_v0 = M2C_FIELD(arg0, s32 *, 0xB98);
            } else {
                var_v0 = M2C_FIELD(var_a4, s32 *, 0x1C);
            }
            temp_a0_2 = (arg1 - (M2C_FIELD(arg0, s32 *, 0x5D4) + M2C_FIELD(arg0, s32 *, 0xCF0))) - (M2C_FIELD(arg0, s32 *, 0xBF4) + var_v0);
            temp_a0_3 = (temp_a0_2 <= -1) ? -temp_a0_2 : temp_a0_2;
            if ((var_a5 < 0) || (var_v0_2 = temp_t0 & 1, ((temp_a0_3 < var_a6) != 0))) {
                var_a6 = temp_a0_3;
                var_a5 = var_a2;
                var_v0_2 = temp_t0 & 1;
            }
            if (var_v0_2 == 0) {
                var_a4 += 0x24;
                var_a2 += 1;
            }
            var_a2 += 1;
            var_a4 += 0x24;
        } while (var_a2 < (temp_a7 + 1));
    }
    M2C_FIELD(arg0, s32 *, 0xB8C) = var_a5;
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
    return var_a5;
}
