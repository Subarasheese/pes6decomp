/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD890[];
extern char D_00CBD894[];

s32 func_00C00FF0(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 < 0x2E) {
        if (arg0 < 0x20) {
            if ((*(s32 *)D_00CBD894) != 0) {
                var_v0 = 1;
            }
            if ((*(s32 *)D_00CBD890) & ~(1 << arg0)) {
                goto block_9;
            }
        } else {
            if ((*(s32 *)D_00CBD890) != 0) {
                var_v0 = 1;
            }
            if ((*(s32 *)D_00CBD894) & ~(1 << (arg0 - 0x20))) {
block_9:
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
