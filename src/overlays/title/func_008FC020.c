/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
s32 func_008FC020(void *a, s64 b) {
    void *t = M2C_FIELD(a, void **, 0x40);
    M2C_FIELD(t, s64 *, 0x100) = b;
    M2C_FIELD(t, s32 *, 0x108) = 1;
    return 1;
}
