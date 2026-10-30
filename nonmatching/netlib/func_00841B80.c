/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00841AE0();                              /* extern */

s8 func_00841B80(void) {
    s8 var_v0;
    void *temp_v0;

    temp_v0 = func_00841AE0();
    if (temp_v0 == NULL) {
        goto block_6;
    }
    var_v0 = M2C_FIELD(temp_v0, s8 *, 0x80);
    if ((var_v0 != 3) && (var_v0 != 2) && (var_v0 != 1) && (var_v0 != 0)) {
block_6:
        var_v0 = 4;
    }
    return var_v0;
}
