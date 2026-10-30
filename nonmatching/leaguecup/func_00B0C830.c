/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00151EA0(s32);
extern void *D_003EAD68;

void func_00B0C830(u16 *arg0, s32 arg1, s32 arg2) {
    s32 var_a0;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s4;
    u16 *var_a1;
    u16 var_s5;
    void *temp_s3;

    temp_s3 = D_003EAD68;
    var_s0 = arg2;
    if (temp_s3 != NULL) {
        var_a2 = 0;
        if (arg1 > 0) {
            var_a1 = arg0;
            do {
                if (M2C_FIELD(temp_s3, u16 *, 0x13C0) == *var_a1) {
                    var_s0 -= 1;
                }
                var_a2 += 1;
                var_a1 += 2;
            } while (var_a2 < arg1);
        }
        var_s4 = 0;
        if (arg1 > 0) {
loop_7:
            var_a0 = func_00151EA0(arg1 & 0xFFFF) & 0xFFFF;
            var_a1_2 = 0;
            var_s5 = *(arg0 + (var_a0 * 2));
            do {
                if ((var_s5 & 0xFFFF) == M2C_FIELD((temp_s3 + (var_a1_2 * 2)), u16 *, 0x1380)) {
                    var_a0 = (s32) (var_a0 + 1) % arg1;
                    var_s5 = *(arg0 + (var_a0 * 2));
                    var_a1_2 = 0;
                } else {
                    var_a1_2 += 1;
                }
            } while (var_a1_2 < 0x20);
            var_a2_2 = func_00151EA0((s32) M2C_FIELD(temp_s3, u8 *, 0xE05)) & 0xFFFF;
            var_a3 = var_a2_2 * 2;
            if (M2C_FIELD((temp_s3 + var_a3), u16 *, 0x1380) != 0xFFFF) {
                do {
                    var_a2_2 = (s32) (var_a2_2 + 1) % (s32) M2C_FIELD(temp_s3, u8 *, 0xE05);
                    var_a3 = var_a2_2 * 2;
                } while (M2C_FIELD((temp_s3 + var_a3), u16 *, 0x1380) != 0xFFFF);
            }
            var_s0 -= 1;
            M2C_FIELD((temp_s3 + var_a3), u16 *, 0x1380) = var_s5;
            if (var_s0 != 0) {
                var_s4 += 1;
                if (var_s4 < arg1) {
                    goto loop_7;
                }
            }
        }
    }
}
