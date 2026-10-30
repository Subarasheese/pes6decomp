/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;
extern char D_00591BEC[];
extern char D_00591BF8[];
extern char D_00591C00[];
extern char D_00591C04[];
extern char D_00591DF0[];

void func_0027CE20(s32 arg0) {
    f32 var_f3;
    s32 var_a1;

    switch (arg0) {                                 /* irregular */
    case 3:
        var_f3 = 15.0f;
        break;
    case 2:
        var_f3 = 30.0f;
        break;
    case 1:
        var_f3 = 50.0f;
        break;
    default:
        var_f3 = 60.0f;
        break;
    }
    if (var_f3 >= 2.1474836e9f) {
        var_a1 = (s32) (var_f3 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a1 = (s32) var_f3;
    }
    (*(s8 *)D_00591DF0) = var_a1 & 0xFF;
    *D_003E74CC = 60.0f / var_f3;
    (*(s32 *)D_00591BF8) = 0x4A8AE4C4;
    (*(s32 *)D_00591C00) = 0x49AAE600;
    (*(s32 *)D_00591C04) = 0x43340000;
    (*(f32 *)D_00591BEC) = 256.0f * (var_f3 / 60.0f);
}
