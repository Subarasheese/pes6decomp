/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 D_003E77AC;
extern u16 D_003E9A18;
extern char D_0053A850[];

s32 func_0022D460(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a5;
    s32 var_s0;
    s32 var_s1;
    u16 *var_a4;
    u16 temp_v1;
    u16 var_s2;
    void *temp_a0;

    var_s2 = 0;
    var_s1 = 0;
    if ((func_00309420() != 0) != 1) {
        var_s0 = D_003E77AC + 0xC;
    } else {
        var_s0 = 0;
    }
    if ((func_00309420() != 0) == 1) {
        goto block_27;
    }
    if (var_s0 != 0) {
        temp_a3 = arg0 & 0xFF;
        if (temp_a3 != 0xFF) {
            temp_a2 = arg1 & 0xFFFF;
            if (temp_a2 != 0) {
                var_a5 = 0;
                if ((s32) D_003E9A18 > 0) {
                    var_a4 = ((void *)D_0053A850);
loop_21:
                    temp_a0 = var_s0 + (*var_a4 * 8);
                    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x1556);
                    if ((var_s2 & 0xFFFF) != temp_v1) {
                        var_s2 = temp_v1;
                        var_s1 = (var_a5 + 1) & 0xFFFF;
                    }
                    if ((temp_a3 == M2C_FIELD(temp_a0, u8 *, 0x1554)) && (temp_a2 == M2C_FIELD(temp_a0, u16 *, 0x1552))) {
                        return var_s1;
                    }
                    var_a5 += 1;
                    var_a4 += 2;
                    if (var_a5 >= (s32) D_003E9A18) {
                        goto block_27;
                    }
                    goto loop_21;
                }
                goto block_27;
            }
            goto block_27;
        }
        goto block_27;
    }
block_27:
    return 0;
}
