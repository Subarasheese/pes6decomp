/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK, M2C_UNK, u32);       /* extern */
extern void *D_00A7DC08;

void func_009B76C0(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_v1;
    u32 temp_a2;
    void *temp_s0;

    temp_s0 = D_00A7DC08;
    temp_a2 = M2C_FIELD(temp_s0, u32 *, 0x2E0);
    var_s1 = (M2C_FIELD(temp_s0, u32 *, 0x2E0) / 100) + (temp_a2 >> 0x1F);
    if ((((s32) temp_a2 % 100) != 0) && (temp_a2 == 0)) {
        var_s1 += 1;
    }
    if (var_s1 >= 2) {
        func_0026E840(0x8400F803, 0x64, temp_a2);
    }
    switch (arg0) {                                 /* irregular */
    case 0x800:
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x2E8);
        if (temp_v1 >= var_s1) {
            M2C_FIELD(temp_s0, s32 *, 0x2E8) = 0;
            return;
        }
        var_v1 = temp_v1 + 1;
block_20:
        M2C_FIELD(temp_s0, s32 *, 0x2E8) = var_v1;
        return;
    case 0x400:
        temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x2E8);
        if (temp_v1_2 <= 0) {
            M2C_FIELD(temp_s0, s32 *, 0x2E8) = var_s1;
            return;
        }
        var_v1 = temp_v1_2 - 1;
        goto block_20;
    }
}
