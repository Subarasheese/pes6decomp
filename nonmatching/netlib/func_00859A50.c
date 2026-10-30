/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B2310[];

s32 func_00859A50(s32 arg0) {
    (*(s32 *)D_008B2310) = arg0 & 7;
    return 0;
}
