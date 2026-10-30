/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

u8 func_00959B10(void) {
    u8 var_s0;
    void *temp_v0;

    var_s0 = 0;
    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_s0 = M2C_FIELD(temp_v0, u8 *, 0x49E4);
    }
    return var_s0;
}
