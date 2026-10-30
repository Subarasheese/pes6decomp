/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003E7B17;
extern s32 D_003E7B20;

void func_00972C50(void) {
    u8 var_v1;

    if (D_003E7B20 <= 0) {
        if ((s32) D_003E7B17 >= 0x34) {
            var_v1 = D_003E7B17 - 3;
        } else {
            var_v1 = 0x36;
            D_003E7B20 = 1;
        }
    } else if ((s32) D_003E7B17 < 0xCC) {
        var_v1 = D_003E7B17 + 3;
    } else {
        var_v1 = 0xC9;
        D_003E7B20 = -1;
    }
    D_003E7B17 = var_v1;
}
