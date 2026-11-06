/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern int func_002DCA40(void);
extern s32 D_003EA2B0;
s32 func_008469B0(s32 arg0) {
    s32 var_s0;
    var_s0 = arg0;
    if (func_002DCA40() != 0) {
        D_003EA2B0 = var_s0;
    } else {
        var_s0 = 0;
    }
    return var_s0;
}
