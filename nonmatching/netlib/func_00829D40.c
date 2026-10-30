/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082B290();                                /* extern */
s32 func_00832280(void *, s32);                     /* extern */
s32 func_00862110(void *, s32);                     /* extern */
s32 func_00871490(void *, s32);                     /* extern */
extern void *D_008A4398;
extern char D_008A43B0[];
extern char D_008A4B60[];
extern char D_008A5664[];
extern char D_008A5954[];
extern char D_008A5C44[];

s32 func_00829D40(s32 arg0) {
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
    } else if (D_008A4398 == NULL) {
        var_a1 = 1;
    } else {
        var_a1 = 1;
        if ((*(s8 *)D_008A43B0) == 1) {

        } else if ((temp_v0 != -0x3E) && (temp_v0 != -0x49)) {
            if (func_00862110(D_008A4398, arg0) == 0) {
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
        (*(s32 *)D_008A4B60) = -1;
    }
    if (D_008A4398 == NULL) {
        (*(s32 *)D_008A4B60) = -1;
    }
    temp_a1 = (*(s32 *)D_008A4B60);
    switch (temp_a1) {                              /* irregular */
    case 0:
        if (func_00862110(D_008A4398, arg0) == 1) {
            if (func_00871490(D_008A4398 + (arg0 * 0x24), M2C_FIELD(D_008A4398, s32 *, 0x49E8)) == 0) {
                (*(s32 *)D_008A5C44) = 0;
                (*(s32 *)D_008A5664) = 0;
                var_v1 = (*(s32 *)D_008A4B60) + 1;
            } else {
                var_v1 = -1;
            }
            (*(s32 *)D_008A4B60) = var_v1;
            if (var_s0 == 1) {
                (*(s32 *)D_008A4B60) = -1;
            }
        } else {
            (*(s32 *)D_008A4B60) = -1;
        }
block_64:
        return 0;
    case 1:
        if ((*(s32 *)D_008A5C44) == 1) {
            if ((*(s32 *)D_008A5954) == 0) {
                (*(s32 *)D_008A4B60) = temp_a1 + 1;
            } else {
                (*(s32 *)D_008A4B60) = temp_a1 + 1 + 1;
            }
        } else {
            if (func_00862110(D_008A4398, arg0) == 0) {
                (*(s32 *)D_008A4B60) = -1;
            }
            temp_v1 = (*(s32 *)D_008A5664) + 1;
            (*(s32 *)D_008A5664) = temp_v1;
            if (temp_v1 >= 0x1C21) {
                (*(s32 *)D_008A4B60) = 3;
            }
            if (var_s0 == 1) {
                (*(s32 *)D_008A4B60) = -1;
            }
        }
        goto block_64;
    case 2:
        (*(s32 *)D_008A4B60) = 0;
        (*(s32 *)D_008A5664) = 0;
        if (arg0 != 5) {
            var_v0 = 0;
        } else {
            var_v0 = func_00832280(D_008A4398, temp_a1);
        }
        if (var_v0 != 1) {
            return 4;
        }
        return 3;
    case 3:
        (*(s32 *)D_008A4B60) = 0;
        (*(s32 *)D_008A5664) = 0;
        if (arg0 != 5) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = func_00832280(D_008A4398, temp_a1);
        }
        if (var_v0_2 != 1) {
            return 1;
        }
        return 3;
    default:
        (*(s32 *)D_008A4B60) = 0;
        (*(s32 *)D_008A5664) = 0;
        if (arg0 != 5) {
            var_v0_3 = 0;
        } else {
            var_v0_3 = func_00832280(D_008A4398, temp_a1);
        }
        if (var_v0_3 != 1) {
            return 2;
        }
        return 3;
    }
}
