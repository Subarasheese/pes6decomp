/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115FF8(int, int, void *, void *, void *);
extern char D_00538224[];

s32 func_0021C9B0(s32 arg0, s32 *arg1, s32 *arg2, s32 arg3, void *arg4) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;

    if (*arg1 != arg3) {
        var_v0 = -1;
    } else {
        switch (arg0) {                             /* irregular */
        case 1:
            var_v1 = *arg2;
            if (var_v1 < -0xA) {
                var_v1 = -0xA;
            }
            if (var_v1 != -0xA) {
                var_v0 = -0x7E;
            } else {
                temp_v1 = (*(s32 *)D_00538224) + 1;
                (*(s32 *)D_00538224) = temp_v1;
                var_s0 = -0x7E;
                if (temp_v1 < 4) {
                    if (func_00115FF8((s32) M2C_FIELD(arg4, s16 *, 0xC), (s32) M2C_FIELD(arg4, s16 *, 0xE), arg4 + 0x24, arg4 + 0x28, arg4 + 0x2C) == 0) {
                        var_s0 = 0;
                    }
                }
                var_v0 = var_s0;
            }
            break;
        case 0:
            if (M2C_FIELD(arg4, s32 *, 8) >= 0xE11) {
                M2C_FIELD(arg4, s32 *, 8) = 0;
                var_v0 = 0;
            } else {
                var_v0 = 0;
            }
            break;
        default:
            var_v0 = -1;
            break;
        }
    }
    return var_v0;
}
