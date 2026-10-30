/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00873EE0(s32 *, s32, u32);             /* extern */
M2C_UNK func_00873F60(s32 *, u32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00867040(s32 *arg0, M2C_UNK arg1, s32 arg2, s32 *arg3) {
    u32 sp4C;
    s32 temp_v1;

    sp4C = 0;
    if ((arg0 != NULL) && (arg2 != 0) && (arg3 != NULL)) {
        if (*arg0 != 0x3088) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, &sp4C);
        if (sp4C < 0x3FDU) {
            temp_v1 = *arg3;
            if ((u32) (sp4C + temp_v1) < 0x7F9U) {
                func_00873EE0(arg0, arg2 + temp_v1, sp4C);
                *arg3 += sp4C;
            }
        }
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
