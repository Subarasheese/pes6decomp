/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
M2C_UNK func_00152548(s32);
void func_00153D78(void *arg0) {
    s32 var_s0;
    s32 var_s1;
    if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
        var_s0 = M2C_FIELD(arg0, s32 *, 0xC);
        var_s1 = 0;
        do {
            var_s0 -= 1;
            func_00152548(M2C_FIELD(arg0, s32 *, 0) + var_s1);
            var_s1 += 0x14;
        } while (var_s0 != 0);
    }
}
