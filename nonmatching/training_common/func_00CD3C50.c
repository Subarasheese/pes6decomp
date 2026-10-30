/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00221280(s32);
extern char D_00CFCE90[];

s32 func_00CD3C50(s32 arg0) {
    s32 *var_v1;
    s32 var_s0;
    u32 var_a1;
    void *var_v1_2;

    var_a1 = 0;
    var_v1 = ((void *)D_00CFCE90);
loop_1:
    if (arg0 != *var_v1) {
        var_a1 += 1;
        var_v1 += 0x2C;
        if (var_a1 >= 0x1CU) {
            return 0;
        }
        goto loop_1;
    }
    var_s0 = 0;
    var_v1_2 = ((void *)D_00CFCE90) + (var_a1 * 0x2C);
loop_6:
    if (M2C_FIELD(var_v1_2, s32 *, 4) != 0) {
        if (var_s0 < 0xA) {
            var_v1_2 += 4;
            var_s0 += 1;
            goto loop_6;
        }
    }
    if (arg0 != 8) {
        return var_s0;
    }
    if ((M2C_FIELD(func_00221280(0), u8 *, 1) == 3) || (M2C_FIELD(func_00221280(0), u8 *, 1) == 4)) {
        var_s0 -= 1;
    }
    return var_s0;
}
