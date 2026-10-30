/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00308400(void);
M2C_UNK func_002691E0(M2C_UNK);                     /* extern */

s32 func_00269480(void) {
    if (func_00308400() == 0) {
        func_002691E0(-1);
    }
    return 0;
}
