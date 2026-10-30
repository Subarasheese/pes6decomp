/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D395A5[];

s32 func_00D15630(s32 arg0) {
    (*(u8 *)D_00D395A5) = ((*(u8 *)D_00D395A5) & ~1) | (arg0 & 1);
    return 0;
}
