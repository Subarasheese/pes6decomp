/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDF8F4[];

void func_00B90F20(s32 *arg0, s32 arg1) {
    M2C_UNK *var_a5;
    s32 *var_a0;
    s32 var_a6;
    s32 var_a7;
    void *temp_v1;
    void *temp_v1_2;

    var_a0 = arg0;
    var_a5 = ((void *)D_00CDF8F4);
    if (var_a0 != NULL) {
        var_a7 = 0;
        var_a6 = 0;
        do {
            if (var_a7 < arg1) {
                if (var_a7 < 0xA) {
                    temp_v1 = ((void *)D_00CDF8F4) + var_a6;
                    temp_v1_2 = temp_v1 + 0x6C;
                    if (temp_v1_2 != NULL) {
                        M2C_FIELD(temp_v1, s32 *, 0x6C) = 2;
                        M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
                        M2C_FIELD(temp_v1_2, s32 *, 8) = (s32) *var_a0;
                    }
                }
            } else if ((var_a5 + 0x6C) != NULL) {
                M2C_FIELD(var_a5, s32 *, 0x6C) = 0;
                M2C_FIELD(var_a5, s32 *, 0x70) = 0;
                M2C_FIELD(var_a5, s32 *, 0x74) = 0;
            }
            var_a7 += 1;
            var_a0 += 4;
            var_a6 += 0xC;
            var_a5 += 0xC;
        } while (var_a7 < 0xA);
    }
}
