/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_005BFAE8)();

void func_00168BF0(void *arg0, s32 arg1) {
    void *temp_a0;
    void *temp_s2;
    void *var_s1;

    temp_s2 = arg0 + 0x840;
    D_005BFAE8();
    if (M2C_FIELD(arg0, s32 *, 0x854) != 0) {
        if (M2C_FIELD(temp_s2, void **, 8) != temp_s2) {
            var_s1 = M2C_FIELD(temp_s2, void **, 8);
loop_3:
            if (M2C_FIELD(var_s1, s32 *, 0) != 0) {
                temp_a0 = M2C_FIELD(var_s1, void **, 0x10);
                M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x4C), M2C_UNK (**)(void *, s32), 0x108)(temp_a0, arg1);
            }
            if (M2C_FIELD(var_s1, void **, 8) != temp_s2) {
                var_s1 = M2C_FIELD(var_s1, void **, 8);
                goto loop_3;
            }
        }
    }
}
