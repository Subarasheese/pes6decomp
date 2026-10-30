/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016E950(void);
s32 sceSifDmaStat(s32);                             /* extern */
M2C_UNK func_0016DA08(s8 *);                        /* extern */
extern char D_00385120[];

void func_0016DD78(void) {
    s32 var_s1;
    s32 var_s1_2;
    s8 *var_s0;
    s8 *var_s0_2;
    s8 temp_v1;

    var_s0 = ((void *)D_00385120);
    var_s1 = 0;
loop_1:
    temp_v1 = M2C_FIELD(var_s0, s8 *, 1);
    if ((temp_v1 == 1) && (M2C_FIELD(var_s0, s8 *, 2) == temp_v1)) {
        if (sceSifDmaStat(M2C_FIELD(var_s0, s32 *, 0x2C)) >= 0) {
            return;
        }
        goto block_6;
    }
block_6:
    var_s1 += 1;
    var_s0 += 0x40;
    if (var_s1 >= 0x20) {
        var_s0_2 = ((void *)D_00385120);
        var_s1_2 = 0x1F;
        do {
            if (*var_s0_2 == 1) {
                func_0016DA08(var_s0_2);
            }
            var_s1_2 -= 1;
            var_s0_2 += 0x40;
        } while (var_s1_2 >= 0);
        func_0016E950();
        return;
    }
    goto loop_1;
}
