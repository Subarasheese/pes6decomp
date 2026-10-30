/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2F50[];

s32 func_002B8DB0(s32 arg0) {
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_v0;

    if ((arg0 >= 0) && (arg0 < 2)) {
        var_v0 = ((void *)D_005E2F50) + (arg0 * 7);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v1 = *var_v0 & 7;
    } else {
        var_v1 = 3;
    }
    if ((var_v1 != 1) && (var_v1 != 0)) {
        if (((void *)D_005E2F50) != NULL) {
            var_v1_2 = ((s32) (*(u8 *)D_005E2F50) >> 6) & 3;
        } else {
            var_v1_2 = 0;
        }
        if ((var_v1_2 != 3) && (var_v1_2 != 2) && (var_v1_2 != 1)) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 1;
        }
        if (var_v0_2 == 0) {
            return 0;
        }
        goto block_25;
    }
block_25:
    return 1;
}
