/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B0AEB0(u8);                          /* extern */
M2C_UNK func_00B0AF30();                            /* extern */
M2C_UNK func_00B0D690(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
M2C_UNK func_00B0E9C0(u8);                          /* extern */
M2C_UNK func_00B151F0();                            /* extern */
s32 func_00B15250(u8, s32);                         /* extern */
s32 func_00B152D0(u8, s32);                         /* extern */

s32 func_00B12E30(void) {
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v1;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC04) == 0) {
            if (M2C_FIELD(temp_v0, s16 *, 0xC16) == 0) {
                if (M2C_FIELD(temp_v0, s32 *, 0xC28) == 0) {
                    temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xC0A);
                    if ((s32) temp_v1 < (M2C_FIELD(temp_v0, u8 *, 0xC0B) - 1)) {
                        M2C_FIELD(temp_v0, u8 *, 0xC0A) = (u8) (temp_v1 + 1);
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0xC0A) = 0U;
                    }
                    temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xC0A);
                    if (temp_v1 != temp_a0) {
                        if (func_00B152D0(temp_a0, (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) == 0) {
                            func_00B151F0();
                        }
                        func_00B0E9C0(M2C_FIELD(temp_v0, u8 *, 0xC0A));
                        func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
                        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                        func_00B0AF30();
                        func_00B0AEB0(M2C_FIELD(temp_v0, u8 *, 0xC0E));
                        func_0026E840(0x8400F803);
                    }
                }
            }
        }
    }
    return 0;
}
