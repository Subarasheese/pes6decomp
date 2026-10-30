/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F3850(s32);                             /* extern */
extern char D_00CDF8F0[];
extern char D_00CDF9E4[];

s32 func_00B91100(void) {
    if (func_002F3850((*(s32 *)D_00CDF8F0)) != 2) {
        return 0;
    }
    (*(s32 *)D_00CDF9E4) |= 0x20;
    return 1;
}
