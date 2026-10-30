/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012A358(void *);                      /* extern */
M2C_UNK func_0012A780(void *);                      /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */

void func_0012A6F8(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = (arg1 * 0x4C4) + M2C_FIELD(arg0, s32 *, 0);
    func_001AE624(temp_a0, temp_a0 + 0x4C4, ((M2C_FIELD(arg0, s32 *, 0xC) - arg1) - 1) * 0x4C4);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v1;
    if (temp_v1 == 0) {
        func_0012A780(arg0);
        return;
    }
    func_0012A358(arg0);
}
