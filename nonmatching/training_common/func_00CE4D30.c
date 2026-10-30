/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CFF3A0[];

void func_00CE4D30(s32 arg0) {
    s16 *var_a1;
    u32 var_v0;

    var_v0 = 0;
    var_a1 = ((void *)D_00CFF3A0);
loop_1:
    if (arg0 != *var_a1) {
        var_v0 += 1;
        var_a1 += 2;
        if (var_v0 >= 0x25U) {
            return;
        }
        goto loop_1;
    }
}
