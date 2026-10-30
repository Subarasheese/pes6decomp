/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC8B60(s32);                             /* extern */
s32 func_00BC8BC0();                                /* extern */
M2C_UNK func_00C59460(s32);                         /* extern */
extern char D_00CCB9D0[];

void func_00C5A000(void) {
    s32 *var_s2;
    s32 temp_s0;
    s32 var_a0;
    s32 var_s1;

    var_s2 = ((void *)D_00CCB9D0);
    temp_s0 = func_00BC8BC0() & 0xFF;
    var_a0 = 0;
    var_s1 = 0;
    if (temp_s0 > 0) {
        do {
            var_a0 = var_a0 != 0;
            if (var_a0 == 0) {
                var_a0 = *var_s2 != (func_00BC8B60(var_s1 & 0xFF) & 0xFFFF);
            }
            var_s1 += 1;
            var_s2 += 0xC;
        } while (var_s1 < temp_s0);
    }
    if (var_a0 != 0) {
        func_00C59460(var_a0);
    }
}
