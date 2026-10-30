/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BDFC0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v1;
    u8 *temp_a3;
    u8 *temp_a3_2;
    void *var_a6;
    void *var_a7;

    var_v1 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x1E) > 0) {
        var_a7 = arg0 + (arg2 & 0xFF);
        var_a6 = arg0 + (arg3 & 0xFF);
        do {
            var_t0 = 0;
loop_3:
            temp_a3 = arg1 + var_t0;
            if (M2C_FIELD(var_a7, u8 *, 0x10) == *temp_a3) {
                var_t0_2 = 0xB;
                *temp_a3 = M2C_FIELD(var_a6, u8 *, 0x10);
loop_5:
                temp_a3_2 = arg1 + var_t0_2;
                if (M2C_FIELD(var_a6, u8 *, 0x10) == *temp_a3_2) {
                    *temp_a3_2 = M2C_FIELD(var_a7, u8 *, 0x10);
                } else {
                    var_t0_2 += 1;
                    if (var_t0_2 >= 0x20) {

                    } else {
                        goto loop_5;
                    }
                }
            } else {
                var_t0 += 1;
                if (var_t0 < 0xB) {
                    goto loop_3;
                }
            }
            var_v1 += 1;
            var_a7 += 2;
            var_a6 += 2;
        } while (var_v1 < (s32) M2C_FIELD(arg0, u8 *, 0x1E));
    }
}
