/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
s32 func_00938F10(s32);                             /* extern */
void *func_00994C60(s32, s32);                      /* extern */
s32 func_00B19310(s32, s32, s32);                   /* extern */
s32 func_00B1A030(s32, s32);                        /* extern */

void func_00B19180(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s0 = func_00225820() & 0xFF;
    temp_s3 = func_00938F10(arg0) & 0xFF;
    if ((temp_s3 != 0xFF) && (temp_s3 < 0x48)) {
        temp_s2 = func_00B1A030(temp_s3, arg0) & 0xFF;
        if (temp_s2 != 0xFF) {
            temp_v0 = func_00994C60(temp_s3, temp_s2);
            if ((temp_v0 != NULL) && ((temp_s1 = arg0 & 0xFFFF, (M2C_FIELD(temp_v0, u16 *, 4) != temp_s1)) || (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x39) >> 0x3A) != 9))) {
                var_s4 = 0;
loop_7:
                temp_v0_2 = func_00994C60(temp_s3, var_s4);
                if (temp_s1 == M2C_FIELD(temp_v0_2, u16 *, 4)) {
                    if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0) << 0x39) >> 0x3A) != 9) {
                        goto block_10;
                    }
                } else {
block_10:
                    var_s4 += 1;
                    if (var_s4 >= 0x25) {
                        if (func_00B19310(temp_s3, temp_s2 & 0xFF, arg0) != 0) {
                            temp_v0_3 = func_00994C60(temp_s3, temp_s2);
                            if (temp_v0_3 != NULL) {
                                M2C_FIELD(temp_v0_3, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 0) & ~1) | 1);
                                M2C_FIELD(temp_v0_3, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 0) & ~0x7E) | 0x12);
                                if ((temp_s0 & 0xFF) == temp_s3) {
                                    M2C_FIELD(temp_v0_3, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 1) & ~0x78) | 0x18);
                                }
                            }
                        }
                    } else {
                        goto loop_7;
                    }
                }
            }
        }
    }
}
