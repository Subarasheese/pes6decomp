/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBCFF0(u8, u8, M2C_UNK);                 /* extern */
M2C_UNK func_00BBD840(u8);                          /* extern */
extern char D_005E220C[];
extern char D_005E24B0[];
extern char D_005E24B1[];
extern char D_005E24B3[];
extern char D_005E24B8[];
extern char D_005E24BC[];

s32 func_00BBB9F0(void) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;

    var_s0 = 0;
    switch ((*(u8 *)D_005E24B0)) {                           /* irregular */
    default:
        var_s0 = 1;
        break;
    case 1:
        if (!((*(f32 *)D_005E24BC) < (*(f32 *)D_005E24B8))) {
            var_s0 = 1;
        }
        break;
    case 2:
        func_00BBD840((*(u8 *)D_005E24B0));
        if (((*(f32 *)D_005E24BC) < (*(f32 *)D_005E24B8)) && (func_00BBCFF0((*(u8 *)D_005E24B1), (*(u8 *)D_005E24B3), 1) != 0)) {
            var_v0 = 1;
            if (!((*(f32 *)D_005E220C) < 896.0f)) {
                var_v0 = 0;
            }
            if ((var_v0 ^ 1) == 0) {
                goto block_13;
            }
        } else {
block_13:
block_22:
            var_s0 = 1;
        }
        break;
    case 3:
        if ((*(f32 *)D_005E24BC) < (*(f32 *)D_005E24B8)) {
            var_v0_2 = 1;
            if (!((*(f32 *)D_005E220C) < 896.0f)) {
                var_v0_2 = 0;
            }
            if ((var_v0_2 ^ 1) == 0) {
                goto block_18;
            }
        } else {
block_18:
            goto block_22;
        }
        break;
    case 4:
        if (!((*(f32 *)D_005E24BC) < (*(f32 *)D_005E24B8))) {
            goto block_22;
        }
        break;
    case 5:
        if ((*(f32 *)D_005E24B8) <= (*(f32 *)D_005E24BC)) {
            goto block_22;
        }
        break;
    }
    return var_s0;
}
