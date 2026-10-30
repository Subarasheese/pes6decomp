/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207360(int);
extern void func_001AFD70(int);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_0058E7F0[];

void func_00B793D0(void) {
    M2C_UNK *var_s1;
    s32 var_s0;
    void *temp_a0;

    var_s1 = ((void *)D_0058E7F0);
    var_s0 = 0;
    do {
        temp_a0 = M2C_FIELD(var_s1, void **, 4);
        if ((M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) && (M2C_FIELD(var_s1, f32 *, 0xE0) == 32767.0f)) {
            func_00209A00(temp_a0, 0x1BF, 0);
            func_00207360((s32) M2C_FIELD(var_s1, void **, 4));
            func_001AFD70(M2C_FIELD(M2C_FIELD(var_s1, void **, 4), s32 *, 0));
            M2C_FIELD(var_s1, f32 *, 0xE0) = (f32) M2C_FIELD(var_s1, f32 *, 0x6C);
            M2C_FIELD(var_s1, f32 *, 0xE8) = (f32) M2C_FIELD(var_s1, f32 *, 0x70);
            M2C_FIELD(var_s1, s32 *, 0x1C) = 0;
            M2C_FIELD(var_s1, s8 *, 0x16) = 7;
            M2C_FIELD(var_s1, s16 *, 0x18) = 0;
        }
        var_s0 += 1;
        var_s1 += 0x240;
    } while (var_s0 < 0x16);
}
