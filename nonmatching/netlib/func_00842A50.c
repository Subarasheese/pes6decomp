/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A8385[];
extern char D_008A8386[];

s32 func_00842A50(s64 arg0) {
    (*(s8 *)D_008A8385) = (s8) arg0;
    if (((s64) (arg0 << 0x38) >> 0x38) == 1) {
        (*(s8 *)D_008A8386) = (s8) arg0;
    }
    return 1;
}
