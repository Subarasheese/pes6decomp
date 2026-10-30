/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011F7E0(void *);                      /* extern */
M2C_UNK func_0011FA98(void *);                      /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */

void func_0011FA10(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = (arg1 * 0x1C) + M2C_FIELD(arg0, s32 *, 0);
    func_001AE624(temp_a0, temp_a0 + 0x1C, ((M2C_FIELD(arg0, s32 *, 0xC) - arg1) - 1) * 0x1C);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v1;
    if (temp_v1 == 0) {
        func_0011FA98(arg0);
        return;
    }
    func_0011F7E0(arg0);
}
