/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s8 func_009A7210(void);
extern void *Pes6Ball_Current;

s32 func_009B1FF0(void) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1474);
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    if (!((f32) var_v0 < 13465.0f)) {
        var_v0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x147C);
        if (var_v0_2 <= 0) {
            var_v0_2 = -var_v0_2;
        }
        if ((f32) var_v0_2 <= 939.0f) {
            var_v0_3 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1478);
            if (var_v0_3 <= 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 < 0x271) {
                return ~((s64) (func_009A7210() << 0x38) >> 0x38) != 0;
            }
            goto block_10;
        }
        goto block_10;
    }
block_10:
    return 0;
}
