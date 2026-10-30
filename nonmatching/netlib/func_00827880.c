/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_008223F0();                                /* extern */
s32 func_0082A590(M2C_UNK, s32, s32);               /* extern */
s32 func_00841100();                                /* extern */
s32 func_00841D30();                                /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00D0BCF0();                                /* extern */
s32 func_00D0BE70();                                /* extern */
extern char D_008A4398[];
extern char D_008A43D8[];
extern char D_008A5F84[];
extern char D_008AA0F0[];
extern char D_008AA0F4[];
extern char D_008AA0F8[];
extern char D_008AA0FC[];

s32 func_00827880(void) {
    M2C_UNK var_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;

    (*(s32 *)D_008AA0F0) = func_00D0BE70();
    (*(s32 *)D_008AA0F4) = func_00D0BCF0();
    if (func_00841D30() != 1) {
        var_s0 = 0;
        temp_v0 = func_00841100();
        if ((*(s32 *)D_008A4398) == 0) {
            var_v1 = 9;
        } else {
            var_v1 = (*(s32 *)D_008A5F84);
        }
        if ((temp_v0 != 0) || (((u32) (var_v1 - 5) < 2U) && (func_008223F0() == 0))) {
            var_s0 = 1;
        }
        if ((var_s0 == 1) && ((temp_s0 = (*(s32 *)D_008AA0F0), (temp_s0 != (*(s32 *)D_008AA0F8))) || ((*(s32 *)D_008AA0F4) != (*(s32 *)D_008AA0FC)))) {
            temp_v1 = (*(s32 *)D_008A43D8) + 1;
            (*(s32 *)D_008A43D8) = temp_v1;
            if (temp_v1 >= 0x3C) {
                (*(s32 *)D_008A43D8) = 0;
                temp_s2 = (*(s32 *)D_008A4398);
                temp_s1 = (*(s32 *)D_008AA0F4);
                if (temp_s2 == 0) {
                    var_v0 = 2;
                } else if (func_00862110(temp_s2, 3) != 1) {
                    if (func_00862110(temp_s2, 4) != 1) {
                        if (func_00862110(temp_s2, 5) != 1) {
                            var_v0 = 2;
                        } else {
                            var_a0 = 5;
                            goto block_26;
                        }
                    } else {
                        var_a0 = 4;
                        goto block_26;
                    }
                } else {
                    var_a0 = 3;
block_26:
                    var_v0 = func_0082A590(var_a0, temp_s1, temp_s0);
                }
                switch (var_v0) {                   /* irregular */
                case 3:
                case 2:
                case 1:
                case 0:
                    break;
                case 4:
                    (*(s32 *)D_008AA0F8) = (*(s32 *)D_008AA0F0);
                    (*(s32 *)D_008AA0FC) = (*(s32 *)D_008AA0F4);
                    break;
                }
            }
        }
    }
    return 1;
}
