/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_001136AC(void *arg0) {
    M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK, s32, M2C_UNK), 0x20)(0, M2C_FIELD(arg0, u8 *, 0x52) & 1, 0x8029);
}
