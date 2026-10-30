/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00123A78(s32, s32);                    /* extern */
s32 func_0012FE68();                                /* extern */
M2C_UNK func_0012FF28();                            /* extern */
M2C_UNK func_00165D40(s32, M2C_UNK);                /* extern */
s32 func_001B0444(s32);                             /* extern */
extern char D_005B3740[];

void func_001359D0(s32 arg0, s32 arg1) {
    if (arg0 & 1) {
        if (func_0012FE68() != 2) {
            if ((func_001B0444(arg1) == 0) && ((*(s32 *)D_005B3740) != 0)) {
                func_00165D40((*(s32 *)D_005B3740), 0);
                (*(s32 *)D_005B3740) = 0;
            }
            func_0012FF28();
        }
    }
    func_00123A78(arg0, arg1);
}
