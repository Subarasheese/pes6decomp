/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0011E180(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(arg0, s32 *, 0x370) = 0;
    do {
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        var_v0 = M2C_FIELD(var_v0, void **, 0xC);
    } while (var_v0 != NULL);
}
