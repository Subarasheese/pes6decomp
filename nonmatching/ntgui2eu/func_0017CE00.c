/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017CE00(void *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 *var_a1;
    s32 *var_a2;
    u32 var_a4;
    void *temp_v0;
    void *temp_v0_2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a4 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x944) != 0) {
        do {
            *var_a1 = arg3;
            temp_v0 = arg0 + (var_a4 * 4);
            var_a4 += 1;
            var_a1 += 4;
            *var_a2 = M2C_FIELD(temp_v0, s32 *, 0xA10);
            var_a2 += 4;
        } while (var_a4 < 4U);
        return;
    }
    do {
        *var_a2 = arg3;
        temp_v0_2 = arg0 + (var_a4 * 4);
        var_a4 += 1;
        var_a2 += 4;
        *var_a1 = M2C_FIELD(temp_v0_2, s32 *, 0xA10);
        var_a1 += 4;
    } while (var_a4 < 4U);
}
