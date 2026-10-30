/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_001E4DD0(void);
s32 func_001C83D8(s32, s32, s32);                   /* extern */
extern char D_00CBD9A0[];

s32 func_00BDE760(s32 arg0) {
    s32 *var_s0;
    s32 *var_s2;
    s32 temp_s1;
    s32 var_s3;
    s32 var_s4;

    temp_s1 = func_001E4DD0() & 0xFF;
    var_s4 = 0;
    var_s2 = ((void *)D_00CBD9A0);
loop_1:
    var_s3 = 0;
    var_s0 = var_s2;
loop_2:
    if (func_001C83D8(arg0, *var_s0, temp_s1) != 0) {
        var_s3 += 1;
        var_s0 += 4;
        if (var_s3 >= 0xF) {
            var_s4 += 1;
            var_s2 += 0x3C;
            if (var_s4 >= 5) {
                return 1;
            }
            goto loop_1;
        }
        goto loop_2;
    }
    return 0;
}
