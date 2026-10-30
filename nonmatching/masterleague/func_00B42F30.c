/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAE6C;

void *func_00B42F30(s32 arg0) {
    s32 temp_a0;
    s32 var_a3;
    s32 var_a4;
    s32 var_v1;
    void *var_a2;
    void *var_a2_2;
    void *var_v1_2;

    if (D_003EAE6C != NULL) {
        temp_a0 = arg0 & 0xFFFF;
        var_a4 = 0;
        var_a2 = D_003EAE6C;
loop_5:
        var_a3 = 0;
        var_v1_2 = var_a2;
loop_6:
        if (temp_a0 != M2C_FIELD(var_v1_2, u16 *, 0x620)) {
            var_a3 += 1;
            var_v1_2 += 2;
            if (var_a3 >= 0x10) {
                var_a4 += 1;
                var_a2 += 0x20;
                if (var_a4 >= 4) {
                    var_v1 = 0;
                    var_a2_2 = D_003EAE6C;
loop_13:
                    if (temp_a0 != M2C_FIELD(var_a2_2, u16 *, 0x6A0)) {
                        var_v1 += 1;
                        var_a2_2 += 2;
                        if (var_v1 >= 8) {
                            goto block_18;
                        }
                        goto loop_13;
                    }
                    return D_003EAE6C + (var_v1 * 2) + 0x6A0;
                }
                goto loop_5;
            }
            goto loop_6;
        }
        return D_003EAE6C + (var_a4 << 5) + (var_a3 * 2) + 0x620;
    }
block_18:
    return NULL;
}
