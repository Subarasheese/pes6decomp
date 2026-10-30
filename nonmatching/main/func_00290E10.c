/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];
extern char D_005A2336[];

void func_00290E10(s32 arg0, s32 arg1, s16 arg2, s16 arg3) {
    M2C_UNK *var_a1_3;
    u8 var_a1_2;
    u8 var_a4;
    void *var_a1;
    void *var_a4_2;

    if (((void *)D_005A2330) == NULL) {
        var_a4 = 0;
    } else {
        var_a4 = (*(u8 *)D_005A2330);
    }
    if (var_a4 != 1) {
        var_a4_2 = NULL;
    } else if ((arg0 >= 0) && (arg0 < 2)) {
        var_a4_2 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
    } else {
        var_a4_2 = NULL;
    }
    if (var_a4_2 != NULL) {
        if (arg1 < 7) {
            var_a1 = var_a4_2 + (arg1 * 0x16) + 2;
        } else {
            var_a1 = NULL;
        }
    } else if (arg1 == 0) {
        if (((void *)D_005A2330) == NULL) {
            var_a1_2 = 0;
        } else {
            var_a1_2 = (*(u8 *)D_005A2330);
        }
        if (var_a1_2 == 2) {
            var_a1_3 = ((void *)D_005A2336);
        } else {
            var_a1_3 = NULL;
        }
        if (var_a1_3 != NULL) {
            var_a1 = var_a1_3 + (arg0 * 0x16) + 8;
        } else {
            goto block_25;
        }
    } else {
block_25:
        var_a1 = NULL;
    }
    if ((var_a1 != NULL) && (M2C_FIELD(var_a1, u8 *, 0) == 2)) {
        if (M2C_FIELD(var_a1, u8 *, 0xC) == 0) {
            return;
        }
        M2C_FIELD(var_a1, s16 *, 0xE) = arg2;
        M2C_FIELD(var_a1, s16 *, 0x10) = arg3;
    }
}
