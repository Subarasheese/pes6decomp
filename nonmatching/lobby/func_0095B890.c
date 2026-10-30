/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0082B4C0(M2C_UNK);                         /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00875480(s32, s32);                        /* extern */
extern char D_008AA10E[];

s32 func_0095B890(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    var_s1 = 0;
    temp_s0 = func_0082C2A0();
    if (func_0082B4C0(3) == 1) {
        var_s1 = 1;
    }
    if (temp_s0 == 0) {
        func_0082CA50(0x7A, -1);
    }
    temp_v0 = func_0082CA10(0x7A);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        func_0082CA50(0x7A, 0);
        func_0082C690(0x88, 0);
        return 1;
    case 2:                                         /* switch 1 */
        func_0082CA50(0x7A, 0);
        func_0082C690(0x88, 0);
        return 4;
    case 1:                                         /* switch 1 */
        if (func_0082C8A0(0x88, 3) != 1) {
            if (func_00862110(temp_s0, 3) == 0) {
                func_0082CA50(0x7A, -1);
            }
            if (func_0082C5B0(0x88) >= 0x1C21) {
                func_0082CA50(0x7A, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x7A, -1);
            }
        } else {
            temp_v0_2 = func_0082C7C0(0x88);
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                func_0082C980(0x7A);
                break;
            case -800:                              /* switch 2 */
                (*(s8 *)D_008AA10E) = 0;
                func_0082C980(0x7A);
                break;
            default:                                /* switch 2 */
                *(s8 *)0x8AA10E = 0;
                func_0082CA50(0x7A, 3);
                break;
            }
        }
block_48:
        return 0;
    case 0:                                         /* switch 1 */
        if (func_00862110(temp_s0, 3) != 1) {
            func_0082CA50(0x7A, -1);
        } else {
            if (func_00875480(temp_s0 + 0x6C, arg0) != 0) {
                func_0082CA50(0x7A, -1);
            } else {
                func_0082C840(0x88);
                func_0082C690(0x88, 0);
                func_0082C980(0x7A);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x7A, -1);
            }
        }
        goto block_48;
    default:                                        /* switch 1 */
        func_0082CA50(0x7A, 0);
        func_0082C690(0x88, 0);
        return 2;
    }
}
