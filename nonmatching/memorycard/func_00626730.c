/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 D_003E769C;

void func_00626730(void) {
    s32 var_a0;

    var_a0 = 6;
    if (D_003E769C != 6) {
        if (D_003E769C != 5) {
            var_a0 = 3;
            if (D_003E769C != 3) {
                var_a0 = 1;
                if (D_003E769C != 1) {
                    var_a0 = 2;
                }
            }
        }
    } else {
        var_a0 = 7;
    }
    func_001F08B0(var_a0);
}
