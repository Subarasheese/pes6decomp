/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE8D[];

u64 func_00B25BA0(void) {
    u64 temp_v0;

    temp_v0 = (u64) ((s64) (*(u8 *)D_00CBBE8D) << 0x3D) >> 0x3F;
    (*(u8 *)D_00CBBE8D) = ((*(u8 *)D_00CBBE8D) & ~4) | ((0 & 1) * 4);
    return temp_v0;
}
