/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */

void func_00C07C30(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    var_s3 = arg1;
    var_s2 = arg2;
    var_s1 = M2C_FIELD(arg0, s32 *, 0x2E4);
    var_s0 = M2C_FIELD(arg0, s32 *, 0x2E8);
    if (func_00BCF3A0(1) != 1) {
        if (func_00BCF3A0(8) == 1) {
            var_v0 = var_s0 + 1;
            if (var_s2 < var_v0) {

            } else {
                if (var_v0 < 0) {
                    var_v0 = 0;
                }
                var_s2 = var_v0;
            }
            var_s0 = var_s2;
        }
    } else {
        var_v0_2 = var_s0 - 1;
        if (var_s2 < var_v0_2) {

        } else {
            if (var_v0_2 < 0) {
                var_v0_2 = 0;
            }
            var_s2 = var_v0_2;
        }
        var_s0 = var_s2;
    }
    if (func_00BCF3A0(0x80) != 1) {
        if (func_00BCF3A0(0x400) == 1) {
            var_v1 = var_s1 + 1;
            if (var_s3 < var_v1) {

            } else {
                if (var_v1 < 0) {
                    var_v1 = 0;
                }
                var_s3 = var_v1;
            }
            var_s1 = var_s3;
        }
    } else {
        var_v1_2 = var_s1 - 1;
        if (var_s3 < var_v1_2) {

        } else {
            if (var_v1_2 < 0) {
                var_v1_2 = 0;
            }
            var_s3 = var_v1_2;
        }
        var_s1 = var_s3;
    }
    if ((var_s1 != M2C_FIELD(arg0, s32 *, 0x2E4)) || (var_s0 != M2C_FIELD(arg0, s32 *, 0x2E8))) {
        M2C_FIELD(arg0, s32 *, 0x2E4) = var_s1;
        M2C_FIELD(arg0, s32 *, 0x2E8) = var_s0;
        func_0026E840(0x8400F802);
    }
}
