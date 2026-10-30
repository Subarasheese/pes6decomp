/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081CCA0(M2C_UNK);                     /* extern */
M2C_UNK func_00BDA2E0();                            /* extern */
extern char D_003AE983[];

s32 func_0087D3D0(void) {
    if ((*(s8 *)D_003AE983) != 1) {
        func_0081CCA0(0);
    } else {
        func_00BDA2E0();
        func_0081CCA0(0);
    }
    return 1;
}
