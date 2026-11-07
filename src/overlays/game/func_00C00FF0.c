/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


extern char D_00CBD890[];
extern char D_00CBD894[];

s32 func_00C00FF0(s32 arg0) {
    s32 var_v0;
    s32 one;
    s32 sh;

    var_v0 = 0;
    if (arg0 < 0x2E) {
        if (arg0 < 0x20) {
            if ((*(s32 *)D_00CBD894) != 0) {
                var_v0 = 1;
            }
            one = 1;
            if ((*(s32 *)D_00CBD890) & ~(one << arg0)) {
                var_v0 = one;
            }
        } else {
            if ((*(s32 *)D_00CBD890) != 0) {
                var_v0 = 1;
            }
            sh = arg0 - 0x20;
            one = 1;
            if ((*(s32 *)D_00CBD894) & ~(one << sh)) {
                var_v0 = one;
            }
        }
    }
    return var_v0;
}
