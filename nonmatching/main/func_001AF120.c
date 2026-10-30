/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00145440(s32);
s32 func_001454C0(s32);                             /* extern */

void func_001AF120(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s64 var_t0;
    s8 *temp_a0_2;
    s8 var_a7_2;
    u8 temp_a7;
    u8 temp_t0;
    void *temp_a0;

    func_00145440(func_001454C0(arg1));
    var_a5 = 0;
    if (arg4 > 0) {
        var_a4 = 0;
        var_a2 = arg3 >> 1;
        if (arg3 < 0) {
            var_a2 = (s32) (arg3 + 1) >> 1;
        }
        var_a3 = 0;
        do {
            var_a6 = 0;
            if (arg3 > 0) {
                do {
                    temp_a0 = arg2 + ((var_a6 + var_a4) * 4);
                    temp_t0 = M2C_FIELD(temp_a0, u8 *, 2);
                    if ((s32) temp_t0 >= 0x20) {
                        var_t0 = ((s32) (temp_t0 * 4) / (s32) (M2C_FIELD(temp_a0, u8 *, 0) + temp_t0)) + 0xB;
                    } else {
                        temp_a7 = M2C_FIELD(temp_a0, u8 *, 0);
                        var_t0 = ((temp_a7 * 0xB) / 255) + ((u32) (temp_a7 * 0xB) >> 0x1F);
                    }
                    var_a0 = var_a6 >> 1;
                    if (var_a6 < 0) {
                        var_a0 = (s32) (var_a6 + 1) >> 1;
                    }
                    var_a7 = var_a6 & 1;
                    temp_a0_2 = arg0 + (var_a0 + var_a3);
                    if ((var_a6 < 0) && (var_a7 != 0)) {
                        var_a7 -= 2;
                    }
                    if (var_a7 != 0) {
                        *temp_a0_2 &= 0xF;
                        var_a7_2 = *temp_a0_2 | ((s64) ((var_t0 * 0x10) << 0x38) >> 0x38);
                    } else {
                        *temp_a0_2 &= ~0xF;
                        var_a7_2 = *temp_a0_2 | ((s64) (var_t0 << 0x38) >> 0x38);
                    }
                    *temp_a0_2 = var_a7_2;
                    var_a6 += 1;
                } while (var_a6 < arg3);
            }
            var_a5 += 1;
            var_a4 += arg3;
            var_a3 += var_a2;
        } while (var_a5 < arg4);
    }
}
