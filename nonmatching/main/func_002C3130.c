/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E3420[];

void func_002C3130(void *arg0, s32 arg1) {
    s32 temp_f0;
    s32 var_a3;
    void *var_a0;
    void *var_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_a2 = ((void *)D_005E3420) + ((arg1 & 0xFF) * 0xC0);
    do {
        var_a3 += 1;
        M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_a2, f32 *, 0);
        M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_a2, f32 *, 4);
        M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_a2, f32 *, 8);
        M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, f32 *, 0xC);
        M2C_FIELD(var_a0, s32 *, 0x10) = (s32) M2C_FIELD(var_a2, f32 *, 0x10);
        temp_f0 = (s32) M2C_FIELD(var_a2, f32 *, 0x14);
        var_a2 += 0x18;
        M2C_FIELD(var_a0, s32 *, 0x14) = temp_f0;
        var_a0 += 0x18;
    } while (var_a3 < 8);
}
