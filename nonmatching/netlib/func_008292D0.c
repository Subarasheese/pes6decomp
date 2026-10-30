/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0082B290();                                /* extern */
s32 func_00832280(s32, s32);                        /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_00870A00(s32, s32);                        /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];
extern char D_008A4B70[];
extern char D_008A5674[];
extern char D_008A5964[];
extern char D_008A5C54[];

s32 func_008292D0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
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
    if ((arg0 < 0) || (arg0 >= 9)) {
        (*(s32 *)D_008A4B70) = -1;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        (*(s32 *)D_008A4B70) = -1;
    }
    temp_a1 = (*(s32 *)D_008A4B70);
    switch (temp_a1) {                              /* irregular */
    case 0:
        if (func_00862110((*(s32 *)D_008A4398), arg0) == 1) {
            if (func_00870A00((*(s32 *)D_008A4398) + (arg0 * 0x24), arg1) == 0) {
                (*(s32 *)D_008A5C54) = 0;
                (*(s32 *)D_008A5674) = 0;
                var_v1 = (*(s32 *)D_008A4B70) + 1;
            } else {
                var_v1 = -1;
            }
            (*(s32 *)D_008A4B70) = var_v1;
            if (var_s0 == 1) {
                (*(s32 *)D_008A4B70) = -1;
            }
        } else {
            (*(s32 *)D_008A4B70) = -1;
        }
block_64:
        return 0;
    case 1:
        if ((*(s32 *)D_008A5C54) == 1) {
            if ((*(s32 *)D_008A5964) == 0) {
                (*(s32 *)D_008A4B70) = temp_a1 + 1;
            } else {
                (*(s32 *)D_008A4B70) = temp_a1 + 1 + 1;
            }
        } else {
            if (func_00862110((*(s32 *)D_008A4398), arg0) == 0) {
                (*(s32 *)D_008A4B70) = -1;
            }
            temp_v1 = (*(s32 *)D_008A5674) + 1;
            (*(s32 *)D_008A5674) = temp_v1;
            if (temp_v1 >= 0x1C21) {
                (*(s32 *)D_008A4B70) = 3;
            }
            if (var_s0 == 1) {
                (*(s32 *)D_008A4B70) = -1;
            }
        }
        goto block_64;
    case 2:
        (*(s32 *)D_008A4B70) = 0;
        (*(s32 *)D_008A5674) = 0;
        if (arg0 != 5) {
            var_v0 = 0;
        } else {
            var_v0 = func_00832280((*(s32 *)D_008A4398), temp_a1);
        }
        if (var_v0 != 1) {
            return 4;
        }
        return 3;
    case 3:
        (*(s32 *)D_008A4B70) = 0;
        (*(s32 *)D_008A5674) = 0;
        if (arg0 != 5) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = func_00832280((*(s32 *)D_008A4398), temp_a1);
        }
        if (var_v0_2 != 1) {
            return 1;
        }
        return 3;
    default:
        (*(s32 *)D_008A4B70) = 0;
        (*(s32 *)D_008A5674) = 0;
        if (arg0 != 5) {
            var_v0_3 = 0;
        } else {
            var_v0_3 = func_00832280((*(s32 *)D_008A4398), temp_a1);
        }
        if (var_v0_3 != 1) {
            return 2;
        }
        return 3;
    }
}
