/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00210DF0();                                /* extern */
s32 func_00230410();                                /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
s32 func_00AFCF40(s32);                             /* extern */
extern void *D_003E77AC;

s32 func_009653F0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = -1;
    if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {

    } else {
        var_s0 = 0x38;
        if ((func_00230410() == 1) && (func_00210DF0() == 2)) {
            var_s1 = 0;
loop_5:
            if (!(func_00AFCF40(var_s1) & 0xFFFF)) {
                var_s1 = (var_s1 + 1) & 0xFF;
                if (var_s1 < 0x10) {
                    goto loop_5;
                }
            } else {
                var_s0 = 0x35;
            }
        }
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
