/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern s32 Pes6Settings_Get_B04_b5_w1(void), func_00B542D0(void), func_00B54300(void);
s32 func_00B58E10(void) {
    if (!Pes6Settings_Get_B04_b5_w1())
        return 0;
    if (func_00B542D0() >= 2 && !func_00B54300())
        return 1;
    return 0;
}
