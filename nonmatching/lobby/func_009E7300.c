/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009E7510(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_009E78C0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_009E7910(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_009E7960(s32, M2C_UNK, M2C_UNK);           /* extern */
extern char D_00A7DF40[];
extern char D_00A7DF42[];
extern char D_00A7DF44[];
extern char D_00A7DF4E[];

s32 func_009E7300(s32 arg0) {
    s16 var_s0;
    s16 var_s2;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;

    var_a0 = arg0;
    var_s2 = (*(s16 *)D_00A7DF40);
    var_s3 = 0;
    if (var_a0 == 1) {
        var_a0 = 1 & 1;
        (*(u8 *)D_00A7DF4E) = ((*(u8 *)D_00A7DF4E) & ~1) | var_a0;
    }
    switch (var_s2) {                               /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        var_s3 = -1;
        break;
    case 2:                                         /* switch 1 */
        var_s3 = 1;
        break;
    case 0:                                         /* switch 1 */
        temp_v0 = func_009E7510(var_a0, 1, 2);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 2:                                     /* switch 2 */
            var_s2 = 2;
            break;
        case 1:                                     /* switch 2 */
            var_s2 = 1;
            break;
        default:                                    /* switch 2 */
            var_s2 = 3;
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        var_s1 = 0;
        var_s0 = (*(s16 *)D_00A7DF42);
        temp_a0 = ((*(u8 *)D_00A7DF4E) & 1) != 0;
        switch (var_s0) {                           /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            if (func_009E7960((*(s32 *)D_00A7DF44), 1, 2) == 1) {
                var_s0 += 1;
            }
            break;
        case 1:                                     /* switch 3 */
            if (func_009E7910(temp_a0, 1, 2) == 1) {
                var_s0 += 1;
            }
            break;
        case 2:                                     /* switch 3 */
            if (func_009E78C0(temp_a0, 1, 2) == 1) {
                var_s1 = 1;
            }
            break;
        }
        (*(s16 *)D_00A7DF42) = var_s0;
        if (var_s1 != 1) {
            if (var_s1 != 0) {
                var_s2 = 3;
            }
        } else if (!((*(u8 *)D_00A7DF4E) & 1)) {
            var_s2 = 0;
        } else {
            var_s2 = 2;
        }
        break;
    }
    if (var_s2 != (*(s16 *)D_00A7DF40)) {
        (*(s16 *)D_00A7DF40) = var_s2;
        (*(s16 *)D_00A7DF42) = 0;
    }
    return var_s3;
}
