/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;

s32 func_009D8AF0(void *arg0) {
    s32 var_v0;

    if ((M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4) && (M2C_FIELD(arg0, u16 *, 0x30) == 0)) {
        if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x6000) {
            var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C);
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if (!((f32) var_v0 < 13209.0f)) {
                goto block_6;
            }
            goto block_7;
        }
block_6:
        return 1;
    }
block_7:
    return 0;
}
