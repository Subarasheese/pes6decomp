/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_009467E0(s32 arg0) {
    void *temp_v0;
    void *var_a0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a0 = M2C_FIELD(temp_v0, void **, 0x117E8);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        M2C_FIELD(var_a0, s32 *, 0xB540) = arg0;
        return 1;
    }
    return 0;
}
