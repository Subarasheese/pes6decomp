/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 (*D_003EA028)();

s32 func_00363800(s32 arg0) {
    if ((D_003EA028 != NULL) && (arg0 != 0)) {
        return D_003EA028();
    }
    return 0;
}
