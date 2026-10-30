/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *, s32); /* extern */

void func_00176CC8(void *arg0) {
    s32 temp_a5;
    void *temp_a4;

    temp_a4 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0;
    M2C_FIELD(temp_a4, s32 *, 0xAD0) = 0x30000040;
    temp_a5 = M2C_FIELD(arg0, s32 *, 0xE94) & 0x0FFFFFFF;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0), s32 *, 0xAD4) = temp_a5;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0), s32 *, 0xAD8) = 0;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0), s32 *, 0xADC) = func_0018A3F0(0x50, 0, 0x40, 0, temp_a4, temp_a5);
}
