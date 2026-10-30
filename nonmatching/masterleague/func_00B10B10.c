/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B0AB30();                            /* extern */
M2C_UNK func_00B0ABE0(u8);                          /* extern */

s32 func_00B10B10(void) {
    s16 temp_a2;
    s16 temp_s2;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v1;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xBFE);
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xBF5);
        if (temp_v1 == 0) {
            if ((s32) temp_a0 > 0) {
                M2C_FIELD(temp_v0, u8 *, 0xBFE) = (u8) (temp_a0 - 1);
                M2C_FIELD(temp_v0, s16 *, 0xBFA) = (s16) -M2C_FIELD(temp_v0, s16 *, 0xBF6);
                temp_a2 = M2C_FIELD(temp_v0, s16 *, 0xC00);
                M2C_FIELD(temp_v0, s16 *, 0xBF8) = temp_a2;
                temp_s2 = M2C_FIELD(temp_v0, s16 *, 0xBFA);
                func_00949340(temp_v0 + 0xBFA, 0, temp_a2);
                M2C_FIELD(temp_v0, s16 *, 0xBFC) = (s16) (M2C_FIELD(temp_v0, s16 *, 0xBFA) - ((s64) ((s64) temp_s2 << 0x30) >> 0x30));
                func_00B0AB30();
            }
        } else {
            M2C_FIELD(temp_v0, u8 *, 0xBF5) = (u8) (temp_v1 - 1);
            func_00B0ABE0(M2C_FIELD(temp_v0, u8 *, 0xBF5));
        }
        M2C_FIELD(temp_v0, s32 *, 0xC40) = (s32) (M2C_FIELD(temp_v0, u8 *, 0xBFE) + M2C_FIELD(temp_v0, u8 *, 0xBF5) + 9);
        if (((s64) (((s64) ((temp_v1 + temp_a0) << 0x30) >> 0x30) << 0x30) >> 0x30) != (M2C_FIELD(temp_v0, u8 *, 0xBF5) + M2C_FIELD(temp_v0, u8 *, 0xBFE))) {
            func_0026E840(0x8400F802);
        }
    }
    return 0;
}
