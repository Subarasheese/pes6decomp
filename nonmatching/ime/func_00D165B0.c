/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0(M2C_UNK, s32 *, s32 *);           /* extern */
M2C_UNK func_00D16730(s32 *);                       /* extern */
extern char D_00D1F410[];
extern char D_00D1F430[];
extern char D_00D1F450[];
extern char D_00D1F470[];
extern char D_00D1F490[];
extern char D_00D39AB0[];

void func_00D165B0(s32 arg0) {
    s32 sp20;
    s32 sp40;
    s32 sp60;
    s32 sp80;
    s32 spA0;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 *var_a1_5;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a2_3;
    s32 *var_a2_4;
    s32 *var_a2_5;
    s32 *var_s0;
    s32 temp_v1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;

    var_a2 = ((void *)D_00D1F410);
    var_a1 = &spA0;
    var_v1 = 5;
    do {
        var_v1 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 4;
        var_a1 += 4;
    } while (var_v1 > 0);
    var_a1_2 = &sp80;
    var_a2_2 = ((void *)D_00D1F430);
    var_v1_2 = 5;
    do {
        var_v1_2 -= 1;
        *var_a1_2 = *var_a2_2;
        var_a2_2 += 4;
        var_a1_2 += 4;
    } while (var_v1_2 > 0);
    var_a1_3 = &sp60;
    var_a2_3 = ((void *)D_00D1F450);
    var_v1_3 = 5;
    do {
        var_v1_3 -= 1;
        *var_a1_3 = *var_a2_3;
        var_a2_3 += 4;
        var_a1_3 += 4;
    } while (var_v1_3 > 0);
    var_a1_4 = &sp40;
    var_a2_4 = ((void *)D_00D1F470);
    var_v1_4 = 5;
    do {
        var_v1_4 -= 1;
        *var_a1_4 = *var_a2_4;
        var_a2_4 += 4;
        var_a1_4 += 4;
    } while (var_v1_4 > 0);
    var_a1_5 = &sp20;
    var_a2_5 = ((void *)D_00D1F490);
    var_v1_5 = 5;
    do {
        var_v1_5 -= 1;
        *var_a1_5 = *var_a2_5;
        var_a2_5 += 4;
        var_a1_5 += 4;
    } while (var_v1_5 > 0);
    temp_v1 = (arg0 >> 3) & 3;
    switch (temp_v1) {                              /* irregular */
    case 3:
        var_s0 = &sp60;
        break;
    case 1:
        var_s0 = &sp80;
        if ((*(s32 *)D_00D39AB0) != 0) {
            var_s0 = &sp40;
        }
        break;
    case 2:
        var_s0 = &sp60;
        break;
    default:
        var_s0 = &spA0;
        if (func_001C80F0(0xD39640, var_a1_5, var_a2_5) == 0) {
            var_s0 = &sp20;
        }
        break;
    }
    func_00D16730(var_s0);
}
