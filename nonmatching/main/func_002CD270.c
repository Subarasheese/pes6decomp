/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B4270(s32, s32, s32);                   /* extern */
M2C_UNK func_001B42B0(s32, s32, s32);               /* extern */
M2C_UNK func_002F7D30(s32, s32, s32, s32);          /* extern */
s32 func_002F7EA0(s32, s32);                        /* extern */

void func_002CD270(s32 arg0) {
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;

    var_s2 = 0;
    do {
        var_s1 = 0;
loop_2:
        func_002F7D30(arg0, var_s2, var_s1, func_001B4270(arg0, var_s1, var_s2));
        var_s1 += 1;
        if (var_s1 < 4) {
            goto loop_2;
        }
        var_s2 += 1;
    } while (var_s2 < 9);
    var_s1_2 = 0;
    do {
        func_001B42B0(arg0, var_s1_2, func_002F7EA0(arg0, var_s1_2) & 0xFF);
        var_s1_2 += 1;
    } while (var_s1_2 < 8);
}
