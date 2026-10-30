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
s32 func_008757A0(s32);                             /* extern */
extern char D_008AA10F[];
extern char D_008AA110[];

s32 func_0095C340(void) {
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
        func_0082CA50(0x77, -1);
    }
    temp_v0 = func_0082CA10(0x77);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        func_0082CA50(0x77, 0);
        func_0082C690(0x85, 0);
        return 1;
    case 2:                                         /* switch 1 */
        func_0082CA50(0x77, 0);
        func_0082C690(0x85, 0);
        return 4;
    case 1:                                         /* switch 1 */
        if (func_0082C8A0(0x85, 3) != 1) {
            if (func_00862110(temp_s0, 3) == 0) {
                func_0082CA50(0x77, -1);
            }
            if (func_0082C5B0(0x85) >= 0x1C21) {
                func_0082CA50(0x77, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x77, -1);
            }
        } else {
            temp_v0_2 = func_0082C7C0(0x85);
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                func_0082C980(0x77);
                break;
            case -800:                              /* switch 2 */
                (*(s8 *)D_008AA10F) = 0;
                (*(s32 *)D_008AA110) = 0;
                func_0082C980(0x77);
                break;
            default:                                /* switch 2 */
                *(s8 *)0x8AA10F = 0;
                (*(s32 *)D_008AA110) = 0;
                func_0082CA50(0x77, 3);
                break;
            }
        }
block_48:
        return 0;
    case 0:                                         /* switch 1 */
        if (func_00862110(temp_s0, 3) != 1) {
            func_0082CA50(0x77, -1);
        } else {
            if (func_008757A0(temp_s0 + 0x6C) != 0) {
                func_0082CA50(0x77, -1);
            } else {
                func_0082C840(0x85);
                func_0082C690(0x85, 0);
                func_0082C980(0x77);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x77, -1);
            }
        }
        goto block_48;
    default:                                        /* switch 1 */
        func_0082CA50(0x77, 0);
        func_0082C690(0x85, 0);
        return 2;
    }
}
