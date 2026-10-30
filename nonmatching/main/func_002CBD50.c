/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E3BA0[];

void func_002CBD50(void *arg0) {
    M2C_UNK *var_v1;
    s32 temp_a3;
    s32 var_a1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    var_v1 = ((void *)D_005E3BA0);
    do {
        var_a1 += 7;
        M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
        M2C_FIELD(var_v1, s32 *, 4) = (s32) (M2C_FIELD(var_a0, s32 *, 4) - M2C_FIELD(var_a0, s32 *, 0));
        M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_a0, s32 *, 8);
        M2C_FIELD(var_v1, s32 *, 0xC) = (s32) (M2C_FIELD(var_a0, s32 *, 0xC) - M2C_FIELD(var_a0, s32 *, 8));
        M2C_FIELD(var_v1, s32 *, 0x10) = (s32) M2C_FIELD(var_a0, s32 *, 0x10);
        M2C_FIELD(var_v1, s32 *, 0x14) = (s32) (M2C_FIELD(var_a0, s32 *, 0x14) - M2C_FIELD(var_a0, s32 *, 0x10));
        M2C_FIELD(var_v1, s32 *, 0x18) = (s32) M2C_FIELD(var_a0, s32 *, 0x18);
        M2C_FIELD(var_v1, s32 *, 0x1C) = (s32) (M2C_FIELD(var_a0, s32 *, 0x1C) - M2C_FIELD(var_a0, s32 *, 0x18));
        M2C_FIELD(var_v1, s32 *, 0x20) = (s32) M2C_FIELD(var_a0, s32 *, 0x20);
        M2C_FIELD(var_v1, s32 *, 0x24) = (s32) (M2C_FIELD(var_a0, s32 *, 0x24) - M2C_FIELD(var_a0, s32 *, 0x20));
        M2C_FIELD(var_v1, s32 *, 0x28) = (s32) M2C_FIELD(var_a0, s32 *, 0x28);
        M2C_FIELD(var_v1, s32 *, 0x2C) = (s32) (M2C_FIELD(var_a0, s32 *, 0x2C) - M2C_FIELD(var_a0, s32 *, 0x28));
        M2C_FIELD(var_v1, s32 *, 0x30) = (s32) M2C_FIELD(var_a0, s32 *, 0x30);
        temp_a3 = M2C_FIELD(var_a0, s32 *, 0x34) - M2C_FIELD(var_a0, s32 *, 0x30);
        var_a0 += 0x38;
        M2C_FIELD(var_v1, s32 *, 0x34) = temp_a3;
        var_v1 += 0x38;
    } while (var_a1 < 0x1C);
}
