/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_00AE6B90(u8, s16, s32);                /* extern */

void func_00AEA9D0(s32 arg0) {
    s32 temp_v1_2;
    s32 var_a2;
    u32 temp_v0;
    u8 temp_a1;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_a1;
    u8 var_v1;
    void *temp_v1;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        temp_v1 = (M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0;
        temp_a1 = M2C_FIELD(temp_v1, u8 *, 0x128A);
        var_a0 = M2C_FIELD(temp_v1, u8 *, 0x1289);
        if ((s32) var_a0 < (s32) temp_a1) {
            var_a0 = temp_a1;
        }
        temp_v1_2 = var_a0 & 0xFF;
        var_a0_2 = temp_v1_2 - 3;
        var_a1 = var_a0_2 & 0xFF;
        if ((temp_v1_2 - 1) < 2) {
            var_a1 = 0;
        }
        var_a2 = 0;
        if (arg0 < 0) {
            var_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x5AC);
            if ((s32) var_a0_2 <= 0) {
                M2C_FIELD(temp_v0, u8 *, 0x5AC) = 0U;
            } else {
                var_a2 = -arg0;
                var_v1 = var_a0_2 + (arg0 & 0xFF);
                goto block_15;
            }
        } else if (arg0 > 0) {
            var_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x5AC);
            if ((s32) var_a0_2 >= (var_a1 & 0xFF)) {
                M2C_FIELD(temp_v0, u8 *, 0x5AC) = var_a1;
            } else {
                var_a2 = -arg0;
                var_v1 = var_a0_2 + (arg0 & 0xFF);
block_15:
                M2C_FIELD(temp_v0, u8 *, 0x5AC) = var_v1;
            }
        }
        if (var_a2 != 0) {
            var_a1 = (u8) M2C_FIELD(temp_v0, s16 *, 0x5AE);
            var_a0_2 = -9U;
            M2C_FIELD(temp_v0, s16 *, 0x5B2) = (s16) var_a1;
            M2C_FIELD(temp_v0, s16 *, 0x5B0) = -9;
            M2C_FIELD(temp_v0, s32 *, 0x5BC) = var_a2;
            M2C_FIELD(temp_v0, s8 *, 0x3DB5) = 5;
        }
        func_00AE6B90(var_a0_2, (s16) var_a1, var_a2);
    }
}
