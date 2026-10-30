/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E8CB0(s32, s8);
extern s32 func_002E91D0(void);
extern s32 func_002E8C60(void);
extern s32 D_003E9EFC;
extern s32 D_003E9F04;

s32 func_0030C2F0(void) {
    s32 var_v0;

    switch (D_003E9F04) {                           /* irregular */
    case 0:
        if (D_003E9EFC == 0) {
            return -1;
        }
        if (func_002E91D0() != 0) {
            D_003E9F04 += 1;
        case 1:
            func_002E8CB0(0x49, 0);
            D_003E9F04 += 1;
block_20:
        default:
            return 0;
        }
        return 1;
    case 2:
        if (func_002E8C60() == 1) {
            D_003E9F04 = 0;
            if (func_002E91D0() != 0) {
                var_v0 = -1;
            } else {
                var_v0 = 1;
            }
            return var_v0;
        }
        goto block_20;
    }
}
