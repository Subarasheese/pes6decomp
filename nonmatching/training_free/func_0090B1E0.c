/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C26720();                                /* extern */
extern void *Pes6Ball_Current;

s32 func_0090B1E0(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    u8 temp_v0;

    if (func_00C26720() == 0) {
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x201);
        if ((s32) temp_v0 < 2) {
            return 1;
        }
        if (((s32) temp_v0 < 3) && ((arg3 & 0xFF) < 4)) {
            if (!((f32) arg2 <= 7.619544e7f)) {
                return 1;
            }
            var_v0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if (!((f32) var_v0 <= 5819.3335f)) {
                return 1;
            }
            goto block_13;
        }
        goto block_13;
    }
block_13:
    return 0;
}
