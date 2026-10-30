/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00838940(void) {
    M2C_UNK *var_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v1;
    void *temp_s2;
    void *temp_v0_2;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_s1 = temp_v0 + 0xF8A4;
    } else {
        var_s1 = 0;
    }
    if (func_00D0BAF0() == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = ((void *)D_008A5CB0);
    }
    if (var_s0 == NULL) {
        return 0;
    }
    if (var_s1 != 0) {
        func_001C48E8(var_s0, 0, 0x2B8);
        var_s1_2 = 0;
        do {
            temp_s2 = var_s0 + (var_s1_2 * 0x88);
            M2C_FIELD(temp_s2, s32 *, 0) = 0;
            func_001C48E8(temp_s2 + 4, 0, 0x31);
            func_001C48E8(temp_s2 + 0x35, 0, 0x20);
            func_001C48E8(temp_s2 + 0x55, 0, 0x11);
            M2C_FIELD(temp_s2, s16 *, 0x66) = 0;
            func_001C48E8(temp_s2 + 0x68, 0, 0x11);
            M2C_FIELD(temp_s2, s16 *, 0x7A) = 0;
            M2C_FIELD(temp_s2, s32 *, 0x7C) = 0;
            M2C_FIELD(temp_s2, s8 *, 0x80) = -1;
            var_s1_2 += 1;
            M2C_FIELD(temp_s2, s8 *, 0x81) = 0;
            M2C_FIELD(temp_s2, s8 *, 0x82) = 0;
            M2C_FIELD(temp_s2, s8 *, 0x83) = 0;
            M2C_FIELD(temp_s2, s8 *, 0x83) = 2;
            M2C_FIELD(temp_s2, s8 *, 0x85) = 0;
        } while (var_s1_2 < 4);
        M2C_FIELD(var_s0, s32 *, 0x220) = 0;
        var_v1 = 0;
        do {
            temp_v0_2 = var_s0 + (var_v1 * 4);
            var_v1 += 1;
            M2C_FIELD(temp_v0_2, s32 *, 0x224) = 4;
        } while (var_v1 < 2);
        M2C_FIELD(var_s0, s32 *, 0x22C) = 4;
        M2C_FIELD(var_s0, s32 *, 0x230) = 4;
        M2C_FIELD(var_s0, s32 *, 0x234) = 0;
        M2C_FIELD(var_s0, s8 *, 0x238) = 0;
        M2C_FIELD(var_s0, s8 *, 0x239) = 1;
        M2C_FIELD(var_s0, s8 *, 0x23A) = 0;
        M2C_FIELD(var_s0, s8 *, 0x23B) = 3;
        M2C_FIELD(var_s0, s8 *, 0x23C) = 0;
        M2C_FIELD(var_s0, s8 *, 0x23D) = 1;
        M2C_FIELD(var_s0, s8 *, 0x23E) = 0;
        M2C_FIELD(var_s0, s8 *, 0x23F) = 0;
        M2C_FIELD(var_s0, s8 *, 0x240) = 0;
        M2C_FIELD(var_s0, s8 *, 0x241) = 0;
        M2C_FIELD(var_s0, s8 *, 0x242) = 0;
        M2C_FIELD(var_s0, s8 *, 0x243) = 0;
        M2C_FIELD(var_s0, s8 *, 0x244) = 0;
        M2C_FIELD(var_s0, s8 *, 0x245) = 0;
        M2C_FIELD(var_s0, s8 *, 0x246) = 0;
        func_001C48E8(var_s0 + 0x248, 0, 0x31);
        func_001C48E8(var_s0 + 0x279, 0, 0x31);
        M2C_FIELD(var_s0, s8 *, 0x2B4) = 0;
        M2C_FIELD(var_s0, s8 *, 0x2B5) = 0;
        M2C_FIELD(var_s0, s8 *, 0x2B6) = 0;
        return 1;
    }
    return 0;
}
