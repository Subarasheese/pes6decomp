/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_006020B0;

void func_001038A0(s32 *arg0, s32 *arg1) {
    s32 var_v1;

    if (D_006020B0 != 0) {
        var_v1 = 0x82;
    } else {
        var_v1 = 0x130;
    }
    *arg0 = 0x21C;
    *arg1 = var_v1;
}
