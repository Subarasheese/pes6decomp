/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016B3D0(void *, void *);              /* extern */

void func_00169968(void *arg0, s32 arg1) {
    void *temp_a0;
    void *temp_a2;
    void *var_v1;

    var_v1 = arg0 + 0x840;
    temp_a2 = var_v1;
    if (M2C_FIELD(arg0, s32 *, 0x864) == arg1) {
        M2C_FIELD(arg0, s32 *, 0x864) = 0;
    }
loop_2:
    temp_a0 = M2C_FIELD(var_v1, void **, 8);
    if (temp_a0 != temp_a2) {
        var_v1 = temp_a0;
        if (M2C_FIELD(temp_a0, s32 *, 0x10) == arg1) {
            func_0016B3D0(temp_a0, temp_a2);
            M2C_FIELD(arg0, s32 *, 0x854) = (s32) (M2C_FIELD(arg0, s32 *, 0x854) - 1);
        } else {
            goto loop_2;
        }
    }
}
