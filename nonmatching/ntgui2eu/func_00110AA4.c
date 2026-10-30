/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */

s32 func_00110AA4(void *arg0) {
    s32 temp_s1;

    func_0019B160(M2C_FIELD(arg0, s32 *, 0x10));
    temp_s1 = M2C_FIELD(arg0, s32 *, 8);
    func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
    return temp_s1;
}
