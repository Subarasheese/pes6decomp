/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E4C[];

s32 func_009634B0(void) {
    if (((*(u8 *)D_00591E4C) != 0) || (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -256.0f) && (fabsf(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30)) < 3008.0f))) {
        return 1;
    }
    return 0;
}
