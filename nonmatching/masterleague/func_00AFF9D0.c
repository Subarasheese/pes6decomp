/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_00B60B60(u32, u32);
extern void * func_00228A80(void);
extern s32 func_00B60B70(u32, u32);
s8 func_002249A0(s32, s32);                         /* extern */
s8 func_00938F10(s16);                              /* extern */
s32 func_0093B480(s16);                             /* extern */
s32 func_00AFFF70(M2C_UNK);                         /* extern */

void func_00AFF9D0(s32 arg0) {
    s16 temp_s2;
    s16 temp_s2_2;
    s16 temp_s2_3;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s16 temp_s3_4;
    s16 temp_s3_5;
    s16 temp_s3_6;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s8 temp_v0_10;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 temp_v0_6;
    s8 temp_v0_7;
    s8 temp_v0_8;
    s8 temp_v0_9;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        temp_s0 = arg0 & 0xFF;
        switch (temp_s0) {                          /* irregular */
        case 2:
        case 0:
            if (temp_s0 != 0) {
                var_v0 = func_00AFFF70(0x20);
            } else {
                var_v0 = func_00AFFF70(0x1C);
            }
            temp_s3 = var_v0 & 0xFFFF;
            temp_v0_2 = func_00938F10(temp_s3);
            M2C_FIELD(temp_v0, s16 *, 0xC336) = temp_s3;
            M2C_FIELD(temp_v0, s8 *, 0xC338) = temp_v0_2;
            M2C_FIELD(temp_v0, s8 *, 0xC339) = func_002249A0(temp_v0_2 & 0xFF, func_0093B480(temp_s3));
            if (temp_s0 == 0) {
                var_v0_2 = func_00B60B70(2U, func_00225820());
            } else {
                var_v0_2 = func_00B60B70(0U, func_00225820());
            }
            temp_s3_2 = var_v0_2 & 0xFFFF;
            temp_v0_3 = func_00938F10(temp_s3_2);
            M2C_FIELD(temp_v0, s16 *, 0xC33A) = temp_s3_2;
            M2C_FIELD(temp_v0, s8 *, 0xC33C) = temp_v0_3;
            M2C_FIELD(temp_v0, s8 *, 0xC33D) = func_002249A0(temp_v0_3 & 0xFF, func_0093B480(temp_s3_2));
            if (temp_s0 == 0) {
                var_v0_3 = func_00B60B60(2U, func_00225820());
            } else {
                var_v0_3 = func_00B60B60(0U, func_00225820());
            }
            temp_s2 = var_v0_3 & 0xFFFF;
            temp_v0_4 = func_00938F10(temp_s2);
            M2C_FIELD(temp_v0, s16 *, 0xC33E) = temp_s2;
            M2C_FIELD(temp_v0, s8 *, 0xC340) = temp_v0_4;
            M2C_FIELD(temp_v0, s8 *, 0xC341) = func_002249A0(temp_v0_4 & 0xFF, func_0093B480(temp_s2));
            return;
        case 9:
        case 8:
            if (temp_s0 != 8) {
                var_v0_4 = func_00AFFF70(0x27);
            } else {
                var_v0_4 = func_00AFFF70(0x26);
            }
            temp_s3_3 = var_v0_4 & 0xFFFF;
            temp_v0_5 = func_00938F10(temp_s3_3);
            M2C_FIELD(temp_v0, s16 *, 0xC342) = temp_s3_3;
            M2C_FIELD(temp_v0, s8 *, 0xC344) = temp_v0_5;
            M2C_FIELD(temp_v0, s8 *, 0xC345) = func_002249A0(temp_v0_5 & 0xFF, func_0093B480(temp_s3_3));
            if (temp_s0 == 8) {
                var_v0_5 = func_00B60B70(5U, func_00225820());
            } else {
                var_v0_5 = func_00B60B70(4U, func_00225820());
            }
            temp_s3_4 = var_v0_5 & 0xFFFF;
            temp_v0_6 = func_00938F10(temp_s3_4);
            M2C_FIELD(temp_v0, s16 *, 0xC346) = temp_s3_4;
            M2C_FIELD(temp_v0, s8 *, 0xC348) = temp_v0_6;
            M2C_FIELD(temp_v0, s8 *, 0xC349) = func_002249A0(temp_v0_6 & 0xFF, func_0093B480(temp_s3_4));
            if (temp_s0 == 8) {
                var_v0_6 = func_00B60B60(5U, func_00225820());
            } else {
                var_v0_6 = func_00B60B60(4U, func_00225820());
            }
            temp_s2_2 = var_v0_6 & 0xFFFF;
            temp_v0_7 = func_00938F10(temp_s2_2);
            M2C_FIELD(temp_v0, s16 *, 0xC34A) = temp_s2_2;
            M2C_FIELD(temp_v0, s8 *, 0xC34C) = temp_v0_7;
            M2C_FIELD(temp_v0, s8 *, 0xC34D) = func_002249A0(temp_v0_7 & 0xFF, func_0093B480(temp_s2_2));
            return;
        case 3:
        case 1:
            if (temp_s0 != 1) {
                var_v0_7 = func_00AFFF70(0x21);
            } else {
                var_v0_7 = func_00AFFF70(0x1D);
            }
            temp_s3_5 = var_v0_7 & 0xFFFF;
            temp_v0_8 = func_00938F10(temp_s3_5);
            M2C_FIELD(temp_v0, s16 *, 0xC34E) = temp_s3_5;
            M2C_FIELD(temp_v0, s8 *, 0xC350) = temp_v0_8;
            M2C_FIELD(temp_v0, s8 *, 0xC351) = func_002249A0(temp_v0_8 & 0xFF, func_0093B480(temp_s3_5));
            if (temp_s0 == 1) {
                var_v0_8 = func_00B60B70(3U, func_00225820());
            } else {
                var_v0_8 = func_00B60B70(1U, func_00225820());
            }
            temp_s3_6 = var_v0_8 & 0xFFFF;
            temp_v0_9 = func_00938F10(temp_s3_6);
            M2C_FIELD(temp_v0, s16 *, 0xC352) = temp_s3_6;
            M2C_FIELD(temp_v0, s8 *, 0xC354) = temp_v0_9;
            M2C_FIELD(temp_v0, s8 *, 0xC355) = func_002249A0(temp_v0_9 & 0xFF, func_0093B480(temp_s3_6));
            if (temp_s0 == 1) {
                var_v0_9 = func_00B60B60(3U, func_00225820());
            } else {
                var_v0_9 = func_00B60B60(1U, func_00225820());
            }
            temp_s2_3 = var_v0_9 & 0xFFFF;
            temp_v0_10 = func_00938F10(temp_s2_3);
            M2C_FIELD(temp_v0, s16 *, 0xC356) = temp_s2_3;
            M2C_FIELD(temp_v0, s8 *, 0xC358) = temp_v0_10;
            M2C_FIELD(temp_v0, s8 *, 0xC359) = func_002249A0(temp_v0_10 & 0xFF, func_0093B480(temp_s2_3));
            break;
        }
    }
}
