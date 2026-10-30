/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
void *func_00223E00();                              /* extern */
s32 func_00228A80();                                /* extern */
s32 func_002297F0(s32);                             /* extern */
s32 func_0096F7A0(s32, u8);                         /* extern */
s32 func_00970870(s32);                             /* extern */
s32 func_00B02A20(s32);                             /* extern */
M2C_UNK func_00B1A210(s32);                         /* extern */
M2C_UNK func_00B2B6E0(s32);                         /* extern */

void func_00B16FB0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s5;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_00223E00();
    if (temp_v0 != NULL) {
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 6);
        M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((temp_a1 & ~0x80) | 0x80);
        if ((func_0096F7A0(arg0, temp_a1) == 1) && (temp_v1 = M2C_FIELD(temp_v0, u8 *, 6), ((temp_v1 & 0x3F) == 0))) {
            M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((temp_v1 & ~0x3F) | 7);
            temp_s5 = ((arg0 & 0xFFFF) - 0x7000) & 0xFF;
            temp_s1 = func_002297F0(temp_s5);
            temp_s0 = func_00228A80();
            temp_s3 = func_00970870(arg0);
            if ((temp_s1 != 0) && (temp_s0 != 0) && (temp_s3 != 0)) {
                func_001C4730(temp_s0 + ((temp_s5 & 0xFF) * 0x48) + 0x10BBC, temp_s1 + 4, 0x48);
                func_001C4730(temp_s3, temp_s1 + 4, 0x48);
                goto block_7;
            }
        } else {
block_7:
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 6);
            if ((temp_a0 & 0x3F) == 1) {
                M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((temp_a0 & ~0x3F) | 2);
            }
            temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 6);
            if ((temp_a0_2 & 0x3F) == 5) {
                M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((temp_a0_2 & ~0x3F) | 6);
            }
            if (((func_00B02A20(arg0) & 0xFF) >= 0x2E) && ((M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) != 3)) {
                func_00B1A210(arg0);
                M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0, u8 *, 6) & ~0x3F) | 3);
            }
            func_00B2B6E0(arg0);
        }
    }
}
