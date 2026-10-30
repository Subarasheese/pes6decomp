/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

void *func_00840970(s32 arg0) {
    s32 temp_v0;
    s32 var_v1_2;
    void *var_v1;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1_2 = temp_v0 + 0xF8A4;
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v1 = NULL;
    } else if (arg0 < 0) {
        var_v1 = NULL;
    } else if (arg0 < 8) {
        var_v1 = var_v1_2 + (arg0 * 0xB8);
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, u8 *, 0x4C) != 0) {
            return var_v1 + 0x4C;
        }
        return NULL;
    }
    return NULL;
}
