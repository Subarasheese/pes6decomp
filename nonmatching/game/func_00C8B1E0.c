/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD074[];

u64 func_00C8B1E0(s32 arg0) {
    u64 temp_v0;

    temp_v0 = (u64) ((s64) (*(u8 *)D_00CCD074) << 0x3C) >> 0x3F;
    (*(u8 *)D_00CCD074) = ((*(u8 *)D_00CCD074) & ~8) | ((arg0 != 0) * 8);
    return temp_v0;
}
