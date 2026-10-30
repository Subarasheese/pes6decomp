/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
extern char D_00520320[];

void func_0019EE90(void) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00520320);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_00145590(temp_a0);
            func_00153FA0(*var_s0);
            *var_s0 = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
}
