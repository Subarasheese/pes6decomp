/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002CB600(M2C_UNK);                     /* extern */
extern char D_008B2440[];

s32 func_008804D0(void) {
    if ((*(s32 *)D_008B2440) == 0) {
        func_002CB600(0xC);
        (*(s32 *)D_008B2440) = 0;
    }
    return 1;
}
