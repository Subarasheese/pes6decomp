/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00308400(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008FAE10();                            /* extern */
M2C_UNK func_008FB600(M2C_UNK);                     /* extern */

s32 func_008FB5B0(void) {
    if (func_00308400() == 0) {
        func_008FB600(-1);
        func_008FAE10();
        func_0026E840(0x8400F802);
    }
    return 0;
}
