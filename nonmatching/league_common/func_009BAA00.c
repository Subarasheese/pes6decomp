/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA9C0;

void func_009BAA00(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_a4;
    s32 var_a0;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_v1_2;
    void *temp_a2;
    void *temp_v1;
    void *var_v1;

    if (D_003EA9C0 != 0) {
        temp_a4 = arg1 & 0xFF;
        temp_a3 = temp_a4 * 4;
        temp_a2 = temp_a3 + D_003EA9C0;
        if (M2C_FIELD(temp_a2, u16 *, 0x7C) != 0xFFFF) {
            if (M2C_FIELD(temp_a2, u16 *, 0x7E) != 0xFFFF) {
                temp_a1 = M2C_FIELD(arg0, u8 *, 0x16);
                if ((((u64) ((s64) temp_a1 << 0x3B) >> 0x3F) == 1) && (((u64) ((s64) temp_a1 << 0x39) >> 0x3F) == 0)) {
                    M2C_FIELD(temp_a2, s32 *, 0xB8) = 1;
                    return;
                }
                temp_v1 = (temp_a4 * 2) + D_003EA9C0;
                temp_a0 = M2C_FIELD(temp_v1, u8 *, 0x55);
                temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x54);
                if ((s32) temp_a0 < (s32) temp_v1_2) {
                    var_v1 = temp_a3 + D_003EA9C0;
                    var_a0 = 0xB;
                } else if (temp_v1_2 != temp_a0) {
                    var_v1 = temp_a3 + D_003EA9C0;
                    var_a0 = 0xD;
                } else {
                    var_v1 = temp_a3 + D_003EA9C0;
                    var_a0 = 0xC;
                }
                M2C_FIELD(var_v1, s32 *, 0xB8) = var_a0;
            } else {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD((temp_a3 + D_003EA9C0), s32 *, 0xB8) = 0;
        }
    }
}
