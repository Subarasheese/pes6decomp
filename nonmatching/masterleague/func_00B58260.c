/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B58260(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a6;
    s32 var_a7;
    s32 var_t0;
    s32 var_t1;
    u16 temp_a0;
    u16 temp_a2;
    u16 var_t2;
    void *temp_a3;

    temp_a6 = arg2 & 0xFF;
    var_t1 = 0;
    var_t2 = 0xFF;
    var_a7 = 1;
    var_t0 = 0;
    if (temp_a6 > 0) {
loop_2:
        temp_a3 = arg1 + ((var_t0 & 0xFFFF) * 8);
        temp_a2 = M2C_FIELD(temp_a3, u16 *, 0);
        if (temp_a2 != 0) {
            temp_a0 = M2C_FIELD(temp_a3, u16 *, 2);
            if ((s32) temp_a0 < (var_t2 & 0xFFFF)) {
                var_t2 = temp_a0;
                var_t1 = (var_t1 + var_a7) & 0xFFFF;
                var_a7 = 1;
            } else {
                var_a7 = (var_a7 + 1) & 0xFFFF;
            }
            if ((M2C_FIELD(temp_a3, u8 *, 5) == 0) && ((arg0 & 0xFFFF) == temp_a2) && ((arg3 & 0xFF) >= (var_t1 & 0xFFFF))) {
                return 1;
            }
            goto block_11;
        }
block_11:
        var_t0 = (var_t0 + 1) & 0xFFFF;
        if (var_t0 >= temp_a6) {
            goto block_12;
        }
        goto loop_2;
    }
block_12:
    return 0;
}
