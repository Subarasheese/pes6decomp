/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91340(M2C_UNK, u8);                 /* extern */
s32 func_00B94C80(s32);                             /* extern */
s32 func_00B94E30(s32, s32, M2C_UNK);               /* extern */
s32 func_00B94E80(s32, s32, M2C_UNK);               /* extern */
void *func_00B9C490();                              /* extern */
s16 func_00BC5B90(s32, s32);                        /* extern */
s32 func_00BC5D90(M2C_UNK, M2C_UNK, u8);            /* extern */
s32 func_00BF3A10(s32);                             /* extern */
M2C_UNK func_00BF3E80(s32, s32);                    /* extern */
s32 func_00BF43E0(s32);                             /* extern */
s32 func_00BF4450(M2C_UNK);                         /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
s32 func_00BF5870(s32);                             /* extern */
s32 func_00BF5890(s32);                             /* extern */
void *func_00C1B400(M2C_UNK);                       /* extern */
s16 func_00C1B460(M2C_UNK);                         /* extern */
extern char D_00CE40D8[];

void func_00B9E070(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;

    temp_s0 = func_00B9C490();
    M2C_FIELD(temp_s0, s16 *, 0x3A) = func_00C1B460(0);
    M2C_FIELD(temp_s0, s32 *, 0x28) = 0x60;
    var_s0 = 0;
    do {
        var_s1 = func_00BF5890(var_s0) & 0xFF;
        temp_s2 = func_00BF5870(var_s0) & 0xFF;
        temp_v1 = temp_s2 & 0xFF;
        temp_a0 = var_s1 & 0xFF;
        temp_v0 = func_00BF43E0(var_s0) & 0xFF;
        if (temp_a0 < temp_v1) {
            var_s1 = temp_v1;
        } else {
            temp_v1_2 = temp_v1 + (temp_v0 & 0xFF);
            if (temp_a0 >= temp_v1_2) {
                var_s1 = (temp_v1_2 - 1) & 0xFF;
            }
        }
        func_00BF3E80(var_s0, var_s1 & 0xFF);
        var_s0 += 1;
    } while (var_s0 < 2);
    temp_s0_2 = func_00C1B400(1);
    func_001C4730(temp_s0_2, func_00BF4450(1), 0x7C);
    temp_s2_2 = func_00C1B460(0) & 0xFFFF;
    temp_s0_3 = func_00C1B400(0);
    temp_s1 = func_00BF4480(0) & 0xFFFF;
    if (func_00BF3A10(temp_s1) != 0) {
        func_001C4730(temp_s0_3 + 0x34, func_00B94C80(temp_s1), 0x48);
        func_001C4730(temp_s0_3, func_00B94E80(temp_s1, temp_s2_2, 1), 0x2D);
        func_001C4730(temp_s0_3 + 0x20, func_00B94E30(temp_s1, temp_s2_2, 1), 0xF);
        M2C_FIELD(temp_s0_3, s16 *, 0x30) = func_00BC5B90(temp_s1, temp_s2_2);
    } else {
        temp_a2 = M2C_FIELD(temp_s0_3, u8 *, 0x35);
        M2C_FIELD(temp_s0_3, u8 *, 0x35) = (u8) ((temp_a2 & ~0xF0) | 0xD0);
        func_001C4730(temp_s0_3, func_00BC5D90(0, 0, temp_a2), 0x2D);
    }
    func_00B912F0(0xC, 5);
    func_00B912F0(0x11, 5);
    func_00B91340(0x11, (*(u8 *)D_00CE40D8));
    func_00B91340(0xC, (*(u8 *)D_00CE40D8));
}
