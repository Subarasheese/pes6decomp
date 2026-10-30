/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002648F0(int);
extern void func_002648E0(int);
extern void *D_003E7E1C;

s32 func_00CDF4D0(s32 arg0) {
    s32 (*temp_v0)(s32);
    s32 var_s1;
    void *temp_s0;

    temp_s0 = D_003E7E1C;
    var_s1 = 0;
    func_002648F0(arg0);
    temp_v0 = M2C_FIELD(temp_s0, s32 (**)(s32), 0x188);
    if ((temp_v0 != NULL) && (temp_v0(arg0) != 0)) {
        var_s1 = 1;
    }
    func_002648E0(arg0);
    return var_s1;
}
