/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00591DB8[];
extern char D_00591DBC[];
extern char D_00591DCD[];
extern char D_00591E0C[];

u8 func_0099FF80(u8 *arg0, s8 *arg1) {
    f32 temp_f1;
    f32 var_f2;
    s32 temp_v0;
    s32 var_v1;
    u32 temp_a2;

    temp_v0 = (*(s32 *)D_00591DB8) - (*(s32 *)D_00591E0C);
    if (temp_v0 < 0) {
        var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f2 = (f32) temp_v0;
    }
    temp_f1 = (*(f32 *)D_00591DBC) * var_f2;
    if (temp_f1 >= 2.1474836e9f) {
        var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_v1 = (s32) temp_f1;
    }
    temp_a2 = var_v1 + 1;
    *arg0 = (u8) (temp_a2 / (u32) ((*(u8 *)D_00591BE4) * 0x3C));
    *arg1 = (s8) ((u32) (temp_a2 % (u32) ((*(u8 *)D_00591BE4) * 0x3C)) / (u8) (*(u8 *)D_00591BE4));
    if ((*(s32 *)D_00591E0C) == 0) {
        switch ((*(u8 *)D_00591DCD)) {                       /* irregular */
        case 1:
        case 0:
            *arg0 -= 1;
            *arg1 = 0x3B;
            break;
        case 3:
        case 2:
            *arg1 = 0;
            break;
        }
    }
    return (*(u8 *)D_00591DCD);
}
