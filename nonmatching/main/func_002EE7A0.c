/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A80(void);
M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */

s32 func_002EE7A0(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a0;
    u8 var_s1;
    void *temp_v0;
    void *var_s1_2;
    void *var_s1_3;

    if ((arg2 >= 0x124) && (arg2 < 0x156)) {
        var_s3 = 0;
        goto block_9;
    }
    if (arg2 < 0x156) {
        return 0;
    }
    if (arg2 < 0x1BA) {
        var_s3 = 1;
block_9:
        var_s2 = 0;
        var_s1 = 0x99;
        switch (arg2) {                             /* irregular */
        default:
            var_s1 = M2C_FIELD((arg2 - 0x124 + func_00223A80()), u8 *, 6);
            break;
        case 0x1BA:
            var_s1 = 0x97;
            break;
        case 0x1BB:
            var_s1 = 0x98;
            break;
        }
        if (var_s1 != 0x99) {
            var_s2 = 1;
            goto block_31;
        }
        temp_v0 = func_00223A80();
        var_s1 = M2C_FIELD(temp_v0, u8 *, 4);
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 5);
        temp_v1 = 0x64 - (temp_a0 + (var_s1 * 2));
        if (var_s3 == 0) {
            var_v0 = temp_v1 >> 1;
            if (temp_v1 < 0) {
                var_v0 = (s32) (temp_v1 + 1) >> 1;
            }
            if (var_v0 > 0) {

            } else {
                goto block_28;
            }
        } else if (temp_v1 > 0) {
            var_s1 = temp_a0 + 0x32;
        } else {
block_28:
            var_s1 = 0x99;
        }
        if (var_s1 == 0x99) {
            return 0;
        }
block_31:
        temp_s0 = func_00223A80();
        if (var_s3 == 0) {
            if (((s32) var_s1 >= 0) && ((s32) var_s1 < 0x32)) {
                var_s1_2 = (var_s1 * 0x1440) + func_00223A80() + 0xA4;
            } else {
                var_s1_2 = NULL;
            }
            if (var_s1_2 != NULL) {
                M2C_FIELD(var_s1_2, s8 *, 0) = 1;
                M2C_FIELD(var_s1_2, s8 *, 1) = arg3;
                M2C_FIELD(var_s1_2, s32 *, 4) = arg2;
                func_001C4730(var_s1_2 + 0x40, arg0, 0x400);
                func_001C4730(var_s1_2 + 0x440, arg1, 0x1000);
            }
            if (var_s2 == 0) {
                M2C_FIELD(temp_s0, u8 *, 4) = (u8) (M2C_FIELD(temp_s0, u8 *, 4) + 1);
            }
        } else {
            if (((s32) var_s1 >= 0x32) && ((s32) var_s1 < 0x96)) {
                temp_v0_2 = func_00223A80();
                temp_v1_2 = var_s1 - 0x32;
                var_a1 = temp_v1_2 >> 1;
                if (temp_v1_2 < 0) {
                    var_a1 = (s32) (temp_v1_2 + 1) >> 1;
                }
                temp_a0_2 = var_s1 - 0x32;
                var_v1 = temp_a0_2 & 1;
                if ((temp_a0_2 < 0) && (var_v1 != 0)) {
                    var_v1 -= 2;
                }
                var_s1_3 = (var_v1 * 0x880) + (((0x31 - var_a1) * 0x1440) + temp_v0_2) + 0xA4;
            } else {
                var_s1_3 = NULL;
            }
            if (var_s1_3 != NULL) {
                M2C_FIELD(var_s1_3, s8 *, 0) = 1;
                M2C_FIELD(var_s1_3, s8 *, 1) = arg3;
                M2C_FIELD(var_s1_3, s32 *, 4) = arg2;
                func_001C4730(var_s1_3 + 0x40, arg0, 0x40);
                func_001C4730(var_s1_3 + 0x80, arg1, 0x800);
            }
            if (var_s2 == 0) {
                M2C_FIELD(temp_s0, u8 *, 5) = (u8) (M2C_FIELD(temp_s0, u8 *, 5) + 1);
            }
        }
        return 1;
    }
    return 0;
}
