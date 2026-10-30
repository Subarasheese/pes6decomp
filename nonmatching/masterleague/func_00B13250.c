/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s64);           /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B0AEB0(u8);                          /* extern */
M2C_UNK func_00B0B260();                            /* extern */
M2C_UNK func_00B0D690(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
s32 func_00B15250(u8, s32);                         /* extern */
s32 func_00B152D0(u8, s32);                         /* extern */

s32 func_00B13250(void) {
    s16 temp_s1_2;
    s16 temp_v0_4;
    s32 temp_s1;
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC04) == 0) {
            if (M2C_FIELD(temp_v0, s16 *, 0xC16) == 0) {
                temp_v1 = M2C_FIELD(temp_v0, s32 *, 0xC28);
                switch (temp_v1) {                  /* irregular */
                case 5:
                    M2C_FIELD(temp_v0, s32 *, 0xC28) = 0;
                    M2C_FIELD(temp_v0, u8 *, 0xC0E) = 0U;
                    func_00B0AEB0(M2C_FIELD(temp_v0, u8 *, 0xC0E));
                    temp_s1 = func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF;
                    func_0026E840(0x8400F802);
                    func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), temp_s1, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                    func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
                    func_00958000(0x2F);
                    goto block_35;
                case 0:
                    temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xC0E);
                    if ((s32) temp_v0_2 >= 0xA) {
                        temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0xC1A);
                        if ((s32) temp_v0_3 < 0x15) {
                            M2C_FIELD(temp_v0, u8 *, 0xC1A) = (u8) (temp_v0_3 + 1);
                            if (func_00B152D0(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) != 0) {
                                M2C_FIELD(temp_v0, s16 *, 0xC16) = (s16) M2C_FIELD(temp_v0, s16 *, 0xC12);
                                temp_v0_4 = -M2C_FIELD(temp_v0, s16 *, 0xC1C);
                                M2C_FIELD(temp_v0, s16 *, 0xC14) = temp_v0_4;
                                temp_s1_2 = M2C_FIELD(temp_v0, s16 *, 0xC16);
                                func_00949340(temp_v0 + 0xC16, 0, (s64) ((s64) temp_v0_4 << 0x30) >> 0x30);
                                M2C_FIELD(temp_v0, s16 *, 0xC18) = (s16) (M2C_FIELD(temp_v0, s16 *, 0xC16) - ((s64) ((s64) temp_s1_2 << 0x30) >> 0x30));
                                func_00B0B260();
                                func_0026E840(0x8400F802);
                                goto block_33;
                            }
                            M2C_FIELD(temp_v0, u8 *, 0xC1A) = (u8) (M2C_FIELD(temp_v0, u8 *, 0xC1A) - 1);
                            return 0;
                        }
                        goto block_33;
                    }
                    M2C_FIELD(temp_v0, u8 *, 0xC0E) = (u8) (temp_v0_2 + 1);
                    if (func_00B152D0(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) != 0) {
                        func_00B0AEB0(M2C_FIELD(temp_v0, u8 *, 0xC0E));
                        func_0026E840(0x8400F802);
block_33:
                        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                        goto block_35;
                    }
                    M2C_FIELD(temp_v0, u8 *, 0xC0E) = (u8) (M2C_FIELD(temp_v0, u8 *, 0xC0E) - 1);
                    return 0;
                }
            } else {
                goto block_35;
            }
        } else {
            goto block_35;
        }
    } else {
block_35:
        return 0;
    }
}
