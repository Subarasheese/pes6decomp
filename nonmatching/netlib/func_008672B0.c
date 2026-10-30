/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008672B0(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s2;
    s32 var_s3;
    void *temp_s1;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0)) {
        if (*arg0 == 0x3072) {
            var_s3 = *arg1;
            func_00874470();
loop_29:
            if (var_s3 < 0x14) {
                if (func_00873EB0(arg0) != -1) {
                    temp_s1 = arg1 + (var_s3 * 0x168) + 4;
                    func_001C48E8(temp_s1, 0, 0x168);
                    func_00873F60(arg0, temp_s1);
                    var_s0 = 0;
                    do {
                        func_00873F60(arg0, temp_s1 + (var_s0 * 0x38) + 8);
                        var_s0 += 1;
                    } while (var_s0 < 4);
                    var_s0_2 = 0;
                    do {
                        func_00873EE0(arg0, temp_s1 + (var_s0_2 * 0x38) + 0xC, 0x30);
                        var_s0_2 += 1;
                    } while (var_s0_2 < 4);
                    var_s0_3 = 0;
                    do {
                        func_008740E0(arg0, temp_s1 + (var_s0_3 * 0x38) + 0x3D);
                        var_s0_3 += 1;
                    } while (var_s0_3 < 4);
                    var_s0_4 = 0;
                    do {
                        func_00874040(arg0, temp_s1 + (var_s0_4 * 2) + 0x158);
                        var_s0_4 += 1;
                    } while (var_s0_4 < 2);
                    var_s0_5 = 0;
                    do {
                        var_s2 = 0;
loop_20:
                        func_008740E0(arg0, temp_s1 + (var_s0_5 * 5) + var_s2 + 0x15C);
                        var_s2 += 1;
                        if (var_s2 < 5) {
                            goto loop_20;
                        }
                        var_s0_5 += 1;
                    } while (var_s0_5 < 2);
                    func_008740E0(arg0, temp_s1 + 4);
                    var_s0_6 = 0;
                    do {
                        func_00873F60(arg0, temp_s1 + (var_s0_6 * 0x38) + 0xE8);
                        var_s0_6 += 1;
                    } while (var_s0_6 < 2);
                    var_s0_7 = 0;
                    do {
                        func_00873EE0(arg0, temp_s1 + (var_s0_7 * 0x38) + 0xEC, 0x30);
                        var_s0_7 += 1;
                    } while (var_s0_7 < 2);
                    var_s0_8 = 0;
                    do {
                        func_008740E0(arg0, temp_s1 + (var_s0_8 * 0x38) + 0x3E);
                        var_s0_8 += 1;
                    } while (var_s0_8 < 4);
                    func_00874120(arg0, temp_s1 + 5);
                    func_00874120(arg0, temp_s1 + 6);
                    var_s3 += 1;
                    goto loop_29;
                }
            }
            func_00874460(arg0);
            *arg1 = var_s3;
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
