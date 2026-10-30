/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A35D0[];
extern char D_008A35E0[];
extern char D_008A35E8[];

s32 func_008165B0(void) {
    (*(s32 *)D_008A35E8) = 0;
    (*(s32 *)D_008A35E0) = 0;
    (*(s32 *)D_008A35D0) = 0;
    return 1;
}
