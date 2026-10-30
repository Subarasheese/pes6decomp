/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
M2C_UNK func_00163FE8(s32, s32);                    /* extern */
M2C_UNK func_0016A158(s32, M2C_UNK);                /* extern */

void func_0016E460(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    void *temp_v0;

    func_0016A158(arg0 + 0x910, 1);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x918);
    if (temp_a0 != 0) {
        func_00135018(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x91C);
    var_s0 = 0;
    if (temp_a0_2 != 0) {
        func_00135018(temp_a0_2);
    }
    do {
        temp_v0 = arg0 + (var_s0 * 4);
        var_s0 += 1;
        func_00163FE8(M2C_FIELD(temp_v0, s32 *, 0x99C), arg1);
    } while (var_s0 < 0x28);
}
