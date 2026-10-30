/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
s32 func_00938F10(s32);                             /* extern */
u8 *func_00994C60(s32, s32);                        /* extern */
M2C_UNK func_00B19180(s32, u8, u8, s32, u8);        /* extern */
s32 func_00B19310(s32, s32, s32);                   /* extern */
s32 func_00B1A030(s32, s32);                        /* extern */

void func_00B1B060(s32 arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 temp_a2;
    u8 temp_a4;
    u8 var_a1;

    temp_s1 = func_00225820() & 0xFF;
    if ((arg1 & 0xFFFF) && (temp_s2 = arg0 & 0xFF, ((temp_s2 < 0x48) != 0)) && (temp_s3 = func_00B1A030(arg0, arg1) & 0xFF, (temp_s3 != 0xFF))) {
        temp_s0 = func_00938F10(arg1) & 0xFF;
        if (temp_s0 != 0xFF) {
            if (func_00B19310(arg0, temp_s3 & 0xFF, arg1) != 0) {
                temp_v0 = func_00994C60(temp_s2, temp_s3);
                if (temp_v0 != NULL) {
                    temp_a4 = M2C_FIELD(temp_v0, u8 *, 0);
                    temp_a3 = 0 & 1;
                    var_a1 = 4;
                    M2C_FIELD(temp_v0, u8 *, 0) = (temp_a4 & ~1) | temp_a3;
                    temp_a2 = M2C_FIELD(temp_v0, u8 *, 0);
                    M2C_FIELD(temp_v0, u8 *, 0) = (temp_a2 & ~0x7E) | 4;
                    if ((temp_s1 & 0xFF) == temp_s0) {
                        var_a1 = M2C_FIELD(temp_v0, u8 *, 1);
                        M2C_FIELD(temp_v0, u8 *, 1) = (u8) ((var_a1 & ~0x78) | 0x18);
                    }
                    func_00B19180(arg1, var_a1, temp_a2, temp_a3, temp_a4);
                }
            }
        } else if (func_00B19310(arg0, temp_s3 & 0xFF, arg1) != 0) {
            temp_v0_2 = func_00994C60(temp_s2, temp_s3);
            if (temp_v0_2 != NULL) {
                *temp_v0_2 = (*temp_v0_2 & ~1) | (0 & 1);
                *temp_v0_2 = (*temp_v0_2 & ~0x7E) | 4;
            }
        }
    }
}
