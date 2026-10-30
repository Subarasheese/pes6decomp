/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];
extern char D_005A2336[];

void func_00291240(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_a1_3;
    u8 var_a1_2;
    u8 var_a3;
    void *var_a1;
    void *var_a3_2;

    if (((void *)D_005A2330) != NULL) {
        var_a3 = (*(u8 *)D_005A2330);
    } else {
        var_a3 = 0;
    }
    if (var_a3 != 1) {
        var_a3_2 = NULL;
    } else if ((arg0 >= 0) && (arg0 < 2)) {
        var_a3_2 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
    } else {
        var_a3_2 = NULL;
    }
    if (var_a3_2 != NULL) {
        if (arg1 >= 7) {
            var_a1 = NULL;
        } else {
            var_a1 = var_a3_2 + (arg1 * 0x16) + 2;
        }
    } else if (arg1 == 0) {
        if (((void *)D_005A2330) != NULL) {
            var_a1_2 = (*(u8 *)D_005A2330);
        } else {
            var_a1_2 = 0;
        }
        if (var_a1_2 != 2) {
            var_a1_3 = NULL;
        } else {
            var_a1_3 = ((void *)D_005A2336);
        }
        if (var_a1_3 != NULL) {
            var_a1 = var_a1_3 + (arg0 * 0x16) + 8;
        } else {
            goto block_29;
        }
    } else {
block_29:
        var_a1 = NULL;
    }
    if ((var_a1 != NULL) && (M2C_FIELD(var_a1, u8 *, 0) == 2)) {
        M2C_FIELD(var_a1, s8 *, 1) = (s8) (arg2 != 0);
    }
}
