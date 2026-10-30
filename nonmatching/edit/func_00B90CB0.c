/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F3850(s32);                             /* extern */
extern char D_00CDF8F0[];
extern char D_00CDF9E4[];

s32 func_00B90CB0(void) {
    s32 temp_v0;

    if ((*(s32 *)D_00CDF8F0) == 0) {
        return 1;
    }
    temp_v0 = func_002F3850((*(s32 *)D_00CDF8F0));
    if ((temp_v0 != 4) && (temp_v0 != 0) && (temp_v0 != 2)) {
        return 0;
    }
    if (!(((u32) (*(u32 *)D_00CDF9E4) >> 1) & 1)) {
        if (!(((u32) (*(u32 *)D_00CDF9E4) >> 5) & 1)) {
            return (((u32) (*(u32 *)D_00CDF9E4) >> 2) & 1) == 0;
        }
        return 0;
    }
    return 0;
}
