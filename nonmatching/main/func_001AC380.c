/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void *func_001454C0(s32);                           /* extern */
M2C_UNK func_00145590(void *);                      /* extern */

void func_001AC380(s32 arg0, s32 *arg1) {
    s32 *var_s0;
    s32 var_s2;
    void *temp_v0;

    var_s2 = 0;
    if (arg0 > 0) {
        var_s0 = arg1;
        do {
            temp_v0 = func_001454C0(*var_s0);
            if (temp_v0 != NULL) {
                func_00145590(temp_v0);
                func_00153FA0(temp_v0);
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < arg0);
    }
}
