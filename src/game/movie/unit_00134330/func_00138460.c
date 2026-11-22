/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_001375C0(void *);

s32 func_008FBCE8(M2C_UNK *);
extern char D_004FDC80[];

s32 func_00138460(void *arg0) {
    s32 var_s0;

    var_s0 = 0;
    if (func_001375C0(arg0) == 0) {
        switch (func_008FBCE8(((void *)D_004FDC80))) {
        case 0:
            break;
        default:
            var_s0 = 1;
            break;
        }
    }
    return var_s0;
}
