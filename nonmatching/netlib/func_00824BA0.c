/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A611C[];

s32 func_00824BA0(s32 arg0) {
    (*(s32 *)D_008A611C) = arg0;
    return 1;
}
