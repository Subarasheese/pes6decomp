/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_002F3850(s32);                             /* extern */
s32 func_0081E630(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
extern char D_008A3CA0[];
extern char D_008A3CA8[];
extern char D_008A3CB8[];
extern char D_008A3CC0[];

s32 func_008188C0(s32 arg0, s32 arg1) {
    s8 sp4C;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 4;
    var_v1 = &sp4C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s1 = 0;
    var_s0 = 0;
    if ((*(s32 *)D_008A3CA8) == 1) {
        (*(s32 *)D_008A3CA0) = 4;
    }
    switch (arg1) {                                 /* irregular */
    case 0:
        if ((func_0081EC20(0x4000) != 0) || (func_0081E630(0x4000) != 0)) {
            (*(s32 *)D_008A3CA0) = 4;
            func_0026E840(0x84028400);
            var_s1 = 1;
        }
        break;
    case 2:
    case 1:
        if ((func_0081EC20(0x1000) != 0) || (func_0081E630(0x1000) != 0)) {
            (*(s32 *)D_008A3CA0) = 4;
            func_0026E840(0x84008401);
            var_s1 = 1;
        }
        break;
    default:
    case 3:
        temp_v0 = func_002F3850((*(s32 *)D_008A3CC0));
        if ((temp_v0 != 4) && (temp_v0 != 2)) {

        } else {
            var_s0 = 3;
        }
        break;
    }
    if ((var_s1 == 0) && (arg0 > 0) && (arg0 != -1)) {
        temp_a0 = (*(s32 *)D_008A3CB8) + 1;
        (*(s32 *)D_008A3CB8) = temp_a0;
        if ((arg0 * 0x3C) < temp_a0) {
            (*(s32 *)D_008A3CA0) = 4;
        }
    }
    func_002F2ED0((*(s32 *)D_008A3CC0));
    return var_s0;
}
