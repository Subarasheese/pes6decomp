/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;

s32 func_00A10780(void) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    var_v0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C);
    if (var_v0_2 <= 0) {
        var_v0_2 = -var_v0_2;
    }
    if (var_v0_2 >= 0x3409) {
        var_v0_3 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C);
        if (var_v0_3 <= 0) {
            var_v0_3 = -var_v0_3;
        }
        if (var_v0_3 < 0x401) {
            var_v0 = 1;
            if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -592.0f) {
                var_v0 = 0;
            }
            return var_v0 ^ 1;
        }
        goto block_9;
    }
block_9:
    return 0;
}
