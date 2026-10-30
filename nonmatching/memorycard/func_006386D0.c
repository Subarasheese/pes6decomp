/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern s16 D_003EA16C;
extern s16 D_003EA16E;

s32 func_006386D0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = 0;
    switch (arg1) {                                 /* irregular */
    case 7:
        /* fallthrough */
    case 5:
        if ((M2C_FIELD(arg0, s16 *, 0) == 0) && (M2C_FIELD(arg0, s16 *, 2) == 0)) {
            var_v0 = 1;
        }
        break;
    case 8:
        /* fallthrough */
    case 6:
        if ((M2C_FIELD(arg0, s16 *, 0) == 1) && (M2C_FIELD(arg0, s16 *, 2) == 0)) {
            var_v0 = 1;
        }
        break;
    default:
        if ((u32) (arg1 - 3) < 2U) {
        case 1:
            if ((M2C_FIELD(arg0, s16 *, 0) == D_003EA16C) && (M2C_FIELD(arg0, s16 *, 2) == D_003EA16E)) {
                var_v0 = 1;
            }
        } else if (arg1 != 0) {
            if (M2C_FIELD(arg0, s16 *, 0) != -1) {
                if (M2C_FIELD(arg0, s16 *, 2) != -1) {
                    var_v0 = 1;
                } else {
                    goto block_31;
                }
            } else {
                goto block_31;
            }
        } else if (M2C_FIELD(arg0, s16 *, 0) != -1) {
            if (M2C_FIELD(arg0, s16 *, 2) != -1) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
        } else {
block_31:
            var_v0 = 0;
        }
        break;
    }
    if (((arg2 == 0) && (M2C_FIELD(arg0, s16 *, 0) == 0) && (M2C_FIELD(arg0, s16 *, 2) != 0)) || ((arg3 == 0) && (M2C_FIELD(arg0, s16 *, 0) == 1) && (M2C_FIELD(arg0, s16 *, 2) != 0))) {
        var_v0 = 0;
    }
    return var_v0;
}
