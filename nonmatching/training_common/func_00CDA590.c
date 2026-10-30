/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD8BF0(void *, u32, s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_00CD8FF0(void *, u32, M2C_UNK, s32);   /* extern */
M2C_UNK func_00CDA380(void *, M2C_UNK);             /* extern */

void func_00CDA590(void *arg0, M2C_UNK arg1, u32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    u32 var_a2;

    var_a2 = arg2;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        if (arg3 == 0) {
            if (var_a2 < 2U) {
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                return;
            }
            goto block_5;
        }
block_5:
        if ((arg3 == 1) && (var_a2 < 3U)) {
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
            return;
        }
        if (var_a2 >= 0xBU) {
            var_a2 = 0xA;
        }
        temp_v0 = (var_a2 - 1) * 0x14;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_v0 + 1);
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        if (arg3 == 0) {
            func_00CD8FF0(arg0, var_a2, 0x14, M2C_FIELD(arg0, s32 *, 0x14));
        } else {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 4);
            func_00CD8BF0(arg0, var_a2, temp_v0_2 + 0x16A0, temp_v0_2 + 0x1718, temp_v0_2 + 0x1790, 0x14, M2C_FIELD(arg0, s32 *, 0x14));
        }
        func_00CDA380(arg0, 0);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg0, s16 *, 0xA6) = (s16) ((M2C_FIELD(arg0, s32 *, 0x1C) - 1) * 2);
    }
}
