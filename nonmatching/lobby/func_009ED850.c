/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002136B0(s32, s16);                    /* extern */
M2C_UNK func_0026E840(s32);                         /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
extern char D_00A7E004[];
extern char D_00A7E008[];
extern char D_00A7E00A[];
extern char D_00A7E00C[];
extern char D_00A7E010[];

s32 func_009ED850(void) {
    s16 var_s3;
    s16 var_v0_2;
    s16 var_v1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;

    var_s5 = 0;
    temp_s2 = func_0081EB60(0x10);
    temp_s1 = func_0081EB60(0x40);
    temp_s0 = func_0081EC20(0x4000);
    var_v0 = func_0081EC20(0x1000);
    var_s4 = -1;
    var_s3 = (*(s16 *)D_00A7E008);
    if (((u64) ((s64) (*(u8 *)D_00A7E010) << 0x3D) >> 0x3F) != 0) {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        var_s5 = 1;
        (*(s16 *)D_00A7E00A) = 1;
        var_s4 = 0x84008401;
    } else if (temp_s0 == 0) {
        if ((*(s32 *)D_00A7E004) < 3) {
            var_v0_2 = 0;
            var_v1 = (*(s32 *)D_00A7E004) - 1;
        } else {
            var_v0_2 = (*(s32 *)D_00A7E004) - 1;
            var_v1 = 0;
        }
        if (temp_s2 != 0) {
            var_s3 -= 1;
        } else if (temp_s1 != 0) {
            var_s3 += 1;
        }
        if (var_s3 >= 0) {
            if (((*(s32 *)D_00A7E004) - 1) < var_s3) {
                var_s3 = var_v1;
            }
        } else {
            var_s3 = var_v0_2;
        }
        if (var_s3 != (*(s16 *)D_00A7E008)) {
            var_s4 = 0x8400F802;
            func_002136B0((*(s32 *)D_00A7E00C), var_s3);
            (*(s16 *)D_00A7E008) = var_s3;
        }
    } else {
        var_s5 = 1;
        (*(s16 *)D_00A7E00A) = 0;
        var_s4 = 0x84028400;
    }
    if (var_s4 != -1) {
        func_0026E840(var_s4);
    }
    return var_s5;
}
