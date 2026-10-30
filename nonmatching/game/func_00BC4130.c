/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00292B10(void);
s64 func_002928B0(M2C_UNK);                         /* extern */
s32 func_00292A30();                                /* extern */
s32 func_00292AA0();                                /* extern */
s64 func_002BE490(M2C_UNK, M2C_UNK);                /* extern */
extern char D_00591BBD[];
extern char D_00591BBE[];

s32 func_00BC4130(void) {
    s32 temp_s3;
    s32 temp_v0;
    s32 var_v0;
    s64 temp_s0;
    s64 temp_s1;
    s64 temp_s2;
    s64 temp_v0_2;
    s64 var_s5;
    s64 var_v1;
    u8 temp_s4;

    temp_s4 = func_00292B10();
    temp_s3 = func_00292AA0();
    temp_v0 = func_00292A30();
    if ((temp_s4 != 0) && (temp_s3 != 0) && (temp_v0 != 0)) {
        temp_s2 = (s64) (func_002928B0(0) << 0x30) >> 0x30;
        temp_s1 = (s64) (func_002BE490(0, 0) << 0x30) >> 0x30;
        temp_s0 = (s64) (func_002928B0(1) << 0x30) >> 0x30;
        var_s5 = temp_s2 + temp_s1;
        temp_v0_2 = (s64) (func_002BE490(1, 0) << 0x30) >> 0x30;
        var_v1 = temp_s0 + temp_v0_2;
        if (var_s5 == var_v1) {
            var_s5 = temp_s1 + (temp_s2 * 2);
            var_v1 = temp_s0 + (temp_v0_2 * 2);
        }
    } else {
        var_s5 = (s64) (func_002BE490(0, 1) << 0x30) >> 0x30;
        var_v1 = (s64) (func_002BE490(1, 1) << 0x30) >> 0x30;
    }
    if ((temp_s4 != 0) && (temp_s3 == 0)) {
        var_v0 = 5;
    } else if (var_s5 != var_v1) {
        var_v0 = 5;
    } else if ((*(u8 *)D_00591BBD) != 0) {
        var_v0 = 2;
    } else if ((*(u8 *)D_00591BBE) == 0) {
        var_v0 = 5;
    } else {
        var_v0 = 4;
    }
    return var_v0;
}
