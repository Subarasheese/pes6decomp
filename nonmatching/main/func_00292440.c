/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];
extern char D_005A2336[];

u8 func_00292440(s32 arg0, s32 arg1) {
    M2C_UNK *var_v1_4;
    M2C_UNK *var_v1_8;
    u8 *var_v0_2;
    u8 var_v0_3;
    u8 var_v1;
    u8 var_v1_3;
    u8 var_v1_5;
    u8 var_v1_7;
    void *var_v0;
    void *var_v1_2;
    void *var_v1_6;

    if (((void *)D_005A2330) != NULL) {
        var_v1 = (*(u8 *)D_005A2330);
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 1) {
        var_v1_2 = NULL;
    } else if ((arg0 >= 0) && (arg0 < 2)) {
        var_v1_2 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
    } else {
        var_v1_2 = NULL;
    }
    if (var_v1_2 != NULL) {
        if (arg1 >= 7) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = var_v1_2 + (arg1 * 0x16) + 2;
        }
    } else if (arg1 == 0) {
        if (((void *)D_005A2330) != NULL) {
            var_v1_3 = (*(u8 *)D_005A2330);
        } else {
            var_v1_3 = 0;
        }
        if (var_v1_3 != 2) {
            var_v1_4 = NULL;
        } else {
            var_v1_4 = ((void *)D_005A2336);
        }
        if (var_v1_4 != NULL) {
            var_v0_2 = var_v1_4 + (arg0 * 0x16) + 8;
        } else {
            goto block_46;
        }
    } else {
block_46:
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0_3 = *var_v0_2;
    } else {
        var_v0_3 = 0;
    }
    if ((var_v0_3 & 0xFF) == 2) {
        if (((void *)D_005A2330) != NULL) {
            var_v1_5 = (*(u8 *)D_005A2330);
        } else {
            var_v1_5 = 0;
        }
        if (var_v1_5 != 1) {
            var_v1_6 = NULL;
        } else if ((arg0 >= 0) && (arg0 < 2)) {
            var_v1_6 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
        } else {
            var_v1_6 = NULL;
        }
        if (var_v1_6 != NULL) {
            if (arg1 >= 7) {
                var_v0 = NULL;
            } else {
                var_v0 = var_v1_6 + (arg1 * 0x16) + 2;
            }
        } else if (arg1 == 0) {
            if (((void *)D_005A2330) != NULL) {
                var_v1_7 = (*(u8 *)D_005A2330);
            } else {
                var_v1_7 = 0;
            }
            if (var_v1_7 != 2) {
                var_v1_8 = NULL;
            } else {
                var_v1_8 = ((void *)D_005A2336);
            }
            if (var_v1_8 != NULL) {
                var_v0 = var_v1_8 + (arg0 * 0x16) + 8;
            } else {
                goto block_59;
            }
        } else {
block_59:
            var_v0 = NULL;
        }
        return M2C_FIELD(var_v0, u8 *, 1);
    }
    return 0U;
}
