/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00133B00(void *);                      /* extern */
M2C_UNK func_00133D08(void *);                      /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */

void func_00133C88(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = (arg1 * 4) + M2C_FIELD(arg0, s32 *, 0);
    func_001AE624(temp_a0, temp_a0 + 4, ((M2C_FIELD(arg0, s32 *, 0xC) - arg1) - 1) * 4);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v1;
    if (temp_v1 == 0) {
        func_00133D08(arg0);
        return;
    }
    func_00133B00(arg0);
}
