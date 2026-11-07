/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0061C730[];
s32 func_0035A260(void) {
    s32 r = 0;
    s32 v = *(s32 *)D_0061C730;
    if (v & 3) {
        r = v | 2;
        *(s32 *)D_0061C730 = r ^ 2;
        r = 1;
    }
    return r;
}
