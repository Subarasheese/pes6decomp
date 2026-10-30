/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0093C740(void);
s32 func_0093C6A0(s32);                             /* extern */

void *func_009B1840(s32 arg0, void *arg1) {
    if (arg0 >= 0) {
        if (arg0 < func_0093C740()) {
            M2C_FIELD(arg1, s32 *, 0) = func_0093C6A0(arg0);
            M2C_FIELD(arg1, s32 *, 4) = 0;
            M2C_FIELD(arg1, s8 *, 8) = 0;
            M2C_FIELD(arg1, s8 *, 0x10) = 0;
            M2C_FIELD(arg1, s8 *, 0x11) = 0;
            return arg1;
        }
        goto block_4;
    }
block_4:
    return NULL;
}
