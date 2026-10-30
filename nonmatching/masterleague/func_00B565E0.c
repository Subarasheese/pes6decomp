/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00994760();                                /* extern */

void func_00B565E0(s8 arg0) {
    s32 temp_v0;
    void *var_v1;

    temp_v0 = func_00994760();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0x61AC4;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        M2C_FIELD(var_v1, s8 *, 0x21) = arg0;
    }
}
