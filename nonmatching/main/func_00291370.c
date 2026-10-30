/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];
extern char D_005A2336[];

void func_00291370(s32 arg0, s32 arg1, s8 arg2) {
    M2C_UNK *var_a3_3;
    s32 temp_v1;
    u8 var_a3_2;
    u8 var_a4;
    void *var_a1;
    void *var_a3;

    temp_v1 = arg2 & 0xFF;
    if (temp_v1 < 4) {
        if (((void *)D_005A2330) == NULL) {
            var_a4 = 0;
        } else {
            var_a4 = (*(u8 *)D_005A2330);
        }
        if (var_a4 != 1) {
            var_a3 = NULL;
        } else if ((arg0 >= 0) && (arg0 < 2)) {
            var_a3 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
        } else {
            var_a3 = NULL;
        }
        if (var_a3 != NULL) {
            if (arg1 < 7) {
                var_a1 = var_a3 + (arg1 * 0x16) + 2;
            } else {
                var_a1 = NULL;
            }
        } else if (arg1 == 0) {
            if (((void *)D_005A2330) == NULL) {
                var_a3_2 = 0;
            } else {
                var_a3_2 = (*(u8 *)D_005A2330);
            }
            if (var_a3_2 == 2) {
                var_a3_3 = ((void *)D_005A2336);
            } else {
                var_a3_3 = NULL;
            }
            if (var_a3_3 != NULL) {
                var_a1 = var_a3_3 + (arg0 * 0x16) + 8;
            } else {
                goto block_25;
            }
        } else {
block_25:
            var_a1 = NULL;
        }
        if (var_a1 != NULL) {
            M2C_FIELD(var_a1, s8 *, 0) = arg2;
            if (temp_v1 == 2) {
                return;
            }
            M2C_FIELD(var_a1, s8 *, 1) = 0;
            M2C_FIELD(var_a1, s16 *, 4) = 0x7FFF;
            M2C_FIELD(var_a1, s16 *, 6) = 0;
            M2C_FIELD(var_a1, s16 *, 8) = 0x7FFF;
            M2C_FIELD(var_a1, s16 *, 0xA) = 0;
            M2C_FIELD(var_a1, s8 *, 0xC) = 0;
            M2C_FIELD(var_a1, s16 *, 0xE) = 0x7FFF;
            M2C_FIELD(var_a1, s16 *, 0x10) = 0;
            M2C_FIELD(var_a1, s16 *, 0x12) = 0x7FFF;
            M2C_FIELD(var_a1, s16 *, 0x14) = 0;
        }
    }
}
