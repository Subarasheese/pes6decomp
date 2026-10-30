/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081DD00(s32, M2C_UNK *);              /* extern */
extern char D_00D1FFC8[];

s32 func_00D10EE0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        M2C_FIELD(arg0, s8 *, 0x3C) = 0;
        M2C_FIELD(arg0, s8 *, 0x3D) = 1;
        M2C_FIELD(arg0, s8 *, 0x3E) = 1;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_a0 != 0) {
            func_0081DD00(temp_a0, ((void *)D_00D1FFC8));
        }
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_a0_2 != 0) {
            func_0081DD00(temp_a0_2, ((void *)D_00D1FFC8));
        }
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_a0_3 != 0) {
            func_0081DD00(temp_a0_3, ((void *)D_00D1FFC8));
        }
        return 0;
    }
    return 1;
}
