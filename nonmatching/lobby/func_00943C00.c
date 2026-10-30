/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_00943C00(void) {
    s32 var_v0;
    void *temp_v0;
    void *var_v0_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0_2 = M2C_FIELD(temp_v0, void **, 0x117E4);
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = M2C_FIELD(var_v0_2, s32 *, 0x1770);
        if (var_v0 >= 0) {
            if (var_v0 >= 0x14) {
                var_v0 = 0x14;
            }
            return var_v0;
        }
        return 0;
    }
    return 0;
}
