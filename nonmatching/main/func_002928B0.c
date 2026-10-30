/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];
extern char D_005A2336[];

s16 func_002928B0(s32 arg0) {
    u8 *var_v0;
    u8 *var_v0_3;
    u8 *var_v0_6;
    u8 *var_v1;
    u8 var_v0_2;
    u8 var_v0_4;
    u8 var_v0_5;
    u8 var_v1_2;
    u8 var_v1_3;
    u8 var_v1_4;
    u8 var_v1_5;

    if (((void *)D_005A2330) != NULL) {
        var_v1_2 = (*(u8 *)D_005A2330);
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 != 2) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_005A2336);
    }
    if (var_v0 != NULL) {
        var_v0_2 = *var_v0;
    } else {
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        if (((void *)D_005A2330) != NULL) {
            var_v1_3 = (*(u8 *)D_005A2330);
        } else {
            var_v1_3 = 0;
        }
        if (var_v1_3 != 2) {
            var_v0_3 = NULL;
        } else {
            var_v0_3 = ((void *)D_005A2336);
        }
        if (var_v0_3 != NULL) {
            var_v0_4 = *var_v0_3;
        } else {
            var_v0_4 = 0;
        }
        if (var_v0_4 == 0) {
            var_v0_5 = 0;
        } else {
            if (((void *)D_005A2330) != NULL) {
                var_v1_4 = (*(u8 *)D_005A2330);
            } else {
                var_v1_4 = 0;
            }
            if (var_v1_4 != 2) {
                var_v0_6 = NULL;
            } else {
                var_v0_6 = ((void *)D_005A2336);
            }
            var_v0_5 = M2C_FIELD(var_v0_6, u8 *, 1);
        }
        if ((var_v0_5 != 0) && (arg0 >= 0) && (arg0 < 2)) {
            if (((void *)D_005A2330) != NULL) {
                var_v1_5 = (*(u8 *)D_005A2330);
            } else {
                var_v1_5 = 0;
            }
            if (var_v1_5 != 2) {
                var_v1 = NULL;
            } else {
                var_v1 = ((void *)D_005A2336);
            }
            return M2C_FIELD(((arg0 * 2) + var_v1), s16 *, 2);
        }
        goto block_48;
    }
block_48:
    return 0;
}
