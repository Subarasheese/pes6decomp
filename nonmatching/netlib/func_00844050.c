/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DC9E0(int);
extern s32 D_003EA2CC;
extern s16 D_003EA2D8;
extern char D_008B09E0[];
extern char D_008B0E20[];

s64 func_00844050(s64 arg0) {
    s16 *var_s0;
    s32 var_a0;
    s64 temp_v1;

    var_s0 = ((void *)D_008B09E0);
    var_a0 = 0;
    temp_v1 = (s64) (arg0 << 0x30) >> 0x30;
loop_1:
    if (*var_s0 != temp_v1) {
        var_a0 += 1;
        var_s0 += 0x88;
        if (var_a0 >= 8) {
            var_s0 = NULL;
        } else {
            goto loop_1;
        }
    }
    if (var_s0 == NULL) {
        return 0;
    }
    if ((*(s16 *)D_008B0E20) == temp_v1) {
        func_002DC9E0(1);
    } else {
        func_002DC9E0(0);
    }
    D_003EA2CC = M2C_FIELD(var_s0, s32 *, 8);
    D_003EA2D8 = (s16) arg0;
    return arg0;
}
