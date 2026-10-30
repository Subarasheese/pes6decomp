/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_0082B4C0(s32);                             /* extern */
s32 func_00836E20();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_0086B500(s32, s32);                        /* extern */

s32 func_00835AD0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_00836E20();
    temp_s0 = func_0082C2A0();
    if ((temp_s1 < 0) || (temp_s1 >= 9)) {
        return 2;
    }
    if (temp_s0 != 0) {
        if (func_0082B4C0(temp_s1) != 1) {
            if (func_00862110(temp_s0, temp_s1) == 1) {
                if (func_0086B500(temp_s0 + (temp_s1 * 0x24), arg0) == 0) {
                    return 4;
                }
                return 2;
            }
            return 2;
        }
        return 2;
    }
    return 2;
}
