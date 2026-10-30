/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00(u16);                           /* extern */
s16 func_00225680(s32);                             /* extern */
M2C_UNK func_00938E60(u8, s32, M2C_UNK, u8, u16);   /* extern */
s32 func_0096F810(u16);                             /* extern */
s32 func_0096F9D0(u16);                             /* extern */
void *func_00994C60(u8, u8);                        /* extern */
M2C_UNK func_00B16EC0(u8, u8, u16, M2C_UNK);        /* extern */
M2C_UNK func_00B19070(u8 *, u8 *, u8 *);            /* extern */

void func_00B17180(void *arg0) {
    u8 sp68;
    u8 sp6C;
    u8 sp6D;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s2;
    u16 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if (arg0 != NULL) {
        sp6C = M2C_FIELD(arg0, u8 *, 0);
        sp6D = M2C_FIELD(arg0, u8 *, 1);
        func_00B19070(&sp6C, &sp68, &sp6C);
        temp_v0 = func_00994C60(sp6C, sp6D);
        if (temp_v0 != NULL) {
            temp_s0 = M2C_FIELD(temp_v0, u16 *, 4);
            temp_s4 = func_0096F810(temp_s0) & 0xFF;
            temp_s3 = func_0096F9D0(temp_s0) & 0xFF;
            if (temp_s3 != 0xFF) {
                func_00B16EC0(sp6C, sp68, M2C_FIELD(temp_v0, u16 *, 6), 0);
                temp_v0_2 = func_00223E00(temp_s0);
                if (temp_v0_2 != NULL) {
                    var_s2 = 0;
                    M2C_FIELD(temp_v0_2, u16 *, 0x1C) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x1A);
                    M2C_FIELD(temp_v0_2, u8 *, 0x13) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x12);
                    M2C_FIELD(temp_v0_2, u16 *, 0x1A) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x18);
                    M2C_FIELD(temp_v0_2, u8 *, 0x12) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x11);
                    M2C_FIELD(temp_v0_2, u16 *, 0x18) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x16);
                    M2C_FIELD(temp_v0_2, u8 *, 0x11) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x10);
                } else {
                    var_s2 = 0xFF;
                }
                if ((var_s2 & 0xFF) != 0xFF) {
                    temp_v0_3 = func_00223E00(temp_s0);
                    if (temp_v0_3 != NULL) {
                        M2C_FIELD((((var_s2 & 0xFF) * 2) + temp_v0_3), s16 *, 0x14) = func_00225680(temp_s4);
                    }
                }
                func_00938E60(sp6C, temp_s3, 2, M2C_FIELD(temp_v0, u8 *, 0xE), M2C_FIELD(temp_v0, u16 *, 8));
                M2C_FIELD(temp_v0, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0, u8 *, 1) & ~0x80) | 0x80);
            }
        }
    }
}
