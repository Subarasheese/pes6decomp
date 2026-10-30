/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32);               /* extern */
M2C_UNK func_00172620();                            /* extern */
M2C_UNK func_001726B8(void *);                      /* extern */
M2C_UNK func_001727A8(void *);                      /* extern */

void func_001725B8(void *arg0) {
    s32 temp_v0;

    func_00172620();
    func_001726B8(arg0);
    func_001727A8(arg0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x8D4) + M2C_FIELD(arg0, s32 *, 0x5D4);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x910), M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0xCF0) + temp_v0, M2C_FIELD(arg0, s32 *, 0x5A4) + M2C_FIELD(arg0, s32 *, 0xCF4) + temp_v0);
}
