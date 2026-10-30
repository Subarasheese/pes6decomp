/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int atoi(void *);
s32 func_009FC260(void *arg0, void *arg1) {
    s32 var_v0;

    var_v0 = atoi(arg0);
    if (var_v0 >= 0) {
        if (var_v0 >= 0x65) {
            var_v0 = 0x64;
        }
    } else {
        var_v0 = 0;
    }
    M2C_FIELD(arg1, s32 *, 0) = var_v0;
    M2C_FIELD(arg1, s32 *, 8) = var_v0;
    return 0;
}
