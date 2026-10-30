/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011D090(s32);                         /* extern */

void func_0011DE88(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x38C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x36C) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C4) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C0) = 0;
    func_0011D090(arg3);
}
