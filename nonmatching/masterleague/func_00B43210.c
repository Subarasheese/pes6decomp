/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAE6C;

s32 func_00B43210(s32 arg0) {
    s32 temp_a0;
    s32 var_a3;
    s32 var_a4;
    s32 var_v1_2;
    void *var_a1;
    void *var_a2;
    void *var_v1;

    var_a2 = D_003EAE6C;
    if (var_a2 != NULL) {
        temp_a0 = arg0 & 0xFFFF;
        var_a4 = 0;
        var_a1 = var_a2;
loop_5:
        var_a3 = 0;
        var_v1 = var_a1;
loop_6:
        if (temp_a0 != M2C_FIELD(var_v1, u16 *, 0x620)) {
            var_a3 += 1;
            var_v1 += 2;
            if (var_a3 >= 0x10) {
                var_a4 += 1;
                var_a1 += 0x20;
                if (var_a4 >= 4) {
                    var_v1_2 = 0;
loop_13:
                    if (temp_a0 != M2C_FIELD(var_a2, u16 *, 0x6A0)) {
                        var_v1_2 += 1;
                        var_a2 += 2;
                        if (var_v1_2 >= 8) {
                            goto block_18;
                        }
                        goto loop_13;
                    }
                    return 1;
                }
                goto loop_5;
            }
            goto loop_6;
        }
        return 1;
    }
block_18:
    return 0;
}
