/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s32 *func_0096DB90(M2C_UNK);                        /* extern */
M2C_UNK func_00993A90();                            /* extern */
extern s32 *D_003EA980;

void func_009943D0(void) {
    s32 *temp_v0;
    s32 var_a0;
    s32 var_a1;

    if (D_003EA980 == NULL) {
        if (D_003EA980 == NULL) {
            temp_v0 = func_0096DB90(0x260);
            D_003EA980 = temp_v0;
            if (temp_v0 != NULL) {
                *temp_v0 = 0;
                var_a1 = 0;
                var_a0 = 0;
                do {
                    var_a1 += 8;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 4) = 0;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 8) = 0;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 0xC) = 0;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 0x10) = 0;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 0x14) = 0;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 0x18) = 0;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 0x1C) = 0;
                    M2C_FIELD((D_003EA980 + var_a0), s32 *, 0x20) = 0;
                    var_a0 += 0x20;
                } while (var_a1 < 0x48);
                M2C_FIELD(D_003EA980, s8 *, 0x254) = 0;
                M2C_FIELD(D_003EA980, s32 *, 0x258) = 0;
            }
        }
        M2C_FIELD(D_003EA980, s8 *, 0x25F) = 4;
        func_00993A90();
        func_001D5F80(0x102A5);
    }
}
