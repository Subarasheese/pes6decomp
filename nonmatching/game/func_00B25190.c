/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEC0[];

s32 func_00B25190(void) {
    s32 temp_v0;

    temp_v0 = (*(u8 *)D_00CBBEC0) & 1;
    (*(u8 *)D_00CBBEC0) = ((*(u8 *)D_00CBBEC0) & ~1) | (0 & 1);
    return temp_v0;
}
