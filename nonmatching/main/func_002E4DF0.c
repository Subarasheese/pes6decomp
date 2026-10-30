/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E5430(s32);                         /* extern */

void func_002E4DF0(void *arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;

    if (arg0 != NULL) {
        var_s0 = 0;
        if (M2C_FIELD(arg0, s16 *, 0x1C) > 0) {
            do {
                if (arg0 == NULL) {
                    var_a0 = 0;
                } else {
                    var_a0_2 = M2C_FIELD(arg0, s16 *, 0x1C) - 1;
                    if (var_a0_2 < var_s0) {

                    } else if (var_s0 >= 0) {
                        var_a0_2 = var_s0;
                    } else {
                        var_a0_2 = 0;
                    }
                    var_a0 = M2C_FIELD(arg0, s32 *, 0x20) + (var_a0_2 * 0x50);
                }
                func_002E5430(var_a0);
                var_s0 += 1;
            } while (var_s0 < M2C_FIELD(arg0, s16 *, 0x1C));
        }
    }
}
