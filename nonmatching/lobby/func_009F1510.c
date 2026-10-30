/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0097F630(u8);                              /* extern */
s32 func_00980370(u8);                              /* extern */
extern void *D_00A7E020;

void *func_009F1510(s32 arg0, void *arg1) {
    s32 var_v0;
    u8 var_a0;

    if ((arg0 < 0) || (arg0 >= (s32) M2C_FIELD(D_00A7E020, u8 *, 4))) {
        return NULL;
    }
    if (arg0 < 0) {
        var_a0 = 0;
    } else if (arg0 < 0x19) {
        var_a0 = M2C_FIELD((arg0 + D_00A7E020), u8 *, 8);
    } else {
        var_a0 = 0;
    }
    if (M2C_FIELD(D_00A7E020, u8 *, 0) != 0) {
        var_v0 = func_00980370(var_a0);
    } else {
        var_v0 = func_0097F630(var_a0);
    }
    M2C_FIELD(arg1, s32 *, 0) = var_v0;
    M2C_FIELD(arg1, s8 *, 8) = 0;
    M2C_FIELD(arg1, s8 *, 0x10) = 0;
    M2C_FIELD(arg1, s8 *, 0x11) = 0;
    return arg1;
}
