/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
void *func_009812C0();                              /* extern */

s32 func_00980640(void) {
    void *var_v0;

    if (func_0082C2A0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = func_009812C0();
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s32 *, 0x141E4);
    }
    return 0;
}
