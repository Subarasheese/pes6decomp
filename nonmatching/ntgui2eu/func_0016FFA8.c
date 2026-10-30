/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189AD0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0018A148(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0016FFA8(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x50) + 0x880);
    func_00189AD0(temp_s0 + 0x10, 2);
    func_0018A148(temp_s0 + 0x20, 0x98, 0);
    func_0018A148(temp_s0 + 0x30, 0xC0, 0);
}
