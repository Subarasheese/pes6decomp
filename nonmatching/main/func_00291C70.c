/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00291DD0(s32, s32);
extern char D_005A2330[];
extern char D_005A2336[];

s16 func_00291C70(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_v1_5;
    u8 var_v1_2;
    u8 var_v1_4;
    void *var_v1;
    void *var_v1_3;

    if (func_00291DD0(arg0, arg1) == 0) {
        return (arg2 == 0) ? 0x7FFF : 0;
    }
    if (((void *)D_005A2330) != NULL) {
        var_v1_2 = (*(u8 *)D_005A2330);
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 != 1) {
        var_v1_3 = NULL;
    } else if ((arg0 >= 0) && (arg0 < 2)) {
        var_v1_3 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
    } else {
        var_v1_3 = NULL;
    }
    if (var_v1_3 != NULL) {
        if (arg1 >= 7) {
            var_v1 = NULL;
        } else {
            var_v1 = var_v1_3 + (arg1 * 0x16) + 2;
        }
    } else if (arg1 == 0) {
        if (((void *)D_005A2330) != NULL) {
            var_v1_4 = (*(u8 *)D_005A2330);
        } else {
            var_v1_4 = 0;
        }
        if (var_v1_4 != 2) {
            var_v1_5 = NULL;
        } else {
            var_v1_5 = ((void *)D_005A2336);
        }
        if (var_v1_5 != NULL) {
            var_v1 = var_v1_5 + (arg0 * 0x16) + 8;
        } else {
            goto block_29;
        }
    } else {
block_29:
        var_v1 = NULL;
    }
    return M2C_FIELD((((arg2 != 0) * 2) + var_v1), s16 *, 0xE);
}
