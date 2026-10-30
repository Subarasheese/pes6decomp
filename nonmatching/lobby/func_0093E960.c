/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

u32 func_0093E960(void) {
    u32 *var_v0_2;
    u32 var_v0;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0_2 = M2C_FIELD(temp_v0, u32 **, 0x4BB4);
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = *var_v0_2;
        if (var_v0 >= 0x15U) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 0U;
}
