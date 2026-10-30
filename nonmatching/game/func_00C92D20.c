/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA8AC;

void func_00C92D20(s32 arg0, s32 arg1) {
    s32 temp_a1;
    u8 temp_a2;
    u8 temp_a3;
    void *temp_a4;
    void *temp_a5;

    if (D_003EA8AC != 0) {
        if (arg1 != 1) {
            temp_a5 = D_003EA8AC + (arg0 * 0x14);
            temp_a3 = M2C_FIELD(temp_a5, u8 *, 9);
            if (temp_a3 & 1) {
                M2C_FIELD(temp_a5, u8 *, 9) = (u8) ((temp_a3 & ~1) | (0 & 1));
                M2C_FIELD(temp_a5, u8 *, 8) = (u8) ((M2C_FIELD(temp_a5, u8 *, 8) & ~1) | (1 & 1));
            }
        } else {
            temp_a4 = D_003EA8AC + (arg0 * 0x14);
            temp_a2 = M2C_FIELD(temp_a4, u8 *, 9);
            if (!(temp_a2 & 1)) {
                temp_a1 = 1 & 1;
                M2C_FIELD(temp_a4, u8 *, 9) = (u8) ((temp_a2 & ~1) | temp_a1);
                M2C_FIELD(temp_a4, u8 *, 8) = (u8) ((M2C_FIELD(temp_a4, u8 *, 8) & ~1) | temp_a1);
            }
        }
    }
}
