/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B0AEB0(u8);                          /* extern */
M2C_UNK func_00B0B260();                            /* extern */
M2C_UNK func_00B0D690(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
s32 func_00B15250(u8, s32);                         /* extern */

s32 func_00B13460(void) {
    s16 temp_a2;
    s16 temp_s1;
    s32 var_s1;
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC04) == 0) {
            if (M2C_FIELD(temp_v0, s16 *, 0xC16) == 0) {
                if (M2C_FIELD(temp_v0, s32 *, 0xC28) == 0) {
                    temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xC0E);
                    if (temp_v0_2 != 0) {
                        M2C_FIELD(temp_v0, u8 *, 0xC0E) = (u8) (temp_v0_2 - 1);
                        func_00B0AEB0(M2C_FIELD(temp_v0, u8 *, 0xC0E));
                        var_s1 = func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF;
                        func_0026E840(0x8400F802);
                        goto block_27;
                    }
                    temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0xC1A);
                    if ((s32) temp_v0_3 > 0) {
                        M2C_FIELD(temp_v0, u8 *, 0xC1A) = (u8) (temp_v0_3 - 1);
                        M2C_FIELD(temp_v0, s16 *, 0xC16) = (s16) -M2C_FIELD(temp_v0, s16 *, 0xC12);
                        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0xC1C);
                        M2C_FIELD(temp_v0, s16 *, 0xC14) = temp_a2;
                        temp_s1 = M2C_FIELD(temp_v0, s16 *, 0xC16);
                        func_00949340(temp_v0 + 0xC16, 0, temp_a2);
                        M2C_FIELD(temp_v0, s16 *, 0xC18) = (s16) (M2C_FIELD(temp_v0, s16 *, 0xC16) - ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
                        func_00B0B260();
                        var_s1 = func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF;
                        func_0026E840(0x8400F802);
                        goto block_27;
                    }
                    if (func_0094C7B0() == 0x12) {
                        if (M2C_FIELD(temp_v0, s32 *, 0xC34) == 4) {
                            if (M2C_FIELD(temp_v0, u8 *, 0xC24) == 0) {
                                M2C_FIELD(temp_v0, s32 *, 0xC28) = 5;
                                func_00B0AEB0(0U);
                                func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
                                var_s1 = 0;
                                func_00958000(0x27);
                                func_0026E840(0x8400F802);
block_27:
                                func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), var_s1, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                            }
                            goto block_28;
                        }
                        return 0;
                    }
                    goto block_28;
                }
                goto block_28;
            }
            goto block_28;
        }
        goto block_28;
    }
block_28:
    return 0;
}
