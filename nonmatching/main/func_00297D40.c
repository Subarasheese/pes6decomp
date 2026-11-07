/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E74CC;

s32 func_00297D40(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (!((f32) M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x10) * 4) + D_003E74CC), s32 *, 0x2FD8) <= (0.001f + M2C_FIELD(arg0, f32 *, 0x34)))) {
        var_v0 = 0;
    }
    return var_v0;
}
