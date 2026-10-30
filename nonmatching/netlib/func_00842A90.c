/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A64C8[];

s32 func_00842A90(s8 arg0) {
    (*(s8 *)D_008A64C8) = arg0;
    return 1;
}
