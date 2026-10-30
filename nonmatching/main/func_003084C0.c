/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_005EFDE4;
extern char D_005EFDF4[];
extern M2C_UNK func_0030C1D0;

s32 func_003084C0(s32 arg0) {
    if ((*(s32 *)D_005EFDF4) != arg0) {
        return -1;
    }
    (*(s32 *)D_005EFDF4) = 0;
    D_005EFDE4 = &func_0030C1D0;
    return 0;
}
