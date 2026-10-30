/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A19400(void *arg0) {
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = (s32) M2C_FIELD(arg0, f32 *, 0xE8);
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    if ((f32) var_v0 < 5160.0f) {
        var_v0_2 = (s32) M2C_FIELD(arg0, f32 *, 0xE0);
        if (var_v0_2 <= 0) {
            var_v0_2 = -var_v0_2;
        }
        if (!((f32) var_v0_2 <= 9241.0f)) {
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}
