/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090B510(M2C_UNK);                         /* extern */
extern char D_0092F04C[];

s32 func_0090D3F0(void) {
    return ((~(*(s32 *)D_0092F04C) & func_0090B510(0)) == 0) & 0xFF;
}
