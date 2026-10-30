/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001EF1E0(void *arg0, void *arg1) {
    s32 var_v1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if (M2C_FIELD(arg0, f32 *, 0x110) != M2C_FIELD(arg1, f32 *, 0)) {
            goto block_5;
        }
        if (M2C_FIELD(arg0, f32 *, 0x114) == M2C_FIELD(arg1, f32 *, 4)) {
            if (M2C_FIELD(arg0, f32 *, 0x118) != M2C_FIELD(arg1, f32 *, 8)) {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD(arg0, f32 *, 0x110) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(arg0, f32 *, 0x114) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0x118) = (f32) M2C_FIELD(arg1, f32 *, 8);
            if (M2C_FIELD(arg0, f32 *, 0x110) != 0.0f) {
                goto block_6;
            }
            if ((M2C_FIELD(arg0, f32 *, 0x114) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x118) == 0.0f)) {
                M2C_FIELD(arg0, s8 *, 0x120) = 0;
            } else {
block_6:
                M2C_FIELD(arg0, s8 *, 0x120) = 1;
            }
            M2C_FIELD(arg0, u8 *, 0x11E) = (u8) (M2C_FIELD(arg0, u8 *, 0x11E) | 1);
        }
    }
}
