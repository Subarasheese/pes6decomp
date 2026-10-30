/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002EFC70(void *arg0, s8 arg1) {
    s8 var_a1;

    var_a1 = arg1;
    if (arg0 != NULL) {
        if (var_a1 >= 0xB) {
            var_a1 = 0xA;
        } else if (var_a1 < 0) {
            var_a1 = 0;
        }
        M2C_FIELD(arg0, s8 *, 4) = var_a1;
    }
}
