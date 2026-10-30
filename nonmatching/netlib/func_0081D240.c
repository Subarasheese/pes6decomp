/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081A0B0(s32, s32);                        /* extern */
extern char D_008A3CE8[];
extern char D_008A3D18[];

s32 func_0081D240(s32 arg0) {
    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    return func_0081A0B0((*(s32 *)D_008A3CE8), arg0);
}
