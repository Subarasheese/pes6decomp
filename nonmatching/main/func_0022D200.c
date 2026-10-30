/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
M2C_UNK func_00230100(s32);                         /* extern */
extern s32 D_003E77AC;
extern u16 D_003E9A14;
extern char D_0053A810[];

s32 func_0022D200(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s3;
    u16 *var_a2;
    u16 temp_v1;
    u16 var_s4;
    void *temp_a0;

    var_s4 = 0;
    var_s3 = 0;
    if ((func_00309420() != 0) != 1) {
        var_s0 = D_003E77AC + 0xC;
    } else {
        var_s0 = 0;
    }
    if ((func_00309420() != 0) == 1) {
        goto block_25;
    }
    if (var_s0 != 0) {
        temp_s2 = arg0 & 0xFF;
        if (temp_s2 != 0xFF) {
            temp_s1 = arg1 & 0xFFFF;
            if (temp_s1 == 0) {
                goto block_25;
            }
            func_00230100(func_00226710() & 0xFF);
            var_a3 = 0;
            if ((s32) D_003E9A14 > 0) {
                var_a2 = ((void *)D_0053A810);
loop_19:
                temp_a0 = var_s0 + (*var_a2 * 8);
                temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x1558);
                if ((var_s4 & 0xFFFF) != temp_v1) {
                    var_s4 = temp_v1;
                    var_s3 = (var_a3 + 1) & 0xFFFF;
                }
                if ((temp_s2 == M2C_FIELD(temp_a0, u8 *, 0x1554)) && (temp_s1 == M2C_FIELD(temp_a0, u16 *, 0x1552))) {
                    return var_s3;
                }
                var_a3 += 1;
                var_a2 += 2;
                if (var_a3 >= (s32) D_003E9A14) {
                    goto block_25;
                }
                goto loop_19;
            }
            goto block_25;
        }
        goto block_25;
    }
block_25:
    return 0;
}
