/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A6124[];

s32 func_00824B80(s32 arg0) {
    (*(s32 *)D_008A6124) = arg0;
    return 1;
}
