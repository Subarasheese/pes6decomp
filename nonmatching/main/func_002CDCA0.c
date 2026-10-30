/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0010CF90(void *, int, void *, u32, void *, u32);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern char D_003DA7D0[];
extern char D_005E3CB0[];
extern char D_005E3CE0[];
extern M2C_UNK *D_005E3CE4;

void func_002CDCA0(void) {
    M2C_UNK *temp_s2;
    M2C_UNK *temp_s2_2;
    M2C_UNK *temp_s2_3;
    M2C_UNK *var_s0;
    s32 var_s1;

    func_001C48E8(((void *)D_005E3CE0), 0, 8);
    (*(s32 *)D_005E3CE0) = 0;
    var_s0 = ((void *)D_005E3CB0);
    var_s1 = 0;
    D_005E3CE4 = ((void *)D_005E3CB0);
    do {
        (*(s32 *)D_005E3CE0) = var_s1;
        D_005E3CE4 = var_s0;
        sprintf(var_s0, ((void *)D_003DA7D0), var_s1);
        temp_s2 = D_005E3CE4;
        M2C_FIELD(temp_s2, s32 *, 8) = func_0010CF90(temp_s2, 0x4807, NULL, 0U, NULL, 0U);
        temp_s2_2 = D_005E3CE4;
        if (M2C_FIELD(temp_s2_2, s32 *, 8) == 0) {
            M2C_FIELD(temp_s2_2, s32 *, 0xC) = func_0010CF90(temp_s2_2, 0x4801, NULL, 0U, NULL, 0U);
        } else {
            M2C_FIELD(temp_s2_2, s32 *, 0xC) = 0;
        }
        temp_s2_3 = D_005E3CE4;
        if (M2C_FIELD(temp_s2_3, s32 *, 8) != 0) {
            M2C_FIELD(temp_s2_3, s32 *, 0x10) = 0;
        } else {
            M2C_FIELD(temp_s2_3, s32 *, 0x10) = func_0010CF90(temp_s2_3, 0x4802, NULL, 0U, NULL, 0U);
        }
        if (M2C_FIELD(D_005E3CE4, s32 *, 8) != 0) {
            M2C_FIELD(D_005E3CE4, s32 *, 0x14) = 0;
        } else {
            func_0010CF90(D_005E3CE4, 0x480A, NULL, 0U, D_005E3CE4 + 0x14, 4U);
        }
        var_s1 += 1;
        var_s0 += 0x18;
    } while (var_s1 < 2);
    (*(s32 *)D_005E3CE0) = 0;
    D_005E3CE4 = ((void *)D_005E3CB0);
}
