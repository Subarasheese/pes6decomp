/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00520080;

void func_00188710(s32 arg0, void *arg1) {
    u8 var_v1;

    if (arg0 == 1) {
        var_v1 = M2C_FIELD(D_00520080, u8 *, 0x2A);
        M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(D_00520080, u8 *, 0x28);
        M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(D_00520080, u8 *, 0x29);
    } else {
        var_v1 = M2C_FIELD(D_00520080, u8 *, 0x2D);
        M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(D_00520080, u8 *, 0x2B);
        M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(D_00520080, u8 *, 0x2C);
    }
    M2C_FIELD(arg1, u8 *, 2) = var_v1;
    M2C_FIELD(arg1, u8 *, 0) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 0) >> 1);
    M2C_FIELD(arg1, u8 *, 1) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 1) >> 1);
    M2C_FIELD(arg1, u8 *, 2) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 2) >> 1);
}
