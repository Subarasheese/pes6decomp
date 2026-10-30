/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00234E00(s32 arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_s1;
    s32 var_v0;
    u8 temp_a2;
    u8 temp_v0;
    u8 var_a4;
    void *temp_a0_2;
    void *temp_s0;

    var_s1 = 0;
    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        goto block_20;
    }
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s0, u8 *, 0x1364);
        temp_a3 = arg0 & 0xFF;
        if (temp_a3 < (s32) temp_v0) {
            var_a4 = M2C_FIELD(temp_s0, u8 *, 0x4AB8);
            if ((s32) temp_v0 >= (s32) var_a4) {
                temp_a2 = M2C_FIELD(temp_s0, u8 *, 0x1363);
                var_v0 = 0;
                if ((s32) temp_a2 > 0) {
loop_15:
                    if ((temp_a3 >= (var_s1 & 0xFF)) && (temp_a3 < (var_a4 & 0xFF))) {
                        return var_v0;
                    }
                    temp_a0 = (var_v0 & 0xFF) * 3;
                    var_v0 = (var_v0 + 1) & 0xFF;
                    temp_a0_2 = temp_s0 + (temp_a0 * 4);
                    var_a4 = (var_a4 + M2C_FIELD(temp_a0_2, u8 *, 0x4AC4)) & 0xFF;
                    var_s1 = (var_s1 + M2C_FIELD(temp_a0_2, u8 *, 0x4AB8)) & 0xFF;
                    if (var_v0 >= (s32) temp_a2) {
                        goto block_20;
                    }
                    goto loop_15;
                }
                goto block_20;
            }
            goto block_20;
        }
        goto block_20;
    }
block_20:
    return 0;
}
