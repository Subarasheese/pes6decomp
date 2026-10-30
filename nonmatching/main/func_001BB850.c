/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK, s32, void *); /* extern */

void *func_001BB850(void *arg0) {
    s32 temp_a3;
    s32 var_a2;
    s32 var_v1;
    u32 var_a3;
    u8 temp_a1;
    void *temp_v0;
    void *var_s0;

    var_s0 = NULL;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x2F0) > 0) {
        var_a3 = 0;
loop_2:
        temp_v0 = arg0 + var_a3;
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x2E8);
        if (temp_a1 != 0xFF) {
            var_v1 = 1;
            var_a2 = 0;
loop_4:
            if (temp_a1 & var_v1) {
                var_a2 += 1;
                var_v1 *= 2;
                if (var_a2 >= 8) {

                } else {
                    goto loop_4;
                }
            } else {
                temp_a3 = var_a2 + (var_a3 * 8);
                M2C_FIELD(temp_v0, u8 *, 0x2E8) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x2E8) | (var_v1 & 0xFF));
                var_s0 = arg0 + (temp_a3 * 0xC);
                M2C_FIELD(arg0, u8 *, 0x2F0) = (u8) (M2C_FIELD(arg0, u8 *, 0x2F0) - 1);
                func_001C48E8(var_s0, 0, 0xC, temp_a3 * 3, temp_v0 + 0x2E8);
            }
        } else {
            var_a3 += 1;
            if (var_a3 >= 8U) {

            } else {
                goto loop_2;
            }
        }
    }
    return var_s0;
}
