/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BC0[];
extern char D_00591BE4[];
extern char D_00591DB8[];
extern char D_00591DBC[];
extern char D_00591DC0[];
extern char D_00591E0C[];
extern char D_00591E10[];

s32 func_009A0430(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 var_a1;
    s32 var_v0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 >= 2) {
        var_v0 = ((temp_a0 - 2) * 0xF) + 0x5A;
    } else {
        var_v0 = temp_a0 * 0x2D;
    }
    (*(s8 *)D_00591DC0) = var_v0 & 0xFF;
    if (temp_a0 < 2) {
        var_a1 = 0x96;
    } else {
        var_a1 = 0x32;
    }
    temp_a0_2 = (*(u8 *)D_00591BC0) + 1;
    temp_a2 = (*(u8 *)D_00591BE4) * (temp_a0_2 * var_a1);
    (*(s32 *)D_00591DB8) = temp_a2;
    (*(s32 *)D_00591E0C) = temp_a2;
    (*(s16 *)D_00591E10) = (*(u8 *)D_00591BE4) * 2;
    (*(f32 *)D_00591DBC) = 18.0f / (f32) temp_a0_2;
    return 0;
}
