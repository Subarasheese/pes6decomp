/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00151EA0(M2C_UNK);                         /* extern */
extern char D_0051FF51[];

void func_001A3340(s32 arg0) {
    if (arg0 == 1) {
        if ((func_00151EA0(0xA) & 0xFFFF) >= 7) {
            (*(s8 *)D_0051FF51) = 2;
            return;
        }
        (*(s8 *)D_0051FF51) = 1;
        return;
    }
    (*(s8 *)D_0051FF51) = 0;
}
