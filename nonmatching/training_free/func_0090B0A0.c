/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00C26720(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];

s32 func_0090B0A0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_v0;
    u8 temp_v0;

    if (((*(u8 *)D_00591E4C) == 0) && (arg5 < 0x24000)) {
        return 1;
    }
    if (func_00C26720(arg0) != 0) {
        if (arg4 >= 0x100001) {
            goto block_20;
        }
        goto block_6;
    }
block_6:
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x201);
    if ((s32) temp_v0 < 3) {
        return 1;
    }
    if (((s32) temp_v0 < 3) && ((arg6 & 0xFF) < 4)) {
        if (!((f32) arg5 <= 7.619544e7f)) {
            return 1;
        }
        var_v0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        if (!((f32) var_v0 <= 5819.3335f)) {
            return 1;
        }
        goto block_18;
    }
block_18:
block_20:
    return 0;
}
