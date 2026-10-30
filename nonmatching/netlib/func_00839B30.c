/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083B380(M2C_UNK, s32, s32);               /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5F70[];
extern char D_008A5F72[];

s32 func_00839B30(s32 arg0, s32 arg1) {
    M2C_UNK var_a0;
    s16 temp_s0;

    temp_s0 = (*(s16 *)D_008A5F70);
    if (func_00D0BAF0() != 0) {
        switch (temp_s0) {                          /* switch 1; irregular */
        case 37:                                    /* switch 1 */
            var_a0 = 3;
block_26:
            return func_0083B380(var_a0, arg0, arg1);
        case 32:                                    /* switch 1 */
            var_a0 = 3;
            goto block_26;
        case 31:                                    /* switch 1 */
        case 28:                                    /* switch 1 */
            var_a0 = 3;
            goto block_26;
        case 36:                                    /* switch 1 */
            var_a0 = 3;
            goto block_26;
        case 39:                                    /* switch 1 */
        case 38:                                    /* switch 1 */
            switch ((*(s16 *)D_008A5F72)) {                   /* switch 2; irregular */
            case 9:                                 /* switch 2 */
                var_a0 = 5;
                goto block_26;
            case 8:                                 /* switch 2 */
                var_a0 = 5;
                goto block_26;
            default:                                /* switch 2 */
                return 2;
            }
            break;
        default:                                    /* switch 1 */
            return 2;
        }
    } else {
        return 2;
    }
}
