/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

s32 func_00326A10(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a1;
    void *temp_a4;
    void *var_a5;

    var_a3 = arg3;
    temp_a4 = arg1 + (arg2 << 0xA);
    var_v0 = 0;
    var_a5 = temp_a4;
    temp_a1 = M2C_FIELD(((var_a3 * 0x348) + (((void *)Pes6MatchSquads) + (arg2 * 0x6900))), u16 *, 0x46);
loop_1:
    if ((M2C_FIELD(var_a5, u16 *, 0xC8) == temp_a1) && (temp_a1 != 0)) {
        var_v1 = 1;
        var_a3 = (s32) (temp_a4 + (var_v0 << 5) + 0xC8);
    } else {
        var_v0 += 1;
        var_a5 += 0x20;
        if (var_v0 >= 0x20) {
            var_v1 = 0;
        } else {
            goto loop_1;
        }
    }
    if (var_v1 == 0) {
        var_v0_2 = 1;
    } else {
        var_v0_2 = M2C_FIELD(var_a3, s32 *, 0x18);
    }
    *arg0 = var_v0_2;
    return 1;
}
