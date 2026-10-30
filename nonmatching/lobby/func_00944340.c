/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */

s32 func_00944340(void) {
    s32 temp_v0;
    s32 var_v0;
    void *var_v0_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_v0_2 = temp_v0 + 0x10C9C;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = M2C_FIELD(var_v0_2, s32 *, 0x8C0);
        if (var_v0 >= 0) {
            if (var_v0 >= 0x29) {
                var_v0 = 0x28;
            }
            return var_v0;
        }
        return 0;
    }
    return 0;
}
