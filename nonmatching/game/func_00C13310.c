/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C13310(void *arg0, s32 arg1) {
    s32 temp_a2;
    void *var_a0;
    void *var_a0_2;

    var_a0_2 = arg0;
    if (var_a0_2 != (void *)-1) {
        temp_a2 = arg1 & 0xFF;
        if (M2C_FIELD(var_a0_2, u8 *, 3) == temp_a2) {
loop_2:
            var_a0_2 -= 4;
            if ((u32) var_a0_2 >= (u32) ((void *)D_00CBFAA0)) {
                if (M2C_FIELD(var_a0_2, u8 *, 3) != temp_a2) {
                    goto block_5;
                }
                goto loop_2;
            }
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return (void *)-1;
        }
block_5:
        var_a0 = var_a0_2 - 4;
        if ((u32) ((void *)D_00CBFAA0) < (u32) var_a0) {
loop_6:
            if (M2C_FIELD(var_a0, u8 *, 3) != temp_a2) {
                var_a0 -= 4;
                if ((u32) ((void *)D_00CBFAA0) >= (u32) var_a0) {
                    /* Duplicate return node #11. Try simplifying control flow for better match */
                    return (void *)-1;
                }
                goto loop_6;
            }
            return var_a0;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return (void *)-1;
    }
    return (void *)-1;
}
