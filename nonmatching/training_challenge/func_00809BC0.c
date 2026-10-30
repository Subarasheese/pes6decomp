/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00809BC0(u8 *arg0, s32 arg1) {
    s32 var_a7;
    s32 var_t0;
    u32 var_t1;
    u32 var_t2;
    u8 *temp_a6;

    var_t0 = 0;
    var_t2 = 0;
    var_a7 = arg1;
loop_1:
    temp_a6 = arg1 + var_t2;
    var_t1 = 0;
    if (*temp_a6 != 0) {
loop_3:
        if (*arg0 == M2C_FIELD((var_a7 + var_t1), u8 *, 0x18)) {
            if (var_t2 == 0) {

            }
            var_t0 = 1;
        } else {
            var_t1 += 1;
            if (var_t1 >= (u8) *temp_a6) {

            } else {
                goto loop_3;
            }
        }
    }
    if (var_t0 != 1) {
        var_t2 += 1;
        var_a7 += 0xB;
        if (var_t2 < 2U) {
            goto loop_1;
        }
    }
}
