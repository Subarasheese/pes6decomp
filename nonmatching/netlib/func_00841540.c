/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00836E20();                                /* extern */
s32 func_008413A0(s32, s32);                        /* extern */

s32 func_00841540(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_00836E20();
    if (func_0082C2A0() == 0) {
        return 2;
    }
    if (arg0 != 0) {
        return func_008413A0(temp_s0, arg0);
    }
    return 2;
}
