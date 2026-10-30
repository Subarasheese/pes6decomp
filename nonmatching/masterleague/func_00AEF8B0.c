/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern s32 func_00AF0910(s32, s32);
s32 func_00246550(M2C_UNK);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0094C7B0();                                /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00AEE560(s32, s16);                    /* extern */
M2C_UNK func_00AEE620(u8);                          /* extern */
M2C_UNK func_00AEE8D0(s32, s16);                    /* extern */
M2C_UNK func_00AEEA80(u8);                          /* extern */
M2C_UNK func_00AEED80(u8);                          /* extern */
s32 func_00AF0440(u8);                              /* extern */
s64 func_00AF04A0(s32);                             /* extern */
s32 func_00AF0570(s32);                             /* extern */
s32 func_00AF05B0(s32, s16);                        /* extern */

s32 func_00AEF8B0(void) {
    s16 temp_s0;
    s16 temp_v0_4;
    s32 temp_s2;
    s32 temp_v0_2;
    s64 temp_s3;
    u32 temp_v0;
    void *temp_v0_3;
    void *temp_v0_5;

    temp_v0 = func_00AF0980();
    if (temp_v0 == 0) {

    } else if (func_0095ED20() != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x2D0) == 0) {
            temp_v0_2 = func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), (s32) M2C_FIELD(temp_v0, u8 *, 0x184));
            temp_s2 = temp_v0_2 * 2;
            temp_v0_3 = temp_s2 + temp_v0;
            temp_s3 = (s64) (func_00AF04A0(temp_v0_2) << 0x30) >> 0x30;
            temp_s0 = M2C_FIELD(temp_v0_3, s16 *, 0x1B0);
            do {
                temp_v0_4 = M2C_FIELD(temp_v0_3, s16 *, 0x1B0);
                if (temp_v0_4 == 0) {
                    M2C_FIELD(temp_v0_3, s16 *, 0x1B0) = (s16) temp_s3;
                } else {
                    M2C_FIELD(temp_v0_3, s16 *, 0x1B0) = (s16) (temp_v0_4 - 1);
                }
            } while (func_00AF05B0(temp_v0_2, M2C_FIELD(temp_v0_3, s16 *, 0x1B0)) == 0);
            if ((func_00AF0570(temp_v0_2) == 0) && (((s64) ((s64) temp_s0 << 0x30) >> 0x30) < M2C_FIELD(temp_v0_3, s16 *, 0x1B0))) {
                M2C_FIELD(temp_v0_3, s16 *, 0x1B0) = temp_s0;
            }
            if (temp_v0_2 == 5) {
                if (M2C_FIELD(temp_v0_3, s16 *, 0x1B0) == 0) {
                    M2C_FIELD(temp_v0, s16 *, 0x1BC) = 0;
                }
                func_00AEE620(M2C_FIELD(temp_v0, u8 *, 0x184));
            }
            if (temp_v0_2 == 3) {
                if (M2C_FIELD(temp_v0_3, s16 *, 0x1B0) >= 4) {
                    M2C_FIELD(temp_v0, s16 *, 0x1BC) = 0;
                }
                func_00AEE620(M2C_FIELD(temp_v0, u8 *, 0x184));
                if ((func_0094C7B0() == 0xD) && (func_00246550(0xC0) == 0)) {
                    M2C_FIELD(temp_v0, s16 *, 0x1B8) = (s16) (func_00AF0440(M2C_FIELD(temp_v0, u8 *, 0x1B6)) & 0xFF);
                }
            }
            if (temp_v0_2 == 0xA) {
                if (M2C_FIELD(temp_v0_3, s16 *, 0x1B0) == 1) {
                    M2C_FIELD(temp_v0, s16 *, 0x1C2) = 1;
                }
                func_00AEE620(M2C_FIELD(temp_v0, u8 *, 0x184));
            }
            func_00AEED80(M2C_FIELD(temp_v0, u8 *, 0x185));
            func_00AEEA80(M2C_FIELD(temp_v0, u8 *, 0x184));
            temp_v0_5 = temp_s2 + temp_v0;
            func_00AEE8D0(temp_v0_2, M2C_FIELD(temp_v0_5, s16 *, 0x1B0));
            func_00AEE560(temp_v0_2, M2C_FIELD(temp_v0_5, s16 *, 0x1B0));
            if (((s64) ((s64) temp_s0 << 0x30) >> 0x30) != M2C_FIELD(temp_v0_5, s16 *, 0x1B0)) {
                func_0026E840(0x8400F803);
            }
        }
    }
    return 0;
}
