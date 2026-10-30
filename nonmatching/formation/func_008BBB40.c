/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BBB40(void *arg0, void *arg1) {
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3_2;
    s32 var_a5;
    s8 *var_a3;
    s8 *var_a4;
    u8 temp_a2;
    void *temp_a3;
    void *temp_a4;
    void *temp_v1;
    void *var_a4_2;
    void *var_a5_2;

    var_a5 = 0;
    do {
        temp_a4 = arg1 + var_a5;
        temp_a3 = arg0 + var_a5;
        temp_a2 = M2C_FIELD(temp_a4, u8 *, 1);
        var_a5 += 8;
        M2C_FIELD(temp_a3, u8 *, 0x766) = temp_a2;
        M2C_FIELD(temp_a3, u8 *, 0x767) = (u8) M2C_FIELD(temp_a4, u8 *, 2);
        M2C_FIELD(temp_a3, u8 *, 0x768) = (u8) M2C_FIELD(temp_a4, u8 *, 3);
        M2C_FIELD(temp_a3, u8 *, 0x769) = (u8) M2C_FIELD(temp_a4, u8 *, 4);
        M2C_FIELD(temp_a3, u8 *, 0x76A) = (u8) M2C_FIELD(temp_a4, u8 *, 5);
        M2C_FIELD(temp_a3, u8 *, 0x76B) = (u8) M2C_FIELD(temp_a4, u8 *, 6);
        M2C_FIELD(temp_a3, u8 *, 0x76C) = (u8) M2C_FIELD(temp_a4, u8 *, 7);
        M2C_FIELD(temp_a3, u8 *, 0x76D) = (u8) M2C_FIELD(temp_a4, u8 *, 8);
    } while (var_a5 < 0x20);
    var_a4 = arg1 + 0x21;
    var_a3 = arg0 + 0x7D6;
    var_a2 = 0x35;
    do {
        var_a2 -= 1;
        *var_a3 = *var_a4;
        var_a4 += 1;
        var_a3 += 1;
    } while (var_a2 > 0);
    var_a3_2 = 0;
    var_a5_2 = arg1;
    var_a4_2 = arg0;
    do {
        var_a3_2 += 1;
        M2C_FIELD(var_a4_2, u8 *, 0x74E) = (u8) M2C_FIELD(var_a5_2, u8 *, 0x56);
        M2C_FIELD(var_a4_2, u8 *, 0x74F) = (u8) M2C_FIELD(var_a5_2, u8 *, 0x57);
        var_a5_2 += 2;
        var_a4_2 += 2;
    } while (var_a3_2 < 7);
    var_a2_2 = 0;
    M2C_FIELD(arg0, u8 *, 0x75C) = (u8) M2C_FIELD(arg1, u8 *, 0x64);
    M2C_FIELD(arg0, u8 *, 0x7C6) = (u8) M2C_FIELD(arg1, u8 *, 0x65);
    M2C_FIELD(arg0, u8 *, 0x7C7) = (u8) M2C_FIELD(arg1, u8 *, 0x66);
    M2C_FIELD(arg0, u8 *, 0x7C8) = (u8) M2C_FIELD(arg1, u8 *, 0x67);
    M2C_FIELD(arg0, u8 *, 0x7C9) = (u8) M2C_FIELD(arg1, u8 *, 0x68);
    M2C_FIELD(arg0, u8 *, 0x7CA) = (u8) M2C_FIELD(arg1, u8 *, 0x69);
    M2C_FIELD(arg0, s8 *, 0x7CC) = (s8) (M2C_FIELD(arg1, u8 *, 0x6A) & 7);
    M2C_FIELD(arg0, s8 *, 0x7CB) = (s8) ((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x6A) << 0x3A) >> 0x3D);
    M2C_FIELD(arg0, s8 *, 0x7CD) = (s8) ((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x6A) << 0x39) >> 0x3F);
    M2C_FIELD(arg0, s8 *, 0x7CE) = (s8) ((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x6A) << 0x38) >> 0x3F);
    M2C_FIELD(arg0, u8 *, 0x7CF) = (u8) M2C_FIELD(arg1, u8 *, 0x6B);
    M2C_FIELD(arg0, u8 *, 0x7D0) = (u8) M2C_FIELD(arg1, u8 *, 0x6C);
    M2C_FIELD(arg0, u8 *, 0x7D1) = (u8) M2C_FIELD(arg1, u8 *, 0x6D);
    M2C_FIELD(arg0, u8 *, 0x7D2) = (u8) M2C_FIELD(arg1, u8 *, 0x6E);
    M2C_FIELD(arg0, u8 *, 0x7D3) = (u8) M2C_FIELD(arg1, u8 *, 0x6F);
    M2C_FIELD(arg0, u8 *, 0x7D4) = (u8) M2C_FIELD(arg1, u8 *, 0x70);
    do {
        temp_v1 = arg1 + var_a2_2;
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x80C) = (u8) M2C_FIELD(temp_v1, u8 *, 0x71);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x817) = (u8) M2C_FIELD(temp_v1, u8 *, 0x7B);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x80D) = (u8) M2C_FIELD(temp_v1, u8 *, 0x72);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x818) = (u8) M2C_FIELD(temp_v1, u8 *, 0x7C);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x80E) = (u8) M2C_FIELD(temp_v1, u8 *, 0x73);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x819) = (u8) M2C_FIELD(temp_v1, u8 *, 0x7D);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x80F) = (u8) M2C_FIELD(temp_v1, u8 *, 0x74);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x81A) = (u8) M2C_FIELD(temp_v1, u8 *, 0x7E);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x810) = (u8) M2C_FIELD(temp_v1, u8 *, 0x75);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_a2_2), u8 *, 0x81B) = (u8) M2C_FIELD(temp_v1, u8 *, 0x7F);
        var_a2_2 += 5;
    } while (var_a2_2 < 0xA);
    M2C_FIELD(arg0, s8 *, 0x822) = (s8) (M2C_FIELD(arg1, u8 *, 0x85) & 0xF);
    M2C_FIELD(arg0, s8 *, 0x824) = (s8) ((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x85) << 0x38) >> 0x3C);
}
