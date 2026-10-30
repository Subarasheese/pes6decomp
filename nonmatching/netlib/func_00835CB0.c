/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00815450();                                /* extern */
s32 func_008156F0();                                /* extern */
M2C_UNK func_00D15450();                            /* extern */
extern char D_008A5CA0[];

s32 func_00835CB0(void) {
    if (func_00815450() == 1) {
        (*(s32 *)D_008A5CA0) = 1;
        if (func_008156F0() != 1) {
            return 0;
        }
    }
    func_00D15450();
    return 1;
}
