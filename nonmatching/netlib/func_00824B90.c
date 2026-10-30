/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A6120[];

s32 func_00824B90(s32 arg0) {
    (*(s32 *)D_008A6120) = arg0;
    return 1;
}
