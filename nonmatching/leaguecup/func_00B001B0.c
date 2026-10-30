/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
s32 func_00AFFFB0(s16);                             /* extern */
extern void *D_003EAD54;

void func_00B001B0(void) {
    s16 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    void *temp_s0;
    void *var_a0_2;
    void *var_s2;

    func_00225820();
    func_002260F0(func_00225820());
    temp_s0 = D_003EAD54;
    if (temp_s0 != NULL) {
        var_a0 = func_00226710() & 0xFF;
        if (var_a0 != 0x2C) {
            var_a0 = func_00226710() & 0xFF;
            if (var_a0 != 0x38) {
                var_v1 = 0x12;
            } else {
                goto block_5;
            }
        } else {
block_5:
            var_v1 = 0x17;
        }
        var_s1 = var_v1 & 0xFF;
        var_s3 = 0;
        if (var_s1 > 0) {
            var_s2 = temp_s0;
            do {
                if (M2C_FIELD(var_s2, u8 *, 0xA1A) == 0) {
                    var_a0 = func_00AFFFB0(var_a0) & 0xFF;
                    M2C_FIELD(var_s2, s16 *, 0xA18) = var_a0;
                    M2C_FIELD(var_s2, u8 *, 0xA1A) = 1U;
                }
                var_s3 += 1;
                var_s2 += 0x1C;
            } while (var_s3 < var_s1);
        }
        if (var_s1 < M2C_FIELD(temp_s0, s32 *, 0x29A4C)) {
            var_a0_2 = temp_s0 + (var_s1 * 0x1C);
            do {
                M2C_FIELD(var_a0_2, s8 *, 0xA1A) = 0;
                var_s1 += 1;
                var_a0_2 += 0x1C;
            } while (var_s1 < M2C_FIELD(temp_s0, s32 *, 0x29A4C));
        }
    }
}
