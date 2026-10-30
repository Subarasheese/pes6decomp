/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001CDA50(M2C_UNK);                         /* extern */
s32 func_0082B290();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_00872800(s32, s32);                        /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];
extern char D_008A4988[];
extern char D_008A5438[];
extern char D_008A5A18[];

s32 func_0082A840(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_v1;

    var_s0 = 0;
    temp_v0 = func_0082B290();
    if (temp_v0 == -0x96) {
        var_a1 = 1;
    } else if ((*(s32 *)D_008A4398) == 0) {
        var_a1 = 1;
    } else {
        var_a1 = 1;
        if ((*(s8 *)D_008A43B0) == 1) {

        } else if ((temp_v0 != -0x3E) && (temp_v0 != -0x49)) {
            if (func_00862110((*(s32 *)D_008A4398), arg0) == 0) {
                var_a1 = 1;
            } else {
                var_a1 = 0;
            }
        }
    }
    if (var_a1 == 1) {
        var_s0 = 1;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        (*(s32 *)D_008A4988) = -1;
    }
    switch ((*(s32 *)D_008A4988)) {                           /* irregular */
    case 0:
        if (func_00862110((*(s32 *)D_008A4398), arg0) == 1) {
            if (func_00872800((*(s32 *)D_008A4398) + (arg0 * 0x24), func_001CDA50(1) & 0xFF) == 0) {
                (*(s32 *)D_008A5A18) = 0;
                (*(s32 *)D_008A5438) = 0;
                var_v1 = (*(s32 *)D_008A4988) + 1;
            } else {
                var_v1 = -1;
            }
            (*(s32 *)D_008A4988) = var_v1;
            if (var_s0 == 1) {
                (*(s32 *)D_008A4988) = -1;
            }
        } else {
            (*(s32 *)D_008A4988) = -1;
        }
block_38:
        return 0;
    case 1:
        if ((*(s32 *)D_008A5A18) == 1) {
            (*(s32 *)D_008A4988) += 1;
        } else {
            if (func_00862110((*(s32 *)D_008A4398), arg0) == 0) {
                (*(s32 *)D_008A4988) = -1;
            }
            temp_v1 = (*(s32 *)D_008A5438) + 1;
            (*(s32 *)D_008A5438) = temp_v1;
            if (temp_v1 >= 0x1C21) {
                (*(s32 *)D_008A4988) = 3;
            }
            if (var_s0 == 1) {
                (*(s32 *)D_008A4988) = -1;
            }
        }
        goto block_38;
    case 2:
        (*(s32 *)D_008A4988) = 0;
        (*(s32 *)D_008A5438) = 0;
        return 4;
    case 3:
        (*(s32 *)D_008A4988) = 0;
        (*(s32 *)D_008A5438) = 0;
        return 1;
    default:
        (*(s32 *)D_008A4988) = 0;
        (*(s32 *)D_008A5438) = 0;
        return 2;
    }
}
