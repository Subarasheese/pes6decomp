/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];

void func_00291A20(s8 arg0) {
    s8 var_a0;

    var_a0 = arg0;
    if (((void *)D_005A2330) != NULL) {
        if ((var_a0 & 0xFF) >= 0x18) {
            var_a0 = 0x17;
        }
        M2C_FIELD(((void *)D_005A2330), s8 *, 3) = var_a0;
    }
}
