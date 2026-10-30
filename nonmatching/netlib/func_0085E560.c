/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0085E280(s32);                         /* extern */
extern void *D_003EA358;

s32 func_0085E560(s64 arg0, void *arg1) {
    M2C_UNK (*temp_v1_2)(void *, u16, u16, void *, s32);
    s32 temp_a4;
    s64 temp_v0;
    u16 var_a2;
    void *temp_v1;

    temp_a4 = M2C_FIELD(arg1, s32 *, 4);
    if (M2C_FIELD(D_003EA358, s32 *, 0) != M2C_FIELD(arg1, s8 *, 0x28)) {
        goto block_14;
    }
    if (M2C_FIELD(D_003EA358, s8 *, 5) == 0) {
        var_a2 = M2C_FIELD(arg1, u16 *, 8);
        temp_v0 = (s64) (arg0 << 0x30) >> 0x30;
        temp_v1 = (temp_v0 * 2) + D_003EA358;
        if ((s32) M2C_FIELD(temp_v1, u16 *, 0x22) < (s32) var_a2) {
            M2C_FIELD(temp_v1, u16 *, 0x22) = var_a2;
            if (temp_a4 == 3) {
                M2C_FIELD(((temp_v0 * 4) + D_003EA358), s32 *, 0xC) = temp_a4;
                var_a2 = (u16) M2C_FIELD(arg1, s8 *, 0xA);
                M2C_FIELD((temp_v0 + D_003EA358), s8 *, 0x1F) = (s8) var_a2;
                M2C_FIELD(D_003EA358, s8 *, 6) = 1;
                M2C_FIELD(D_003EA358, s8 *, 0xD) = (s8) M2C_FIELD(arg1, s8 *, 0xA);
            } else if (temp_a4 == 0) {
                var_a2 = (u16) D_003EA358;
                M2C_FIELD(((temp_v0 * 4) + var_a2), s32 *, 0xC) = temp_a4;
                M2C_FIELD((temp_v0 + D_003EA358), s8 *, 0x1F) = 0;
                M2C_FIELD(D_003EA358, s8 *, 6) = 1;
            }
        }
        M2C_FIELD(D_003EA358, u8 *, 0xE) = (u8) (M2C_FIELD(D_003EA358, u8 *, 0xE) | ((1 << (temp_v0 - 1)) & 0xFF));
        temp_v1_2 = M2C_FIELD(D_003EA358, M2C_UNK (**)(void *, u16, u16, void *, s32), 0x3C);
        if (temp_v1_2 != NULL) {
            temp_v1_2(arg1 + 0x2E, M2C_FIELD(arg1, u16 *, 0x2C), var_a2, D_003EA358, temp_a4);
        }
        func_0085E280(M2C_FIELD(D_003EA358, u8 *, 0x32) == 0);
block_14:
        return 0;
    }
    M2C_FIELD(D_003EA358, s8 *, 6) = 1;
    return 0;
}
