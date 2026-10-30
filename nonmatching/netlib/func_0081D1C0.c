/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081B740(s32, s32, s32);                   /* extern */
extern char D_008A3CF0[];
extern char D_008A3D18[];

s32 func_0081D1C0(s32 arg0, s32 arg1) {
    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    return func_0081B740((*(s32 *)D_008A3CF0), arg0, arg1);
}
