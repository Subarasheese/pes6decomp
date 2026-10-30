/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E84D0(void);
extern s32 func_002E8CB0(s32, s8);
extern s32 func_002E8C60(void);
s32 func_00B9FBB0();                                /* extern */
extern u8 D_003EAF44;

s32 func_00B90410(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EAF44) {                           /* irregular */
    case 0:
        if (func_002E84D0() == 0) {
            D_003EAF44 = 2;
        } else {
            func_002E8CB0(0x2C, 0);
            D_003EAF44 = 1;
        case 1:
            if (func_002E8C60() != 0) {
                D_003EAF44 = 2;
            case 2:
                if (func_00B9FBB0() != 0) {
                    D_003EAF44 = 0;
                    var_s0 = 1;
                }
            }
        }
        break;
    }
    return var_s0;
}
