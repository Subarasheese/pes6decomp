/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
M2C_UNK func_001C4730(s8 *, s8 *, M2C_UNK);         /* extern */
M2C_UNK func_001E8200(M2C_UNK, s8 *, M2C_UNK, s8 *, s32, s16 *, s16 *); /* extern */
M2C_UNK func_001E8350(s32, M2C_UNK, s16 *, s8 *, s8 *); /* extern */
s8 *func_002F7F80(s32);                             /* extern */
s8 *func_00B94840(s32);                             /* extern */
extern s16 D_003E7D64;
extern s16 D_003E7D66;
extern s16 D_003E7D68;
extern s16 D_003E7D6A;
extern char D_00CB5050[];
extern char D_00CB52B0[];
extern char D_00CB52B2[];
extern char D_00CB52B4[];
extern char D_00CB52B6[];

void func_00B98E70(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    s8 sp50;
    s8 spD0;
    s16 sp2D0;
    s16 sp2D2;
    s16 sp2D4;
    s16 sp2D6;
    s16 sp2D8;
    s16 sp2DA;
    s16 sp2DC;
    s16 sp2DE;
    s32 var_v0;
    s32 var_v1;
    s8 *var_a0;
    s8 *var_s1;
    s8 *var_v0_2;
    s8 *var_v1_2;

    sp2D0 = (*(s16 *)D_00CB52B0);
    var_a0 = &spD0;
    sp2D2 = (*(s16 *)D_00CB52B2);
    var_v1 = 0x200;
    sp2D4 = (*(s16 *)D_00CB52B4);
    sp2DC = D_003E7D64;
    sp2DE = D_003E7D66;
    sp2D6 = (*(s16 *)D_00CB52B6);
    sp2D8 = D_003E7D68;
    sp2DA = D_003E7D6A;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    var_v1_2 = &sp50;
    var_v0 = 0x80;
    if (var_v1_2 != NULL) {
        do {
            *var_v1_2 = 0;
            var_v0 -= 1;
            var_v1_2 += 1;
        } while (var_v0 != 0);
    }
    if (func_001E6E10(arg0) == NULL) {
        if (arg2 != 0) {
            var_v0_2 = func_002F7F80(arg1);
        } else {
            var_v0_2 = func_00B94840(arg1);
        }
        var_s1 = var_v0_2;
        if (*var_v0_2 == 0) {
            var_s1 = ((void *)D_00CB5050);
        }
        func_001C4730(&spD0, var_s1 + 0x60, 0x200);
        func_001C4730(&sp50, var_s1 + 0x20, 0x80);
        if (arg3 >= 2U) {
            func_001E8200(1, &spD0, 2, &sp50, arg0, &sp2DC, &sp2D8);
        } else {
            func_001E8350(arg0, 1, &sp2D0, &spD0, &sp50);
        }
    }
}
