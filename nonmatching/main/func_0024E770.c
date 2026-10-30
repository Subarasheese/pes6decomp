/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0024E7F0(M2C_UNK);                         /* extern */
extern s8 D_003E7504;
extern s8 D_003E7505;

void func_0024E770(void) {
    s8 var_s0;
    s8 var_s1;

    var_s1 = func_0024E7F0(0) & 0xFF;
    var_s0 = func_0024E7F0(1) & 0xFF;
    if ((var_s1 & 0xFFFF) == 0xFF) {
        var_s1 = func_0024E7F0(1) & 0xFF;
        if (var_s1 == 0xFF) {
            var_s1 = 0;
        }
    }
    if ((var_s0 & 0xFFFF) == 0xFF) {
        var_s0 = var_s1 & 0xFFFF;
    }
    D_003E7504 = var_s1;
    D_003E7505 = var_s0;
}
