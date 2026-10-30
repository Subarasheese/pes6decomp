/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0082B290();                                /* extern */
s32 func_00832280(s32, s32);                        /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_0086AA50(s32, s32);                        /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];
extern char D_008A4A60[];
extern char D_008A5540[];
extern char D_008A5830[];
extern char D_008A5B20[];
extern char D_008A5F70[];

s32 func_00825120(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;

    var_s2 = 0;
    temp_s1 = (*(s32 *)D_008A4398);
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
        var_s2 = 1;
    }
    if ((arg0 < 0) || (arg0 >= 9)) {
        (*(s32 *)D_008A4A60) = -1;
    }
    if (temp_s1 == 0) {
        (*(s32 *)D_008A4A60) = -1;
    }
    temp_a0 = (*(s32 *)D_008A4A60);
    switch (temp_a0) {                              /* irregular */
    case 0:
        if (func_00862110(temp_s1, arg0) == 1) {
            if (func_0086AA50(temp_s1 + (arg0 * 0x24), arg1) == 0) {
                if (((void *)D_008A5F70) != NULL) {
                    M2C_FIELD(((void *)D_008A5F70), s32 *, 0x57CC) = arg1;
                    func_001C48E8(((void *)D_008A5F70) + 0x57D0, 0, 0x2C);
                }
                (*(s32 *)D_008A5B20) = 0;
                (*(s32 *)D_008A5540) = 0;
                var_v1 = (*(s32 *)D_008A4A60) + 1;
            } else {
                var_v1 = -1;
            }
            (*(s32 *)D_008A4A60) = var_v1;
            if (var_s2 == 1) {
                (*(s32 *)D_008A4A60) = -1;
            }
        } else {
            (*(s32 *)D_008A4A60) = -1;
        }
block_72:
        return 0;
    case 1:
        if ((*(s32 *)D_008A5B20) == 1) {
            if ((*(s32 *)D_008A5830) == 0) {
                if (((void *)D_008A5F70) != NULL) {
                    if ((M2C_FIELD(((void *)D_008A5F70), s32 *, 0x57CC) == M2C_FIELD(((void *)D_008A5F70), s32 *, 0x57D0)) && (M2C_FIELD(((void *)D_008A5F70), s32 *, 0x57CC) != 0)) {
                        (*(s32 *)D_008A4A60) = temp_a0 + 1;
                    } else {
                        temp_v1 = (*(s32 *)D_008A5540) + 1;
                        (*(s32 *)D_008A5540) = temp_v1;
                        if (temp_v1 >= 0x1C21) {
                            (*(s32 *)D_008A4A60) = 3;
                        }
                    }
                } else {
                    (*(s32 *)D_008A4A60) = temp_a0 + 1 + 1;
                }
            } else {
                (*(s32 *)D_008A4A60) = temp_a0 + 1 + 1;
            }
        } else {
            if (func_00862110(temp_s1, arg0) == 0) {
                (*(s32 *)D_008A4A60) = -1;
            }
            temp_v1_2 = (*(s32 *)D_008A5540) + 1;
            (*(s32 *)D_008A5540) = temp_v1_2;
            if (temp_v1_2 >= 0x1C21) {
                (*(s32 *)D_008A4A60) = 3;
            }
            if (var_s2 == 1) {
                (*(s32 *)D_008A4A60) = -1;
            }
        }
        goto block_72;
    case 2:
        (*(s32 *)D_008A4A60) = 0;
        (*(s32 *)D_008A5540) = 0;
        if (arg0 != 5) {
            var_v0 = 0;
        } else {
            var_v0 = func_00832280(temp_a0, var_a1);
        }
        if (var_v0 != 1) {
            return 4;
        }
        return 3;
    case 3:
        (*(s32 *)D_008A4A60) = 0;
        (*(s32 *)D_008A5540) = 0;
        if (arg0 != 5) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = func_00832280(temp_a0, var_a1);
        }
        if (var_v0_2 != 1) {
            return 1;
        }
        return 3;
    default:
        (*(s32 *)D_008A4A60) = 0;
        (*(s32 *)D_008A5540) = 0;
        if (arg0 != 5) {
            var_v0_3 = 0;
        } else {
            var_v0_3 = func_00832280(temp_a0, var_a1);
        }
        if (var_v0_3 != 1) {
            return 2;
        }
        return 3;
    }
}
