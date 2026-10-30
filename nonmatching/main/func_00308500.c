/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005EFDE4[];
extern char D_005EFDF4[];

s32 func_00308500(s32 arg0, s32 arg1) {
    if ((*(s32 *)D_005EFDF4) != 0) {
        return -1;
    }
    (*(s32 *)D_005EFDF4) = arg0;
    (*(s32 *)D_005EFDE4) = arg1;
    return 0;
}
