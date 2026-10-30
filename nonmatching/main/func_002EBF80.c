/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_002EBF80(void *arg0) {
    void *temp_v0;

    temp_v0 = (M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0;
    return M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x1910) * 4) + ((M2C_FIELD(temp_v0, s32 *, 0x1914) * 0x4A4) + arg0)), u16 *, 0x1944);
}
