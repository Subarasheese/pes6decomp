/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B14FE[];

s32 func_00848500(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a2;
    u8 *var_a1;
    u8 temp_v1;

    var_a2 = 0;
    var_a1 = ((void *)D_008B14FE);
    temp_a0 = ((arg1 & 0xFF & 0x1F) | ((arg0 & 0xFF & 1) << 6)) & 0xFF;
loop_1:
    temp_v1 = *var_a1;
    if ((((s32) temp_v1 >> 7) & 1) && (temp_a0 != (temp_v1 & 0x7F))) {
        var_a2 += 1;
        var_a1 += 1;
        if (var_a2 >= 4) {
            return 0;
        }
        goto loop_1;
    }
    *var_a1 = temp_a0 | 0x80;
    return 0;
}
