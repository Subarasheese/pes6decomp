/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00228A80(void);
s32 func_00938F10(s16);                             /* extern */
s32 func_009566B0(s16);                             /* extern */
s32 func_0096F7D0(s16);                             /* extern */
void *func_00994C60(s32, s32);                      /* extern */
s32 func_00B19310(s32, s32, s16);                   /* extern */
s32 func_00B1A030(s32, s16);                        /* extern */

void func_00B1B350(s32 arg0, s16 arg1) {
    s16 var_s3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a0;
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v0;

    var_s3 = arg1;
    func_00225820();
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 < 0x48) {
        temp_s1 = func_00B1A030(arg0, var_s3) & 0xFF;
        if ((temp_s1 != 0xFF) && ((func_00938F10(var_s3) & 0xFF) == 0xFF)) {
            if (func_0096F7D0(var_s3) == 1) {
                temp_s2 = var_s3 & 0xFFFF;
                if (temp_s2 == 0) {
                    goto block_15;
                }
                var_v0 = func_00228A80();
                if (var_v0 != NULL) {
                    var_a0 = 0;
loop_10:
                    if (temp_s2 != M2C_FIELD(var_v0, u16 *, 0x32EAE)) {
                        var_a0 += 1;
                        var_v0 += 2;
                        if (var_a0 >= 0x20) {
                            goto block_15;
                        }
                        goto loop_10;
                    }
                    var_s2 = var_a0 & 0xFF;
                } else {
block_15:
                    var_s2 = 0xFF;
                }
                var_s3 = func_009566B0(var_s3) & 0xFFFF;
                if ((var_s2 & 0xFF) != 0xFF) {
                    temp_v0 = func_00228A80();
                    if (temp_v0 != NULL) {
                        M2C_FIELD((((var_s2 & 0xFF) * 2) + temp_v0), s16 *, 0x32EAE) = var_s3;
                        goto block_19;
                    }
                } else {
                    goto block_19;
                }
            } else {
block_19:
                if (func_00B19310(arg0, temp_s1 & 0xFF, var_s3) != 0) {
                    temp_v0_2 = func_00994C60(temp_s0, temp_s1);
                    if (temp_v0_2 != NULL) {
                        M2C_FIELD(temp_v0_2, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0) & ~1) | (0 & 1));
                        M2C_FIELD(temp_v0_2, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0) & ~0x7E) | 0xE);
                        M2C_FIELD(temp_v0_2, s16 *, 6) = 0;
                    }
                }
            }
        }
    }
}
