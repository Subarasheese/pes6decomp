/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0061C730[];
s32 func_0035A230(void) {
    s32 r = 0;
    s32 v = *(s32 *)D_0061C730;
    if (v & 1) {
        r = v | 1;
        *(s32 *)D_0061C730 = r ^ 1;
        r = 1;
    }
    return r;
}
