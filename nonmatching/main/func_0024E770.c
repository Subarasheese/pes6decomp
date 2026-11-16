/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0024E7F0(s32);
extern u8 D_003E7504;
extern u8 D_003E7505;

void func_0024E770(void) {
    u8 var_s0;
    u8 var_s1;

    var_s1 = func_0024E7F0(0);
    var_s0 = func_0024E7F0(1);
    if (var_s1 == 0xFF) {
        var_s1 = func_0024E7F0(1);
        if (var_s1 == 0xFF) {
            var_s1 = 0;
        }
    }
    if (var_s0 == 0xFF) {
        var_s0 = var_s1;
    }
    D_003E7504 = var_s1;
    D_003E7505 = var_s0;
}
