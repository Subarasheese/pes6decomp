/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081B9C0(s32);                             /* extern */
extern char D_008A3CF0[];
extern char D_008A3D18[];

s32 func_0081D140(void) {
    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    return func_0081B9C0((*(s32 *)D_008A3CF0));
}
