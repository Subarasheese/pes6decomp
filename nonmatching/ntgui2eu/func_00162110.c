/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32);               /* extern */

void func_00162110(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x5A0) + 0x30;
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x5A4) + 0x30;
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x8A0), temp_s1, temp_s2);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x8A4), temp_s1, temp_s2);
}
