/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00520130;

void func_0018C140(s16 arg0) {
    s16 var_a0;

    var_a0 = arg0;
    if (D_00520130 != NULL) {
        M2C_FIELD(D_00520130, s32 *, 0) = 1;
        if (D_00520130 != NULL) {
            if (var_a0 == 0) {
                var_a0 = 1;
            }
            M2C_FIELD(D_00520130, s16 *, 0x10) = var_a0;
        }
    }
}
