/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C7F58(void *, void *, void *, s32); /* extern */

void func_002ED080(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_s0;
    s32 var_a3;
    void *temp_a0;
    void *temp_s1;
    void *var_a1;
    void *var_a2;

    var_a2 = arg2;
    temp_s0 = arg1 * 0x4A4;
    temp_s1 = var_a2;
    temp_a0 = arg0 + temp_s0;
    var_a3 = 0;
    var_a1 = temp_a0;
    do {
        var_a3 += 5;
        M2C_FIELD(var_a1, s32 *, 0x1944) = (s32) M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 0x1948) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 0x194C) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0x1950) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        M2C_FIELD(var_a1, s32 *, 0x1954) = (s32) M2C_FIELD(var_a2, s32 *, 0x10);
        var_a2 += 0x14;
        var_a1 += 0x14;
    } while (var_a3 < 0x14);
    func_001C7F58(temp_a0 + 0x19E4, temp_s1 + 0xA0, var_a2, var_a3);
    M2C_FIELD((temp_s0 + arg0), s32 *, 0x1DE4) = (s32) M2C_FIELD(temp_s1, s32 *, 0x4A0);
}
