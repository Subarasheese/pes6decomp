/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154F98(s32);
extern s32 func_00154DD8(s32);
extern int func_001157D8(int);
extern char D_0065C0D0[];

s32 func_00623D70(s32 arg0) {
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 *var_s0;
    u8 *var_s1_2;

    if (arg0 == 0) {
        var_s4 = 0;
        var_s1 = 1;
    } else {
        var_s4 = 1;
        if (arg0 != 1) {
            var_s4 = 0;
        }
        var_s1 = 2;
    }
    var_s2 = 0;
    var_s3 = 0;
    if (var_s4 < var_s1) {
        var_s0 = &(((void *)D_0065C0D0))[var_s4];
        do {
            if (*var_s0 == 0) {
                var_s3 += 1;
                if (func_00154DD8(var_s4 + 2) == 1) {
                    *var_s0 = 1;
                    var_s2 += 1;
                }
            }
            var_s4 += 1;
            var_s0 += 1;
        } while (var_s4 < var_s1);
    }
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_0065C0D0);
    do {
        if (*var_s1_2 == 1) {
            func_00154F98(var_s0_2 + 2);
            func_001157D8(var_s0_2);
        }
        var_s0_2 += 1;
        var_s1_2 += 1;
    } while (var_s0_2 < 2);
    return var_s3 != var_s2;
}
