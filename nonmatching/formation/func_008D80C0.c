/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008C5D40(void *);
void func_008D80C0(void *arg0) {
    s32 var_a3;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a2;

    M2C_FIELD(arg0, s8 *, 0x20) = 0;
    var_a3 = 0;
    M2C_FIELD(arg0, s8 *, 0x21) = 0;
    var_a2 = arg0;
    M2C_FIELD(arg0, s8 *, 0x22) = 0;
    M2C_FIELD(arg0, s8 *, 0x23) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    do {
        M2C_FIELD(var_a2, s32 *, 0x70) = 0;
        temp_v1 = arg0 + var_a3;
        M2C_FIELD(var_a2, s32 *, 0x9C) = 0;
        var_a3 += 5;
        M2C_FIELD(var_a2, s32 *, 0xC8) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x24) = 0xFF;
        M2C_FIELD(var_a2, s32 *, 0x74) = 0;
        M2C_FIELD(var_a2, s32 *, 0xA0) = 0;
        M2C_FIELD(var_a2, s32 *, 0xCC) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x25) = 0xFF;
        M2C_FIELD(var_a2, s32 *, 0x78) = 0;
        M2C_FIELD(var_a2, s32 *, 0xA4) = 0;
        M2C_FIELD(var_a2, s32 *, 0xD0) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x26) = 0xFF;
        M2C_FIELD(var_a2, s32 *, 0x7C) = 0;
        M2C_FIELD(var_a2, s32 *, 0xA8) = 0;
        M2C_FIELD(var_a2, s32 *, 0xD4) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x27) = 0xFF;
        M2C_FIELD(var_a2, s32 *, 0x80) = 0;
        M2C_FIELD(var_a2, s32 *, 0xAC) = 0;
        M2C_FIELD(var_a2, s32 *, 0xD8) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x28) = 0xFF;
        var_a2 += 0x14;
    } while (var_a3 < 6);
    temp_v1_2 = (var_a3 * 4) + arg0;
    M2C_FIELD(temp_v1_2, s32 *, 0x70) = 0;
    M2C_FIELD(temp_v1_2, s32 *, 0x9C) = 0;
    M2C_FIELD(temp_v1_2, s32 *, 0xC8) = 0;
    M2C_FIELD((var_a3 + arg0), s8 *, 0x24) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    func_008C5D40(arg0);
}
