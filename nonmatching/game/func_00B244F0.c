/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0F[];

s32 func_00B244F0(void) {
    s32 temp_v0;

    temp_v0 = (*(u8 *)D_00CBBF0F) & 1;
    (*(u8 *)D_00CBBF0F) = ((*(u8 *)D_00CBBF0F) & ~1) | (0 & 1);
    return temp_v0;
}
