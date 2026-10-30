/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008204A0(s32);                             /* extern */
s8 func_00932C80(s32);                              /* extern */
s32 func_00932DC0(s32);                             /* extern */
s32 func_00932F00();                                /* extern */
extern void *D_00A68D90;

void *func_0097AF40(s32 arg0, void *arg1) {
    s32 temp_v0;

    if ((arg0 < 0) || (arg0 >= (s32) M2C_FIELD(D_00A68D90, u8 *, 0x3C))) {
        return NULL;
    }
    M2C_FIELD(arg1, s32 *, 0) = func_00932F00();
    temp_v0 = func_008204A0(func_00932DC0(arg0));
    M2C_FIELD(arg1, s32 *, 4) = temp_v0;
    if (temp_v0 == 0) {
        M2C_FIELD(arg1, s8 *, 8) = 0;
    } else {
        M2C_FIELD(arg1, s8 *, 8) = 1;
    }
    M2C_FIELD(arg1, s8 *, 0x10) = 0;
    M2C_FIELD(arg1, s8 *, 0x11) = func_00932C80(arg0);
    return arg1;
}
