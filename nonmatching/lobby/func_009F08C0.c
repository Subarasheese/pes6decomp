/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00933C00(s32);                             /* extern */
s8 func_00933DA0(s32);                              /* extern */
s32 func_00933EE0();                                /* extern */
extern void *D_00A7E018;

void *func_009F08C0(s32 arg0, void *arg1) {
    s32 var_v0;

    if ((arg0 < 0) || (arg0 >= M2C_FIELD(D_00A7E018, s32 *, 4))) {
        return NULL;
    }
    M2C_FIELD(arg1, s32 *, 0) = func_00933EE0();
    if (func_00933C00(arg0) != 0) {
        var_v0 = 3;
    } else {
        var_v0 = 1;
    }
    M2C_FIELD(arg1, s32 *, 4) = var_v0;
    M2C_FIELD(arg1, s8 *, 8) = 1;
    M2C_FIELD(arg1, s8 *, 0x10) = 0;
    M2C_FIELD(arg1, s8 *, 0x11) = func_00933DA0(arg0);
    return arg1;
}
