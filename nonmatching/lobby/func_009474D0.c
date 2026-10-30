/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_009474D0(void) {
    s32 var_v0;
    void *temp_v0;
    void *var_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, void **, 0x117E8);
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        var_v0 = M2C_FIELD(var_v1, s32 *, 0xB540);
        if (var_v0 >= 0) {
            if (var_v0 >= 0x65) {
                var_v0 = 0x64;
            }
            return var_v0;
        }
        return 0;
    }
    return 0;
}
