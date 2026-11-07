/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
M2C_UNK func_001525A0(s32);
M2C_UNK func_00153140(void *);
void func_00153DD0(void *arg0) {
    s32 var_s0;
    s32 var_s1;
    if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
        var_s0 = M2C_FIELD(arg0, s32 *, 0xC);
        var_s1 = 0;
        do {
            var_s0 -= 1;
            func_001525A0(M2C_FIELD(arg0, s32 *, 0) + var_s1);
            var_s1 += 0x14;
        } while (var_s0 != 0);
    }
    func_00153140(arg0);
}
