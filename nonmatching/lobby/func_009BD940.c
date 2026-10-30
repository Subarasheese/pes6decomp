/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099E510(s32);                             /* extern */

s32 func_009BD940(void *arg0) {
    s32 var_v1;

    if (arg0 == NULL) {
        return 5;
    }
    var_v1 = 5;
    if (func_0099E510(M2C_FIELD(arg0, s32 *, 4)) != 5) {
        var_v1 = 0;
    }
    return var_v1;
}
