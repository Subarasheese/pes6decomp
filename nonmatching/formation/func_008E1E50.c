/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008C5D40(void *);
void func_008E1E50(void *arg0) {
    s32 var_a3;
    void *temp_a1;
    void *var_a2;

    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    var_a3 = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    var_a2 = arg0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    do {
        temp_a1 = arg0 + var_a3;
        M2C_FIELD(temp_a1, s8 *, 0x20) = 1;
        var_a3 += 8;
        M2C_FIELD(var_a2, s32 *, 0x40) = 0;
        M2C_FIELD(var_a2, s32 *, 0x84) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x21) = 1;
        M2C_FIELD(var_a2, s32 *, 0x44) = 0;
        M2C_FIELD(var_a2, s32 *, 0x88) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x22) = 1;
        M2C_FIELD(var_a2, s32 *, 0x48) = 0;
        M2C_FIELD(var_a2, s32 *, 0x8C) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x23) = 1;
        M2C_FIELD(var_a2, s32 *, 0x4C) = 0;
        M2C_FIELD(var_a2, s32 *, 0x90) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x24) = 1;
        M2C_FIELD(var_a2, s32 *, 0x50) = 0;
        M2C_FIELD(var_a2, s32 *, 0x94) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x25) = 1;
        M2C_FIELD(var_a2, s32 *, 0x54) = 0;
        M2C_FIELD(var_a2, s32 *, 0x98) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x26) = 1;
        M2C_FIELD(var_a2, s32 *, 0x58) = 0;
        M2C_FIELD(var_a2, s32 *, 0x9C) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x27) = 1;
        M2C_FIELD(var_a2, s32 *, 0x5C) = 0;
        M2C_FIELD(var_a2, s32 *, 0xA0) = 0;
        var_a2 += 0x20;
    } while (var_a3 < 0x10);
    func_008C5D40(arg0);
}
