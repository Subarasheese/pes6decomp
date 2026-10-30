/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00225820();                            /* extern */
void *func_00994C60(s32, s32);                      /* extern */
s32 func_00B19C50(s32, s32, s32);                   /* extern */

void func_00B1B1F0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u16 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    func_00225820();
    temp_s0 = arg1 & 0xFFFF;
    if ((temp_s0 != 0) && (temp_s1 = arg0 & 0xFF, ((temp_s1 < 0x48) != 0))) {
        var_s3 = 0xFF;
        var_s2 = 0;
        var_s4 = 0;
loop_3:
        temp_v0 = func_00994C60(temp_s1, var_s4);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, u16 *, 4);
            if (temp_s0 == temp_v1) {
                if ((M2C_FIELD(temp_v0, u8 *, 0) & 1) != 1) {
                    return;
                }
                goto block_10;
            }
            if ((temp_v1 == 0) && !(var_s2 & 0xFF)) {
                var_s3 = var_s4 & 0xFF;
                var_s2 = 1;
            }
            goto block_10;
        }
block_10:
        var_s4 += 1;
        if (var_s4 >= 0x25) {
            temp_s0_2 = var_s3 & 0xFF;
            if ((temp_s0_2 != 0xFF) && (func_00B19C50(arg0, temp_s0_2, arg1) != 0)) {
                temp_v0_2 = func_00994C60(temp_s1, temp_s0_2);
                if (temp_v0_2 != NULL) {
                    M2C_FIELD(temp_v0_2, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0) & ~1) | (0 & 1));
                    M2C_FIELD(temp_v0_2, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0) & ~0x7E) | 0xC);
                    M2C_FIELD(temp_v0_2, s16 *, 6) = 0;
                }
            }
        } else {
            goto loop_3;
        }
    }
}
