/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE4D0(s32);
s32 func_001B68B0();                                /* extern */
M2C_UNK func_008BEF00();                            /* extern */
M2C_UNK func_008BF410();                            /* extern */
s32 func_008BF500();                                /* extern */
s32 func_008BF5E0();                                /* extern */
M2C_UNK func_008BF6B0();                            /* extern */
M2C_UNK func_008C05B0(M2C_UNK *, M2C_UNK *);        /* extern */
extern s32 D_003EA448;
extern char D_0053C300[];
extern char D_008D9C90[];
extern char D_008E49B0[];

s8 func_008BFA40(void) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    switch (D_003EA448) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        if ((func_001BE4D0(0) == 1) && (var_v1 = 1, (func_001B68B0() == 1))) {

        } else {
            var_v1 = 0;
        }
        if (var_v1 != 0) {
            D_003EA448 += 1;
        }
block_27:
    default:                                        /* switch 1 */
        return 0;
    case 0:                                         /* switch 1 */
        func_008BF410();
        func_008BEF00();
        func_008C05B0(((void *)D_008D9C90), ((void *)D_008E49B0));
        func_008BF6B0();
        D_003EA448 += 1;
        goto block_27;
    case 2:                                         /* switch 1 */
        temp_v0 = func_008BF5E0();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            M2C_FIELD(((void *)D_0053C300), s8 *, 9) = 1;
            var_v0 = D_003EA448 + 1;
block_23:
            D_003EA448 = var_v0;
            break;
        case 2:                                     /* switch 2 */
            var_v0 = 3;
            M2C_FIELD(((void *)D_0053C300), s8 *, 9) = 2;
            goto block_23;
        }
        func_008BF6B0();
        goto block_27;
    case 3:                                         /* switch 1 */
        if (func_008BF500() != 0) {
            D_003EA448 = 0;
            return M2C_FIELD(((void *)D_0053C300), s8 *, 9);
        }
        goto block_27;
    }
}
