/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(void *);                      /* extern */
M2C_UNK func_001640E0(void *, void *);              /* extern */

void func_001681F0(void *arg0) {
    s32 temp_s4;
    void **temp_v1;
    void *temp_a0;
    void *temp_s2;
    void *temp_v0;
    void *var_s0;
    void *var_s1;

    temp_s4 = arg0 + 0x9B4;
    var_s0 = M2C_FIELD(arg0, void **, 0x9B4);
    if (var_s0 != temp_s4) {
        var_s1 = M2C_FIELD(var_s0, void **, 8);
loop_2:
        temp_s2 = M2C_FIELD(var_s0, void **, 0);
        if ((M2C_FIELD(var_s1, s32 *, 0xAC) != 0) && (M2C_FIELD(var_s1, s32 *, 0xB4) == 0)) {
            temp_a0 = var_s0;
            if (M2C_FIELD(var_s1, s32 *, 0xB0) != 0) {
                M2C_FIELD(temp_s2, void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
                temp_v1 = M2C_FIELD(var_s0, void ***, 4);
                temp_v0 = M2C_FIELD(var_s0, void **, 0);
                var_s0 = temp_s2;
                *temp_v1 = temp_v0;
                func_00135018(temp_a0);
                func_001640E0(var_s1, arg0);
            } else {
                M2C_FIELD(var_s1, s32 *, 0xB0) = 1;
                goto block_7;
            }
        } else {
block_7:
            var_s0 = temp_s2;
        }
        if (var_s0 != temp_s4) {
            var_s1 = M2C_FIELD(var_s0, void **, 8);
            goto loop_2;
        }
    }
}
