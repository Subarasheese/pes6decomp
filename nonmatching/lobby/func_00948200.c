/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_00948200(s32 arg0) {
    void *temp_v0;
    void *var_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0 = M2C_FIELD(temp_v0, void **, 0x139A4);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        M2C_FIELD(var_v0, s32 *, 0x7B74) = arg0;
        return 1;
    }
    return 0;
}
