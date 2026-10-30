/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0021DBB0(s32);                         /* extern */
M2C_UNK func_0021DBE0(M2C_UNK);                     /* extern */
s32 func_00623880();                                /* extern */
M2C_UNK func_00623D70(s16);                         /* extern */
M2C_UNK func_00623E80(M2C_UNK);                     /* extern */
s32 func_00649E10(M2C_UNK);                         /* extern */
s32 func_00655660();                                /* extern */
M2C_UNK func_006556F0();                            /* extern */
M2C_UNK func_00655B00();                            /* extern */
extern s16 D_003E9E38;
extern s16 D_003E9E3A;
extern u8 D_003EA1B8;
extern s8 D_003EA1CC;
extern s8 D_003EA1D0;
extern s8 D_003EA1D4;

s32 func_00649CD0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EA1B8) {                           /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        temp_v0 = func_00649E10(2);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            D_003EA1B8 = 4;
            break;
        default:                                    /* switch 2 */
        case 2:                                     /* switch 2 */
            D_003EA1B8 = 4;
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        D_003EA1B8 = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        D_003E9E38 = 0;
        D_003E9E3A = 0;
        func_0021DBE0(0);
        func_0021DBB0((s32) D_003E9E38);
        D_003EA1D4 = 0;
        D_003EA1B8 = 2;
        D_003EA1D0 = 0;
        D_003EA1CC = 0;
        break;
    case 2:                                         /* switch 1 */
        if (func_00623880() == 0) {
            func_00623D70(D_003E9E38);
            D_003EA1B8 = 3;
        }
        break;
    case 4:                                         /* switch 1 */
        func_00655B00();
        func_006556F0();
        if ((func_00655660() != 0) && (func_00623880() == 0)) {
            func_00623E80(-1);
            D_003EA1B8 = 0;
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
