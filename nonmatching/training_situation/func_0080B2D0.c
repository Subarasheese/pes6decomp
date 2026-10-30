/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591F14[];
extern char D_00CBCDE8[];

s32 func_0080B2D0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) || ((s32) (*(u16 *)D_00CBCDE8) > 0)) {
        var_v0 = 1;
    }
    if ((*(u8 *)D_00591F14) != 0) {
        var_v0 = 1;
    }
    return var_v0;
}
