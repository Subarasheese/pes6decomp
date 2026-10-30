/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4D60(s32);
extern char D_0065EDC0[];

void func_00654B50(s32 arg0) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_0065EDC0);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_002F4D60(temp_a0);
        }
        var_s1 += 1;
        var_s0 += 0xC4;
    } while (var_s1 < 2);
}
