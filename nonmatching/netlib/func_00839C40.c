/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0083B710(s32, s64);
M2C_UNK func_0082B4C0(M2C_UNK);                     /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];
extern char D_008A5F70[];
extern char D_008A5F72[];

s32 func_00839C40(s64 arg0) {
    M2C_UNK *var_a0_2;
    s16 temp_s0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v1;
    s64 var_v0;

    temp_s0 = (*(s16 *)D_008A5F70);
    temp_s2 = func_00D0BAF0();
    func_0082B4C0(9);
    if (temp_s2 == 0) {
        return 2;
    }
    if (func_00D0BAF0() == 0) {
        var_v0 = 0;
    } else {
        if (func_00D0BAF0() == 0) {
            var_a0_2 = NULL;
        } else {
            var_a0_2 = ((void *)D_008A5CB0);
        }
        if (var_a0_2 != NULL) {
            temp_v1 = M2C_FIELD(var_a0_2, s32 *, 0x230);
            if (temp_v1 < 0) {
                var_v1 = 0;
            } else if (temp_v1 < 4) {
                if (temp_v1 != M2C_FIELD(var_a0_2, s32 *, 0x22C)) {
                    var_v1 = 0;
                } else {
                    var_v1 = 1;
                }
            } else {
                var_v1 = 0;
            }
        } else {
            var_v1 = 0;
        }
        if (var_v1 != 1) {
            var_v0 = 0;
        } else {
            var_v0 = (s64) (1 << 0x38) >> 0x38;
        }
    }
    if (((s64) (var_v0 << 0x38) >> 0x38) == 1) {
        switch (temp_s0) {                          /* switch 1; irregular */
        case 37:                                    /* switch 1 */
            var_a0 = 3;
block_52:
            return func_0083B710(var_a0, arg0);
        case 32:                                    /* switch 1 */
            var_a0 = 3;
            goto block_52;
        case 31:                                    /* switch 1 */
        case 28:                                    /* switch 1 */
            var_a0 = 3;
            goto block_52;
        case 36:                                    /* switch 1 */
            var_a0 = 3;
            goto block_52;
        case 39:                                    /* switch 1 */
        case 38:                                    /* switch 1 */
            switch ((*(s16 *)D_008A5F72)) {                   /* switch 2; irregular */
            case 9:                                 /* switch 2 */
                var_a0 = 5;
                goto block_52;
            case 8:                                 /* switch 2 */
                var_a0 = 5;
                goto block_52;
            default:                                /* switch 2 */
                return 2;
            }
            break;
        default:                                    /* switch 1 */
            return 2;
        }
    } else {
        return 4;
    }
}
