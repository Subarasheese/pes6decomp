/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

s32 func_00840890(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;
    s8 temp_v1;
    void *var_a0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0xF8A4;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_a0 = NULL;
    } else if (arg0 < 0) {
        var_a0 = NULL;
    } else if (arg0 < 8) {
        var_a0 = var_v1 + (arg0 * 0xB8);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        temp_v1 = M2C_FIELD(var_a0, s8 *, 0xB5);
        switch (temp_v1) {                          /* irregular */
        case 4:
            return 0;
        default:
            return 0;
        case 3:
        case 2:
        case 1:
            return M2C_FIELD(var_a0, s32 *, 0x80);
        }
    } else {
        return 0;
    }
}
