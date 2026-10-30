/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAEE8;

void func_00B692E0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a3;
    void *temp_a0_2;
    void *temp_v1;
    void *var_a2;

    temp_a0 = arg0 & 0xFF;
    if ((temp_a0 < 0x20) && (D_003EAEE8 != 0)) {
        var_a3 = 0;
        temp_a0_2 = D_003EAEE8 + (temp_a0 * 0x198) + 0xC;
        var_a2 = temp_a0_2;
        do {
            M2C_FIELD(var_a2, s32 *, 0x10) = arg1;
            var_a3 += 7;
            M2C_FIELD(var_a2, s32 *, 0x20) = arg1;
            M2C_FIELD(var_a2, s32 *, 0x30) = arg1;
            M2C_FIELD(var_a2, s32 *, 0x40) = arg1;
            M2C_FIELD(var_a2, s32 *, 0x50) = arg1;
            M2C_FIELD(var_a2, s32 *, 0x60) = arg1;
            M2C_FIELD(var_a2, s32 *, 0x70) = arg1;
            var_a2 += 0x70;
        } while (var_a3 < 0x10);
        temp_v1 = temp_a0_2 + (var_a3 * 0x10);
        M2C_FIELD(temp_v1, s32 *, 0x10) = arg1;
        M2C_FIELD(temp_v1, s32 *, 0x20) = arg1;
    }
}
