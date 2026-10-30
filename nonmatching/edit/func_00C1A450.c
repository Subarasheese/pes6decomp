/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
extern char D_00CF2460[];
extern char D_00CF2744[];
extern char D_00CF2748[];

s32 func_00C1A450(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    var_s4 = arg0 - 1;
    var_s3 = arg1 - 1;
    var_s2 = (*(s32 *)D_00CF2744);
    var_s1 = (*(s32 *)D_00CF2748);
    if (func_00BCF3A0(4) == 1) {
        temp_v0 = var_s1 - 1;
        if (var_s3 < temp_v0) {
            var_s3 = 0;
        } else if (temp_v0 >= 0) {
            var_s3 = temp_v0;
        }
        goto block_33;
    }
    if (func_00BCF3A0(1) != 1) {
        if (func_00BCF3A0(0x20) != 1) {
            if (func_00BCF3A0(8) == 1) {
                var_v0 = var_s1 + 1;
                if (var_s3 < var_v0) {

                } else {
                    if (var_v0 < 0) {
                        var_v0 = 0;
                    }
                    var_s3 = var_v0;
                }
                goto block_33;
            }
        } else {
            temp_v0_2 = var_s1 + 1;
            if (var_s3 < temp_v0_2) {
                var_s3 = 0;
            } else if (temp_v0_2 >= 0) {
                var_s3 = temp_v0_2;
            }
block_33:
            var_s1 = var_s3;
        }
    } else {
        var_v0_2 = var_s1 - 1;
        if (var_s3 < var_v0_2) {

        } else {
            if (var_v0_2 < 0) {
                var_v0_2 = 0;
            }
            var_s3 = var_v0_2;
        }
        var_s1 = var_s3;
    }
    if (func_00BCF3A0(0x40) != 1) {
        if (func_00BCF3A0(0x80) != 1) {
            if (func_00BCF3A0(0x200) != 1) {
                if (func_00BCF3A0(0x400) == 1) {
                    var_v0_3 = var_s2 + 1;
                    if (var_s4 < var_v0_3) {

                    } else {
                        if (var_v0_3 < 0) {
                            var_v0_3 = 0;
                        }
                        var_s4 = var_v0_3;
                    }
                    goto block_69;
                }
            } else {
                temp_v0_3 = var_s2 + 1;
                if (var_s4 < temp_v0_3) {
                    var_s4 = 0;
                } else if (temp_v0_3 >= 0) {
                    var_s4 = temp_v0_3;
                }
                goto block_69;
            }
        } else {
            var_v0_4 = var_s2 - 1;
            if (var_s4 < var_v0_4) {

            } else {
                if (var_v0_4 < 0) {
                    var_v0_4 = 0;
                }
                var_s4 = var_v0_4;
            }
            var_s2 = var_s4;
        }
    } else {
        temp_v0_4 = var_s2 - 1;
        if (var_s4 < temp_v0_4) {
            var_s4 = 0;
        } else if (temp_v0_4 >= 0) {
            var_s4 = temp_v0_4;
        }
block_69:
        var_s2 = var_s4;
    }
    if (var_s2 == M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E4)) {
        if (var_s1 == M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E8)) {
            return 0;
        }
        goto block_74;
    }
block_74:
    M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E4) = var_s2;
    M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E8) = var_s1;
    func_0026E840(0x8400F802);
    if (M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E8) >= M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2EC)) {
        if (((M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2EC) + arg2) - 1) < M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E8)) {
            M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2EC) = (s32) (M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E8) - (arg2 - 1));
        }
    } else {
        M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2EC) = (s32) M2C_FIELD(((void *)D_00CF2460), s32 *, 0x2E8);
    }
    return 1;
}
