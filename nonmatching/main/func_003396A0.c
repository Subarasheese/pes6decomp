/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_003396A0(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a2;
    s32 var_a2_2;
    void *var_a0;
    void *var_a1_3;
    void *var_a1_4;
    void *var_v1;
    void *var_v1_2;

    var_a0 = arg0;
    switch (arg1) {                                 /* irregular */
    case 2:
        M2C_FIELD(var_a0, s8 *, 4) = 1;
        var_a1 = 0;
        M2C_FIELD(var_a0, s8 *, 5) = 0xFF;
        var_v1 = var_a0;
        do {
            M2C_FIELD(var_v1, s32 *, 0x40) = 0;
            var_a1 += 1;
            M2C_FIELD(var_v1, s32 *, 0x44) = 0;
            M2C_FIELD(var_v1, s32 *, 0x48) = 0;
            M2C_FIELD(var_v1, s32 *, 0x4C) = 0;
            var_v1 += 0x10;
        } while (var_a1 < 2);
        var_a1_2 = 0;
        do {
            M2C_FIELD(var_a0, s32 *, 0x64) = 0x8F8F8F8F;
            var_a1_2 += 1;
            M2C_FIELD(var_a0, s32 *, 0xDC) = 0x8F8F8F8F;
            M2C_FIELD(var_a0, s32 *, 0x68) = 0x8F8F8F8F;
            M2C_FIELD(var_a0, s32 *, 0xE0) = 0x8F8F8F8F;
            var_a0 += 8;
        } while (var_a1_2 < 2);
        break;
    case 1:
        M2C_FIELD(var_a0, s32 *, 0) = 1;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        var_a2 = 0;
        M2C_FIELD(var_a0, s32 *, 0x3C) = 0;
        var_a1_3 = var_a0;
        M2C_FIELD(var_a0, s8 *, 4) = 1;
        M2C_FIELD(var_a0, s8 *, 5) = 0xFF;
        do {
            M2C_FIELD(var_a1_3, s32 *, 0x40) = 0;
            var_a2 += 1;
            M2C_FIELD(var_a1_3, s32 *, 0x44) = 0;
            M2C_FIELD(var_a1_3, s32 *, 0x48) = 0;
            M2C_FIELD(var_a1_3, s32 *, 0x4C) = 0;
            var_a1_3 += 0x10;
        } while (var_a2 < 2);
        var_a2_2 = 0;
        var_a1_4 = var_a0;
        do {
            M2C_FIELD(var_a1_4, s32 *, 0x64) = 0x8F8F8F8F;
            var_a2_2 += 5;
            M2C_FIELD(var_a1_4, s32 *, 0x6C) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x68) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x70) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x78) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x80) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x7C) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x84) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x8C) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x94) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x90) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0x98) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xA0) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xA8) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xA4) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xAC) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xB4) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xBC) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xB8) = 0x8F8F8F8F;
            M2C_FIELD(var_a1_4, s32 *, 0xC0) = 0x8F8F8F8F;
            var_a1_4 += 0x64;
        } while (var_a2_2 < 0xA);
        func_001C48E8(var_a0 + 0xC, 0, 0x30);
        break;
    case 4:
        var_a1_5 = 0;
        M2C_FIELD(var_a0, s8 *, 5) = 0xFF;
        var_v1_2 = var_a0;
        do {
            M2C_FIELD(var_v1_2, s32 *, 0x40) = 0;
            var_a1_5 += 1;
            M2C_FIELD(var_v1_2, s32 *, 0x44) = 0;
            M2C_FIELD(var_v1_2, s32 *, 0x48) = 0;
            M2C_FIELD(var_v1_2, s32 *, 0x4C) = 0;
            var_v1_2 += 0x10;
        } while (var_a1_5 < 2);
        var_a1_6 = 0;
        do {
            M2C_FIELD(var_a0, s32 *, 0xB4) = 0x8F8F8F8F;
            var_a1_6 += 1;
            M2C_FIELD(var_a0, s32 *, 0x8C) = 0x8F8F8F8F;
            M2C_FIELD(var_a0, s32 *, 0xB8) = 0x8F8F8F8F;
            M2C_FIELD(var_a0, s32 *, 0x90) = 0x8F8F8F8F;
            var_a0 += 8;
        } while (var_a1_6 < 2);
        break;
    }
    return 1;
}
