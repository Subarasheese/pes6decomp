/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A9A4B[];

s32 func_008426A0(s8 arg0) {
    (*(s8 *)D_008A9A4B) = arg0;
    return 1;
}
