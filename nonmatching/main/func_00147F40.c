/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00148690(s8 *);                        /* extern */

void func_00147F40(void) {
    s8 sp1C;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 2;
    var_v1 = &sp1C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_00148690(&sp1C);
}
