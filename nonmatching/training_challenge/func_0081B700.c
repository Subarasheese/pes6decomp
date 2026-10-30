/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081BD90(void *, M2C_UNK, s8 *);       /* extern */
M2C_UNK func_00CD6300(s32, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK, M2C_UNK, s8 *, s64); /* extern */
extern u8 D_003E7840;
extern char D_00828678[];
extern char D_00828680[];
extern M2C_UNK (*D_00828690)(void *, s32);
extern char D_00828694[];
extern char D_00828698[];
extern char D_0082869C[];
extern char D_008286A0[];

void func_0081B700(void *arg0, s32 arg1) {
    M2C_UNK (*sp70)(void *, s32);
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    s8 sp88;
    s8 sp90;
    u8 sp98;
    s8 sp9C;
    s32 temp_a3;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_a0;
    s8 *var_a0_2;
    s8 *var_a1;
    s8 *var_a1_2;

    var_v1 = 5;
    var_a1 = ((void *)D_00828678);
    var_a0 = &sp90;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 1;
        var_a0 += 1;
    } while (var_v1 > 0);
    var_a0_2 = &sp88;
    var_a1_2 = ((void *)D_00828680);
    var_v1_2 = 5;
    do {
        var_v1_2 -= 1;
        *var_a0_2 = *var_a1_2;
        var_a1_2 += 1;
        var_a0_2 += 1;
    } while (var_v1_2 > 0);
    func_0081BD90(arg0, 1, &sp88);
    var_s2 = 0;
    sp9C = 0;
    sp98 = D_003E7840;
    if (sp90 > 0) {
        var_s1 = 0;
        do {
            temp_a3 = M2C_FIELD(arg0, s32 *, 0x10);
            func_00CD6300(*M2C_FIELD(arg0, s32 **, 0x18) + var_s1, 0, 2, temp_a3, temp_a3 + 8, 1, 1, &sp9C, (s64) &sp98);
            var_s2 += 1;
            var_s1 += 0x130;
        } while (var_s2 < sp90);
    }
    sp70 = D_00828690;
    sp74 = (*(f32 *)D_00828694);
    sp78 = (*(f32 *)D_00828698);
    sp7C = (*(f32 *)D_0082869C);
    sp80 = (*(f32 *)D_008286A0);
    sp70(arg0, arg1);
}
