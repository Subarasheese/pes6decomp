/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */

s32 func_00949FB0(void) {
    s32 temp_v0;
    s32 var_v0;
    void *var_v0_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_v0_2 = temp_v0 + 0x11AAC;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = M2C_FIELD(var_v0_2, s32 *, 0x780);
        if (var_v0 >= 0) {
            if (var_v0 >= 0x1F) {
                var_v0 = 0x1E;
            }
            return var_v0;
        }
        return 0;
    }
    return 0;
}
