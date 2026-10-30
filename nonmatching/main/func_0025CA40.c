/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0025E0E0(M2C_UNK);                         /* extern */
M2C_UNK func_0025E100(M2C_UNK, M2C_UNK);            /* extern */
extern char D_0058CFDC[];

void func_0025CA40(s8 arg0) {
    if (func_0025E0E0(6) == 0) {
        (*(s8 *)D_0058CFDC) = arg0;
        func_0025E100(6, 1);
    }
}
