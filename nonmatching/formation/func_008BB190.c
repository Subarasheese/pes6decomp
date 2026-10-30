/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA4F4;
extern char D_00591DF0[];

s32 func_008BB190(s32 arg0, s32 arg1, s32 arg2) {
    f32 var_f1;
    s32 temp_f0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;

    var_a1 = arg1;
    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_v1 = arg0 & 0xFF;
    temp_v0 = var_a1 & 0xFF;
    temp_f0 = (s32) ((f32) arg2 * (var_f1 / 60.0f));
    var_a0 = (s32) D_003EA4F4 % temp_f0;
    if (temp_v1 >= temp_v0) {
        var_a3 = temp_v1 - temp_v0;
    } else {
        var_a3 = temp_v0 - temp_v1;
        var_a1 = temp_v1;
        var_a0 = temp_f0 - var_a0;
    }
    temp_v1_2 = ((s32) (var_a0 * (var_a3 * 2)) / temp_f0) - var_a3;
    if (temp_v1_2 > 0) {
        var_v0 = (var_a1 & 0xFF) + temp_v1_2;
    } else {
        var_v0 = (var_a1 & 0xFF) - temp_v1_2;
    }
    return var_v0 & 0xFF;
}
