/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828180();                                /* extern */
extern void *D_00A68D68;

void *func_009791F0(s32 arg0, void *arg1) {
    if ((arg0 < 0) || (arg0 >= M2C_FIELD(D_00A68D68, s32 *, 4))) {
        return NULL;
    }
    M2C_FIELD(arg1, s32 *, 0) = func_00828180();
    M2C_FIELD(arg1, s8 *, 8) = 0;
    M2C_FIELD(arg1, s8 *, 0x10) = 0;
    M2C_FIELD(arg1, s8 *, 0x11) = 0;
    return arg1;
}
