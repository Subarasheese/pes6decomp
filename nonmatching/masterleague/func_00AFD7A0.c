/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00223C10(s32, s32);                      /* extern */
void *func_00223E00(s32, s32);                      /* extern */
s32 func_00224310(s32, s32);                        /* extern */
M2C_UNK func_00224CA0(s32, s32, s32);               /* extern */
s32 func_00225820();                                /* extern */
s32 func_002260F0(s32);                             /* extern */
s32 func_00237530(M2C_UNK);                         /* extern */
M2C_UNK func_00931B90(s32, s32);                    /* extern */
M2C_UNK func_0094CE20(s32, s32);                    /* extern */
M2C_UNK func_0094CF00(s32, s32);                    /* extern */
M2C_UNK func_0094E4A0(s32, s32);                    /* extern */
s16 func_009566B0(s32);                             /* extern */
s32 func_0096F7D0(s32);                             /* extern */
s32 func_0096F9D0(s32);                             /* extern */
s32 func_009704E0(s32);                             /* extern */
M2C_UNK func_009782E0(s32);                         /* extern */
M2C_UNK func_00978600(s32);                         /* extern */
M2C_UNK func_00985210(M2C_UNK, s32);                /* extern */
s32 func_00AF97B0(s32, u8);                         /* extern */
M2C_UNK func_00AFD9F0(s32, s32, s32, M2C_UNK, u8);  /* extern */
s16 func_00B05280(s32, u16, u8);                    /* extern */

void func_00AFD7A0(s32 arg0) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0_3;
    u16 temp_a1_2;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a4;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_5;

    temp_s3 = func_00225820() & 0xFF;
    temp_s4 = func_009704E0(temp_s3) & 0xFF;
    temp_v0 = func_00223C10(temp_s3, temp_s4);
    if (temp_v0 != NULL) {
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0);
        M2C_FIELD(temp_v0, u8 *, 0) = (u8) ((temp_a1 & ~0xF) | 2);
        temp_a2 = M2C_FIELD(temp_v0, u8 *, 1);
        temp_v1 = (temp_a2 & ~0xFC) | ((func_00AF97B0(arg0, temp_a1) & 0x3F) * 4);
        M2C_FIELD(temp_v0, u8 *, 1) = temp_v1;
        temp_a1_2 = (u16) M2C_FIELD(temp_v0, u8 *, 0);
        M2C_FIELD(temp_v0, u8 *, 0) = (s16) ((temp_a1_2 & ~0x3F0) | ((((u64) ((s64) temp_v1 << 0x38) >> 0x3A) & 0x3F) * 0x10));
        temp_v0_2 = func_00B05280(arg0, temp_a1_2, temp_a2);
        temp_s1 = temp_s3 & 0xFF;
        M2C_FIELD(temp_v0, s16 *, 4) = temp_v0_2;
        M2C_FIELD(temp_v0, s16 *, 2) = temp_v0_2;
        if (temp_s1 < 0x50) {
            temp_s5 = temp_s4 & 0xFF;
            if (temp_s5 < 0x20) {
                func_00224CA0(temp_s3, func_00224310(temp_s3, temp_s4) & 0xFF, arg0);
                temp_s2 = func_00225820() & 0xFF;
                if ((temp_s1 < 0x50) && (temp_s5 < 0x20)) {
                    func_009782E0(arg0);
                    if (temp_s1 == (temp_s2 & 0xFF)) {
                        func_00978600(temp_s4);
                    }
                    func_00931B90(temp_s3, temp_s4 & 0xFF);
                    func_0094E4A0(temp_s3, temp_s4);
                    func_0094CF00(temp_s3, temp_s4);
                    func_0094CE20(temp_s3, temp_s4);
                }
            }
        }
        if (func_0096F7D0(arg0) == 1) {
            temp_v0_3 = func_002260F0(temp_s3);
            if (temp_v0_3 != 0) {
                temp_s2_2 = func_0096F9D0(arg0) & 0xFF;
                temp_v0_4 = func_009566B0(arg0);
                temp_a1_3 = temp_s2_2 & 0xFF;
                temp_s0 = temp_v0_4 & 0xFFFF;
                M2C_FIELD(((temp_a1_3 * 0x16) + temp_v0_3), s16 *, 0x1E4) = temp_v0_4;
                temp_v0_5 = func_00223E00(temp_s0, temp_a1_3);
                if (temp_v0_5 != NULL) {
                    temp_a4 = M2C_FIELD(temp_v0_5, u8 *, 6);
                    M2C_FIELD(temp_v0_5, u8 *, 6) = (u8) ((temp_a4 & ~0x3F) | 7);
                    func_00AFD9F0(temp_s0, temp_s3, temp_s2_2, 7, temp_a4);
                    goto block_12;
                }
            }
        } else {
block_12:
            if (func_00237530(0x126) != 0) {
                func_00985210(0x126, func_00225820());
            }
        }
    }
}
