/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00154070(s32);

extern s32 D_003EA3C8;

void func_00803060(void) {
    s32 temp_v0;

    if (D_003EA3C8 == 0) {
        temp_v0 = func_00154070(0x3220);
        D_003EA3C8 = temp_v0;
        M2C_FIELD(temp_v0, s16 *, 0x3210) = 0x53;
        M2C_FIELD(D_003EA3C8, s32 *, 0x3218) = (s32) (D_003EA3C8 + 0xC90);
        M2C_FIELD(D_003EA3C8, s32 *, 0x321C) = 0;
        if (D_003EA3C8 != 0) {
            M2C_FIELD(D_003EA3C8, s32 *, 0) = 0;
            if (D_003EA3C8 != 0) {
                M2C_FIELD(D_003EA3C8, s32 *, 4) = 0;
            }
            if (D_003EA3C8 != 0) {
                M2C_FIELD(D_003EA3C8, s8 *, 0xA) = 0;
            }
        }
    }
}
