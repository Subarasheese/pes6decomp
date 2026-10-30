/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
void func_009ADBF0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v1;
    void *var_a0;

    temp_s0 = arg1 * 0x34;
    temp_a0 = M2C_FIELD((temp_s0 + arg0), void **, 0x64);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD((temp_s0 + arg0), s32 *, 0x64) = 0;
    }
    var_a1 = 0;
    var_a0 = arg0 + temp_s0;
    do {
        M2C_FIELD(var_a0, s32 *, 0x38) = 0;
        var_a1 += 5;
        M2C_FIELD(var_a0, s32 *, 0x3C) = 0;
        M2C_FIELD(var_a0, s32 *, 0x40) = 0;
        M2C_FIELD(var_a0, s32 *, 0x44) = 0;
        M2C_FIELD(var_a0, s32 *, 0x48) = 0;
        var_a0 += 0x14;
    } while (var_a1 < 6);
    temp_a0_2 = temp_s0 + arg0;
    M2C_FIELD(((var_a1 * 4) + temp_a0_2), s32 *, 0x38) = 0;
    temp_a0_3 = M2C_FIELD(temp_a0_2, void **, 0x34);
    if (temp_a0_3 != NULL) {
        func_001D7F10(temp_a0_3);
        M2C_FIELD((temp_s0 + arg0), s32 *, 0x34) = 0;
    }
    temp_s0_2 = arg1 * 0xC;
    temp_v1 = temp_s0_2 + arg0;
    M2C_FIELD(temp_v1, s32 *, 0x518) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x51C) = 0;
    temp_a0_4 = M2C_FIELD(temp_v1, void **, 0x514);
    if (temp_a0_4 != NULL) {
        func_001D7F10(temp_a0_4);
        M2C_FIELD((temp_s0_2 + arg0), s32 *, 0x514) = 0;
    }
}
