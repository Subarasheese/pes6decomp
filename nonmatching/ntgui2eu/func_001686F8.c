/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016B420(void *, void *, s32);         /* extern */

void func_001686F8(s32 arg0, s32 arg1) {
    void *temp_a0;
    void *temp_a1;
    void *var_v1;

    temp_a0 = arg0 + 0x840;
    var_v1 = temp_a0;
loop_1:
    temp_a1 = M2C_FIELD(var_v1, void **, 8);
    if (temp_a1 != temp_a0) {
        var_v1 = temp_a1;
        if (arg1 == M2C_FIELD(temp_a1, s32 *, 0x10)) {
            func_0016B420(temp_a0, temp_a1, arg1);
        } else {
            goto loop_1;
        }
    }
}
