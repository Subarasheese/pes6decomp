/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B8CF0(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    u32 *var_a3;
    u32 *var_a5;
    u32 temp_a0;
    u32 temp_a1;
    void *temp_a6;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0x10);
    var_v0 = M2C_FIELD(arg0, s32 *, 0x10) - temp_v1;
    if (var_v0 == 0) {
        temp_v1_2 = temp_v1 * 4;
        temp_a6 = arg0 + 0x14;
        var_a5 = arg1 + 0x14 + temp_v1_2;
        var_a3 = (temp_a6 + temp_v1_2) - 4;
loop_2:
        var_a5 -= 4;
        temp_a1 = *var_a3;
        temp_a0 = *var_a5;
        var_v0 = (temp_a1 >= temp_a0) ? 1 : -1;
        if (temp_a1 == temp_a0) {
            if ((u32) temp_a6 < (u32) var_a3) {
                var_a3 -= 4;
                goto loop_2;
            }
            var_v0 = 0;
        }
    }
    return var_v0;
}
