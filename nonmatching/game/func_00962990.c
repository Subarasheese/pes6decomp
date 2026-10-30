/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];

s32 func_00962990(void *arg0) {
    s32 var_v0;

    if ((M2C_FIELD(arg0, u16 *, 0x1A) == 4) && ((u32) M2C_FIELD(arg0, u32 *, 0x124) >= 0x900001U)) {
        if (((*(u8 *)D_00591E4C) != 0) || (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -256.0f) && (fabsf(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30)) < 3008.0f))) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        if ((var_v0 != 0) && ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) >= 0x6001)) {
            M2C_FIELD(arg0, u16 *, 0x1A) = 0xFFU;
            return 1;
        }
        goto block_10;
    }
block_10:
    return 0;
}
