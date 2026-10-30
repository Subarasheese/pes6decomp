/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE90[];

u64 func_00B25AA0(void) {
    u64 temp_v0;

    temp_v0 = (u64) ((s64) (*(u8 *)D_00CBBE90) << 0x3C) >> 0x3F;
    (*(u8 *)D_00CBBE90) = ((*(u8 *)D_00CBBE90) & ~8) | ((0 & 1) * 8);
    return temp_v0;
}
