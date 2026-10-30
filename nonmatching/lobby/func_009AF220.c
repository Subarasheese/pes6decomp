/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093AF60(void *, s32);                     /* extern */
void *func_0099C7F0(M2C_UNK);                       /* extern */
extern void *D_00A7DBF8;

void func_009AF220(s32 arg0) {
    s32 var_a1;
    void *temp_v0;
    void *var_a0;
    void *var_v1;

    temp_v0 = func_0099C7F0(0x75C);
    D_00A7DBF8 = temp_v0;
    var_a1 = 0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    var_a0 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    var_v1 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
    do {
        M2C_FIELD(var_a0, s32 *, 0x34) = 0;
        var_a1 += 8;
        M2C_FIELD(var_a0, s32 *, 0x64) = 0;
        M2C_FIELD(var_v1, s32 *, 0x514) = 0;
        M2C_FIELD(var_a0, s32 *, 0x68) = 0;
        M2C_FIELD(var_a0, s32 *, 0x98) = 0;
        M2C_FIELD(var_v1, s32 *, 0x520) = 0;
        M2C_FIELD(var_a0, s32 *, 0x9C) = 0;
        M2C_FIELD(var_a0, s32 *, 0xCC) = 0;
        M2C_FIELD(var_v1, s32 *, 0x52C) = 0;
        M2C_FIELD(var_a0, s32 *, 0xD0) = 0;
        M2C_FIELD(var_a0, s32 *, 0x100) = 0;
        M2C_FIELD(var_v1, s32 *, 0x538) = 0;
        M2C_FIELD(var_a0, s32 *, 0x104) = 0;
        M2C_FIELD(var_a0, s32 *, 0x134) = 0;
        M2C_FIELD(var_v1, s32 *, 0x544) = 0;
        M2C_FIELD(var_a0, s32 *, 0x138) = 0;
        M2C_FIELD(var_a0, s32 *, 0x168) = 0;
        M2C_FIELD(var_v1, s32 *, 0x550) = 0;
        M2C_FIELD(var_a0, s32 *, 0x16C) = 0;
        M2C_FIELD(var_a0, s32 *, 0x19C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x55C) = 0;
        M2C_FIELD(var_a0, s32 *, 0x1A0) = 0;
        M2C_FIELD(var_a0, s32 *, 0x1D0) = 0;
        M2C_FIELD(var_v1, s32 *, 0x568) = 0;
        var_a0 += 0x1A0;
        var_v1 += 0x60;
    } while (var_a1 < 0x18);
    M2C_FIELD(temp_v0, s32 *, 0x654) = func_0093AF60(var_a0, var_a1);
    M2C_FIELD(temp_v0, s32 *, 0x650) = arg0;
    M2C_FIELD(temp_v0, s32 *, 0x658) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x730) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x734) = 0;
}
