/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B0AC20(u8);                          /* extern */
void *func_00B15370();                              /* extern */
s32 func_00B20EE0();                                /* extern */

s32 func_00B10E40(void) {
    s32 temp_v1_3;
    u8 temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_4;
    void *temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xBF4);
        if ((s32) temp_v1 < 8) {
            M2C_FIELD(temp_v0, u8 *, 0xBF4) = (u8) (temp_v1 + 1);
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xBF4);
            if ((temp_a0 == 2) && (M2C_FIELD(temp_v0, s32 *, 0xC34) == 6)) {
                M2C_FIELD(temp_v0, u8 *, 0xBF4) = (u8) (temp_a0 + 1);
            }
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0xBF4);
            if ((temp_v1_2 == 3) && ((u32) (M2C_FIELD(temp_v0, s32 *, 0xC34) - 2) < 2U)) {
                M2C_FIELD(temp_v0, u8 *, 0xBF4) = (u8) (temp_v1_2 + 1);
            }
        } else {
            M2C_FIELD(temp_v0, u8 *, 0xBF4) = 0U;
        }
        if ((M2C_FIELD(temp_v0, u8 *, 0xBF4) == 8) && (M2C_FIELD(temp_v0, s32 *, 0xC34) == 2) && ((temp_v1_3 = func_00B20EE0() & 0xFFFF, (temp_v1_3 == 0x11A)) || (temp_v1_3 == 0x11B) || (temp_v1_3 == 0x11C) || (temp_v1_3 == 0x121))) {
            M2C_FIELD(temp_v0, u8 *, 0xBF4) = 0U;
        }
        temp_v1_4 = M2C_FIELD(temp_v0, u8 *, 0xBF4);
        if (temp_v1_4 != 6) {
            M2C_FIELD(temp_v0, s32 *, 0xC40) = (s32) temp_v1_4;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0xC40) = (s32) (M2C_FIELD(temp_v0, u8 *, 0xBFE) + M2C_FIELD(temp_v0, u8 *, 0xBF5) + 9);
        }
        func_00B0AC20(M2C_FIELD(temp_v0, u8 *, 0xBF4));
        func_0026E840(0x8400F802);
    }
    return 0;
}
