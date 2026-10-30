/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00819870(s32, s32);                    /* extern */
extern char D_008A3CE0[];
extern char D_008A3D18[];

s32 func_0081D380(s32 arg0) {
    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    func_00819870((*(s32 *)D_008A3CE0), arg0);
    return 1;
}
