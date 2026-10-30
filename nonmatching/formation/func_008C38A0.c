/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008C5D40(void *);
void func_008C38A0(void *arg0) {
    s32 var_a1;
    void *var_v1;

    M2C_FIELD(arg0, s16 *, 0) = 0;
    var_a1 = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    var_v1 = arg0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    do {
        M2C_FIELD(var_v1, s32 *, 0x20) = 0;
        var_a1 += 6;
        M2C_FIELD(var_v1, s32 *, 0x24) = 0;
        M2C_FIELD(var_v1, s32 *, 0x28) = 0;
        M2C_FIELD(var_v1, s32 *, 0x2C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x30) = 0;
        M2C_FIELD(var_v1, s32 *, 0x34) = 0;
        var_v1 += 0x18;
    } while (var_a1 < 0xC);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    func_008C5D40(arg0);
}
