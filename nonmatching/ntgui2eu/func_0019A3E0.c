/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00199DF0();                            /* extern */

void func_0019A3E0(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_v0;
    void *temp_v0_2;

    func_00199DF0();
    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) (arg5 | (arg2 | 0x30000000));
    temp_v0_2 = temp_v0 + 4;
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (arg1 & 0x9FFFFFFF);
    *arg0 = temp_v0_2 + 0xC;
    M2C_FIELD(temp_v0_2, s32 *, 4) = arg3;
    M2C_FIELD(temp_v0_2, s32 *, 8) = arg4;
}
