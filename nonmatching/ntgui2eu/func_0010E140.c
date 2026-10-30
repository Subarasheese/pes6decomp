/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0010E140(void *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if (M2C_FIELD(arg0, u16 *, 0xE) != 0) {
        var_v1 = arg0 + M2C_FIELD(arg0, u16 *, 0xC) + M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v1;
}
