/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
void func_00B45180(s32 arg0) {
    s32 var_a4;
    s8 *var_a1;
    s8 var_v1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a2;
    void *temp_a3;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        var_a4 = 0;
        temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x3B6) + temp_v0;
        temp_a2 = M2C_FIELD(temp_a3, u8 *, 0x7C0);
        if (M2C_FIELD(temp_v0, u8 *, 0x3B5) != 0) {
            return;
        }
        if (arg0 < 0) {
            temp_a0 = M2C_FIELD(temp_a3, u8 *, 0x7C2);
            var_a1 = temp_a3 + 0x7C2;
            if ((s32) temp_a0 > 0) {
                var_a4 = -arg0;
                var_v1 = temp_a0 + (arg0 & 0xFF);
                goto block_10;
            }
        } else if (arg0 > 0) {
            temp_a0_2 = M2C_FIELD(temp_a3, u8 *, 0x7C2);
            var_a1 = temp_a3 + 0x7C2;
            if (((s32) temp_a0_2 < ((temp_a2 - 6) & 0xFF & 0xFF)) && ((s32) temp_a2 >= 7)) {
                var_a4 = -arg0;
                var_v1 = temp_a0_2 + (arg0 & 0xFF);
block_10:
                *var_a1 = var_v1;
            }
        }
        if (var_a4 != 0) {
            M2C_FIELD(temp_v0, s16 *, 0x7CC) = (s16) M2C_FIELD(temp_v0, s16 *, 0x7C4);
            M2C_FIELD(temp_v0, s16 *, 0x7CE) = -8;
            M2C_FIELD(temp_v0, s32 *, 0x7C8) = var_a4;
            M2C_FIELD(temp_v0, u8 *, 0x3B5) = 4U;
        }
    }
}
