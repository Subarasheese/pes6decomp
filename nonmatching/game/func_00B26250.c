/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE88[];

s32 func_00B26250(void) {
    s32 temp_v0;

    temp_v0 = (*(u8 *)D_00CBBE88) & 1;
    (*(u8 *)D_00CBBE88) = ((*(u8 *)D_00CBBE88) & ~1) | (0 & 1);
    return temp_v0;
}
