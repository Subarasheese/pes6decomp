/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */

void func_008BBE60(void *arg0, s32 arg1, void *arg2) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1_2;
    s32 var_a3;
    s8 *var_a1;
    s8 *var_a2;
    u8 temp_a0;
    u8 temp_a2_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_v1;
    void *var_a2_2;
    void *var_a3_2;

    func_001C48E8(0, 0x86);
    var_a3 = 0;
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((M2C_FIELD(arg0, u8 *, 0) & ~0x80) | ((arg1 & 1) << 7));
    do {
        temp_a2 = arg2 + var_a3;
        temp_a1 = arg0 + var_a3;
        temp_a0 = M2C_FIELD(temp_a2, u8 *, 0x766);
        var_a3 += 8;
        M2C_FIELD(temp_a1, u8 *, 1) = temp_a0;
        M2C_FIELD(temp_a1, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x767);
        M2C_FIELD(temp_a1, u8 *, 3) = (u8) M2C_FIELD(temp_a2, u8 *, 0x768);
        M2C_FIELD(temp_a1, u8 *, 4) = (u8) M2C_FIELD(temp_a2, u8 *, 0x769);
        M2C_FIELD(temp_a1, u8 *, 5) = (u8) M2C_FIELD(temp_a2, u8 *, 0x76A);
        M2C_FIELD(temp_a1, u8 *, 6) = (u8) M2C_FIELD(temp_a2, u8 *, 0x76B);
        M2C_FIELD(temp_a1, u8 *, 7) = (u8) M2C_FIELD(temp_a2, u8 *, 0x76C);
        M2C_FIELD(temp_a1, u8 *, 8) = (u8) M2C_FIELD(temp_a2, u8 *, 0x76D);
    } while (var_a3 < 0x20);
    var_a2 = arg2 + 0x7D6;
    var_a1 = arg0 + 0x21;
    var_a0 = 0x35;
    do {
        var_a0 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 1;
        var_a1 += 1;
    } while (var_a0 > 0);
    var_a1_2 = 0;
    var_a3_2 = arg2;
    var_a2_2 = arg0;
    do {
        var_a1_2 += 1;
        M2C_FIELD(var_a2_2, u8 *, 0x56) = (u8) M2C_FIELD(var_a3_2, u8 *, 0x74E);
        M2C_FIELD(var_a2_2, u8 *, 0x57) = (u8) M2C_FIELD(var_a3_2, u8 *, 0x74F);
        var_a3_2 += 2;
        var_a2_2 += 2;
    } while (var_a1_2 < 7);
    var_a0_2 = 0;
    M2C_FIELD(arg0, u8 *, 0x64) = (u8) M2C_FIELD(arg2, u8 *, 0x75C);
    M2C_FIELD(arg0, u8 *, 0x65) = (u8) M2C_FIELD(arg2, u8 *, 0x7C6);
    M2C_FIELD(arg0, u8 *, 0x66) = (u8) M2C_FIELD(arg2, u8 *, 0x7C7);
    M2C_FIELD(arg0, u8 *, 0x67) = (u8) M2C_FIELD(arg2, u8 *, 0x7C8);
    M2C_FIELD(arg0, u8 *, 0x68) = (u8) M2C_FIELD(arg2, u8 *, 0x7C9);
    M2C_FIELD(arg0, u8 *, 0x69) = (u8) M2C_FIELD(arg2, u8 *, 0x7CA);
    M2C_FIELD(arg0, u8 *, 0x6A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x6A) & ~7) | (M2C_FIELD(arg2, u8 *, 0x7CC) & 7));
    M2C_FIELD(arg0, u8 *, 0x6A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x6A) & ~0x38) | ((M2C_FIELD(arg2, u8 *, 0x7CB) & 7) * 8));
    M2C_FIELD(arg0, u8 *, 0x6A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x6A) & ~0x40) | ((M2C_FIELD(arg2, u8 *, 0x7CD) & 1) << 6));
    M2C_FIELD(arg0, u8 *, 0x6A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x6A) & ~0x80) | ((M2C_FIELD(arg2, u8 *, 0x7CE) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x6B) = (u8) M2C_FIELD(arg2, u8 *, 0x7CF);
    M2C_FIELD(arg0, u8 *, 0x6C) = (u8) M2C_FIELD(arg2, u8 *, 0x7D0);
    M2C_FIELD(arg0, u8 *, 0x6D) = (u8) M2C_FIELD(arg2, u8 *, 0x7D1);
    M2C_FIELD(arg0, u8 *, 0x6E) = (u8) M2C_FIELD(arg2, u8 *, 0x7D2);
    M2C_FIELD(arg0, u8 *, 0x6F) = (u8) M2C_FIELD(arg2, u8 *, 0x7D3);
    M2C_FIELD(arg0, u8 *, 0x70) = (u8) M2C_FIELD(arg2, u8 *, 0x7D4);
    do {
        temp_v1 = arg0 + var_a0_2;
        M2C_FIELD(temp_v1, u8 *, 0x71) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x80C);
        M2C_FIELD(temp_v1, u8 *, 0x7B) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x817);
        M2C_FIELD(temp_v1, u8 *, 0x72) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x80D);
        M2C_FIELD(temp_v1, u8 *, 0x7C) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x818);
        M2C_FIELD(temp_v1, u8 *, 0x73) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x80E);
        M2C_FIELD(temp_v1, u8 *, 0x7D) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x819);
        M2C_FIELD(temp_v1, u8 *, 0x74) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x80F);
        M2C_FIELD(temp_v1, u8 *, 0x7E) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x81A);
        M2C_FIELD(temp_v1, u8 *, 0x75) = (u8) M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x810);
        temp_a2_2 = M2C_FIELD((arg2 + (M2C_FIELD(arg2, u8 *, 0x73E) * 0x52) + var_a0_2), u8 *, 0x81B);
        var_a0_2 += 5;
        M2C_FIELD(temp_v1, u8 *, 0x7F) = temp_a2_2;
    } while (var_a0_2 < 0xA);
    M2C_FIELD(arg0, u8 *, 0x85) = (u8) ((M2C_FIELD(arg0, u8 *, 0x85) & ~0xF) | (M2C_FIELD(arg2, u8 *, 0x822) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x85) = (u8) ((M2C_FIELD(arg0, u8 *, 0x85) & ~0xF0) | ((M2C_FIELD(arg2, u8 *, 0x824) & 0xF) * 0x10));
}
