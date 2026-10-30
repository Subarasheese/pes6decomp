/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BE9B0(s32 arg0, s32 arg1) {
    s32 var_a5;
    s32 var_a5_2;
    s32 var_a5_3;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a4_3;

    var_a5 = 0;
    do {
        temp_a4 = arg0 + var_a5;
        temp_a3 = arg1 + var_a5;
        temp_a2 = M2C_FIELD(temp_a4, u8 *, 0x771);
        var_a5 += 5;
        M2C_FIELD(temp_a3, u8 *, 0x766) = temp_a2;
        M2C_FIELD(temp_a3, u8 *, 0x767) = (u8) M2C_FIELD(temp_a4, u8 *, 0x772);
        M2C_FIELD(temp_a3, u8 *, 0x768) = (u8) M2C_FIELD(temp_a4, u8 *, 0x773);
        M2C_FIELD(temp_a3, u8 *, 0x769) = (u8) M2C_FIELD(temp_a4, u8 *, 0x774);
        M2C_FIELD(temp_a3, u8 *, 0x76A) = (u8) M2C_FIELD(temp_a4, u8 *, 0x775);
    } while (var_a5 < 6);
    var_a5_2 = 0xB;
    M2C_FIELD((var_a5 + arg1), u8 *, 0x766) = (u8) M2C_FIELD((var_a5 + arg0), u8 *, 0x771);
    do {
        temp_a4_2 = arg0 + var_a5_2;
        temp_a3_2 = arg1 + var_a5_2;
        temp_a2_2 = M2C_FIELD(temp_a4_2, u8 *, 0x75B);
        var_a5_2 += 5;
        M2C_FIELD(temp_a3_2, u8 *, 0x766) = temp_a2_2;
        M2C_FIELD(temp_a3_2, u8 *, 0x767) = (u8) M2C_FIELD(temp_a4_2, u8 *, 0x75C);
        M2C_FIELD(temp_a3_2, u8 *, 0x768) = (u8) M2C_FIELD(temp_a4_2, u8 *, 0x75D);
        M2C_FIELD(temp_a3_2, u8 *, 0x769) = (u8) M2C_FIELD(temp_a4_2, u8 *, 0x75E);
        M2C_FIELD(temp_a3_2, u8 *, 0x76A) = (u8) M2C_FIELD(temp_a4_2, u8 *, 0x75F);
    } while (var_a5_2 < 0x11);
    var_a5_3 = 0x16;
    M2C_FIELD((var_a5_2 + arg1), u8 *, 0x766) = (u8) M2C_FIELD((var_a5_2 + arg0), u8 *, 0x75B);
    do {
        temp_a4_3 = arg0 + var_a5_3;
        temp_a3_3 = arg1 + var_a5_3;
        temp_a2_3 = M2C_FIELD(temp_a4_3, u8 *, 0x766);
        var_a5_3 += 5;
        M2C_FIELD(temp_a3_3, u8 *, 0x766) = temp_a2_3;
        M2C_FIELD(temp_a3_3, u8 *, 0x767) = (u8) M2C_FIELD(temp_a4_3, u8 *, 0x767);
        M2C_FIELD(temp_a3_3, u8 *, 0x768) = (u8) M2C_FIELD(temp_a4_3, u8 *, 0x768);
        M2C_FIELD(temp_a3_3, u8 *, 0x769) = (u8) M2C_FIELD(temp_a4_3, u8 *, 0x769);
        M2C_FIELD(temp_a3_3, u8 *, 0x76A) = (u8) M2C_FIELD(temp_a4_3, u8 *, 0x76A);
    } while (var_a5_3 < 0x20);
}
