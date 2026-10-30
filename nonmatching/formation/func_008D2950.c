/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008C5D40(void *);
void func_008D2950(void *arg0) {
    s32 var_a2;
    s32 var_v1;
    void *temp_v1;
    void *var_a1;
    void *var_a2_2;

    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 3;
    M2C_FIELD(arg0, s8 *, 3) = 0xB;
    M2C_FIELD(arg0, s8 *, 4) = 0xB;
    var_a2 = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0xFF;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 1;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    do {
        temp_v1 = arg0 + var_a2;
        M2C_FIELD(temp_v1, s8 *, 0xD) = 1;
        var_a2 += 8;
        M2C_FIELD(temp_v1, s8 *, 0xE) = 1;
        M2C_FIELD(temp_v1, s8 *, 0xF) = 1;
        M2C_FIELD(temp_v1, s8 *, 0x10) = 1;
        M2C_FIELD(temp_v1, s8 *, 0x11) = 1;
        M2C_FIELD(temp_v1, s8 *, 0x12) = 1;
        M2C_FIELD(temp_v1, s8 *, 0x13) = 1;
        M2C_FIELD(temp_v1, s8 *, 0x14) = 1;
    } while (var_a2 < 0x20);
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    var_v1 = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    var_a2_2 = arg0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    var_a1 = arg0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    do {
        M2C_FIELD(var_a2_2, s32 *, 0x54) = 0;
        var_v1 += 1;
        M2C_FIELD(var_a2_2, s32 *, 0x58) = 0;
        M2C_FIELD(var_a2_2, s32 *, 0x5C) = 0;
        M2C_FIELD(var_a2_2, s32 *, 0x60) = 0;
        M2C_FIELD(var_a1, s32 *, 0x124) = 0;
        var_a2_2 += 0x10;
        M2C_FIELD(var_a1, s32 *, 0x158) = 0;
        var_a1 += 4;
    } while (var_v1 < 0xD);
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, s32 *, 0x200) = 0;
    M2C_FIELD(arg0, s32 *, 0x204) = 0;
    M2C_FIELD(arg0, s32 *, 0x208) = 0;
    M2C_FIELD(arg0, s32 *, 0x20C) = 0;
    M2C_FIELD(arg0, s32 *, 0x210) = 0;
    func_008C5D40(arg0);
}
