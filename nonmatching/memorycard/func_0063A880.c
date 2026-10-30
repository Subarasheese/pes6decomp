/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9220(s32, u8);
extern s32 func_00214A10(s32);
extern void func_002149D0(s32);
extern s8 D_003E9E28;
extern s32 D_003E9E3C;

void func_0063A880(void) {
    s32 sp1C;
    s32 *var_v1;
    s32 var_v0;

    var_v0 = 4;
    var_v1 = &sp1C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_002E9220(0, 0U);
    if (func_00214A10(D_003E9E3C) == 1) {
        D_003E9E28 = 0;
    }
    func_002149D0(sp1C);
    func_002149D0(D_003E9E3C);
}
