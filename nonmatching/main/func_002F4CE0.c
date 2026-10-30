/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002F4CE0(void *arg0, s8 arg1) {
    s8 var_a1;

    var_a1 = arg1;
    if (arg0 != NULL) {
        if (var_a1 >= 0xA) {
            var_a1 = 9;
        } else if (var_a1 < 0) {
            var_a1 = 0;
        }
        M2C_FIELD(arg0, s8 *, 9) = var_a1;
        M2C_FIELD(arg0, s8 *, 2) = 1;
    }
}
