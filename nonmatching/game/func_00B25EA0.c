/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBECC[];

u64 func_00B25EA0(void) {
    u64 temp_v0;

    temp_v0 = (u64) ((s64) (*(u8 *)D_00CBBECC) << 0x3E) >> 0x3F;
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~2) | ((0 & 1) * 2);
    return temp_v0;
}
