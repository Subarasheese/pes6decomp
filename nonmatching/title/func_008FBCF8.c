/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008FBCF8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(temp_v0, s32 *, 0xB0) = arg3;
    M2C_FIELD(temp_v0, s32 *, 0xA8) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0xAC) = arg2;
}
