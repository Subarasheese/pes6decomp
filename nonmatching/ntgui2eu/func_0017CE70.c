/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32);               /* extern */
M2C_UNK func_00165778(s32, s32, s32);               /* extern */
M2C_UNK func_0017F880(s32, s32, s32);               /* extern */
M2C_UNK func_0017F8A0(s32, s32);                    /* extern */

void func_0017CE70(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_a1_2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x984);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x924), arg1 - temp_a1, arg2 - temp_a1);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x928), arg1 - arg3, arg2 - arg3);
    temp_a1_2 = arg3 * 2;
    func_00165778(M2C_FIELD(arg0, s32 *, 0x928), temp_a1_2, temp_a1_2);
    func_0017F880(M2C_FIELD(arg0, s32 *, 0x92C), arg1, arg2);
    func_0017F8A0(M2C_FIELD(arg0, s32 *, 0x92C), arg3);
}
