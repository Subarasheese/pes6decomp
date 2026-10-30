/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B33A0(s32, s32);                        /* extern */
s32 func_00AA3540(s32);                             /* extern */
extern void *Pes6Ball_Current;

s32 func_00A502C0(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;

    temp_s0 = func_009B33A0((s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
    if (func_00AA3540(arg0) >= (temp_s0 + 0x40000)) {
        var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        if ((f32) var_v0 <= 13465.0f) {
            var_v0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
            if (var_v0_2 <= 0) {
                var_v0_2 = -var_v0_2;
            }
            if ((f32) var_v0_2 <= 8729.0f) {
                if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1800) && (temp_s0 < 0x24000)) {
                    return 0;
                }
                goto block_11;
            }
            goto block_10;
        }
block_10:
        goto block_11;
    }
block_11:
    return 1;
}
