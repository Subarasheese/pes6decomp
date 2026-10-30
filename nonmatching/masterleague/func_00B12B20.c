/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B0D690(u8, u16, u16, s32);           /* extern */
s32 func_00B15250(u8, s32);                         /* extern */

s32 func_00B12B20(void) {
    s32 temp_v1;
    u16 temp_a1;
    u32 temp_v0;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a2;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC04) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0xC28);
            if ((temp_v1 != 2) && (temp_v1 != 0)) {

            } else {
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xC0C);
                if (((s32) temp_v0_2 >= 6) || ((M2C_FIELD(temp_v0, u8 *, 0xC0C) = (u8) (temp_v0_2 + 1), (M2C_FIELD(temp_v0, u8 *, 0xC0C) == 6)) && (func_00226E70() == 0))) {
                    M2C_FIELD(temp_v0, u8 *, 0xC0C) = 0U;
                }
                temp_a1 = func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF;
                if (M2C_FIELD(temp_v0, s32 *, 0xC28) != 2) {
                    func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), temp_a1, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                } else if (M2C_FIELD(temp_v0, u8 *, 0xA99) != 0) {
                    temp_a2 = M2C_FIELD(temp_v0, void **, 0xAE4);
                    if (((u64) ((s64) M2C_FIELD(temp_a2, u8 *, 0) << 0x39) >> 0x3A) != 4) {
                        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), temp_a1, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                    } else {
                        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), M2C_FIELD(temp_a2, u16 *, 0xA), M2C_FIELD(temp_a2, u16 *, 4), 1);
                    }
                } else {
                    temp_a0 = M2C_FIELD(temp_v0, void **, 0xAE0);
                    if (((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0) << 0x39) >> 0x3A) != 4) {
                        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), temp_a1, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                    } else {
                        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), M2C_FIELD(temp_a0, u16 *, 0xA), M2C_FIELD(temp_v0, u16 *, 0xADC), 1);
                    }
                }
                func_0026E840(0x8400F803);
            }
        }
    }
    return 0;
}
