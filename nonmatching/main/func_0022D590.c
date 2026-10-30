/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 D_003E77AC;
extern u16 D_003E9A18;
extern char D_0053A850[];

u16 func_0022D590(u32 arg0) {
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    u16 *var_a1;
    u16 temp_v1;
    u16 var_s2;

    var_s2 = 0;
    var_s1 = 0;
    if ((func_00309420() != 0) != 1) {
        var_s0 = D_003E77AC + 0xC;
    } else {
        var_s0 = 0;
    }
    if ((func_00309420() != 0) == 1) {
        goto block_28;
    }
    if (var_s0 != 0) {
        if (arg0 < (u16) D_003E9A18) {
            if (arg0 < 0x20U) {
                var_a2 = 0;
                if ((s32) D_003E9A18 > 0) {
                    var_a1 = ((void *)D_0053A850);
loop_21:
                    temp_v1 = M2C_FIELD((var_s0 + (*var_a1 * 8)), u16 *, 0x1556);
                    if ((var_s2 & 0xFFFF) != temp_v1) {
                        var_s2 = temp_v1;
                        var_s1 = (var_a2 + 1) & 0xFFFF;
                    }
                    if (arg0 != (var_s1 & 0xFFFF)) {
                        var_a2 += 1;
                        var_a1 += 2;
                        if (var_a2 >= (s32) D_003E9A18) {
                            goto block_28;
                        }
                        goto loop_21;
                    }
                    return var_s2;
                }
                goto block_28;
            }
            goto block_28;
        }
        goto block_28;
    }
block_28:
    return 0U;
}
