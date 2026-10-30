/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B91340(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00B94C80(s32);                             /* extern */
s32 func_00B94E30(s32, s32, M2C_UNK);               /* extern */
s32 func_00B94E80(s32, s32, M2C_UNK);               /* extern */
s16 func_00BC5B90(s32, s32);                        /* extern */
s32 func_00BC5D90(M2C_UNK, M2C_UNK, u8);            /* extern */
s32 func_00BF3A10(s32);                             /* extern */
M2C_UNK func_00BF3EA0(s32);                         /* extern */
s32 func_00BF4450(s32);                             /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
s32 func_00BF5850(s32);                             /* extern */
M2C_UNK func_00BF5870(s32);                         /* extern */
s32 func_00BF5890();                                /* extern */
void *func_00C1B400(s32);                           /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern char D_00CE40D8[];

void func_00B9E440(s32 arg0, s32 arg1) {
    s32 *temp_s3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    u8 temp_a2;
    void *temp_s0_3;
    void *temp_s0_4;

    temp_s0 = func_00BF5890() & 0xFF;
    func_00BF5870(arg0);
    temp_s0_2 = temp_s0 & 0xFF;
    if (temp_s0_2 == 0) {
        temp_s3 = ((void *)D_00CE40D8) + (arg0 * 4);
        if (*temp_s3 == 1) {
            *temp_s3 = 0;
            func_00B91340(0x11, (u8) *temp_s3);
            func_00B91340(0xC, (u8) *temp_s3);
            if (arg1 == 1) {
                func_0026E840(0x8400F802);
            }
            func_00B92210(0, 1, 1);
            return;
        }
    }
    if (temp_s0_2 < (func_00BF5850(arg0) - 1)) {
        func_00BF3EA0(arg0);
        if (arg1 == 1) {
            func_0026E840(0x8400F802);
        }
        if (arg0 != 1) {
            temp_s2 = func_00C1B460(0) & 0xFFFF;
            temp_s0_3 = func_00C1B400(0);
            temp_s1 = func_00BF4480(0) & 0xFFFF;
            if (func_00BF3A10(temp_s1) != 0) {
                func_001C4730(temp_s0_3 + 0x34, func_00B94C80(temp_s1), 0x48);
                func_001C4730(temp_s0_3, func_00B94E80(temp_s1, temp_s2, 1), 0x2D);
                func_001C4730(temp_s0_3 + 0x20, func_00B94E30(temp_s1, temp_s2, 1), 0xF);
                M2C_FIELD(temp_s0_3, s16 *, 0x30) = func_00BC5B90(temp_s1, temp_s2);
            } else {
                temp_a2 = M2C_FIELD(temp_s0_3, u8 *, 0x35);
                M2C_FIELD(temp_s0_3, u8 *, 0x35) = (u8) ((temp_a2 & ~0xF0) | 0xD0);
                func_001C4730(temp_s0_3, func_00BC5D90(0, 0, temp_a2), 0x2D);
            }
        } else {
            temp_s0_4 = func_00C1B400(arg0);
            func_001C4730(temp_s0_4, func_00BF4450(arg0), 0x7C);
        }
        func_00B92210(0, 1, 1);
    }
}
