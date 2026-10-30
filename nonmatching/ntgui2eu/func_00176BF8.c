/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018A3F0(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, void *, s32, M2C_UNK); /* extern */

void func_00176BF8(void *arg0) {
    s32 temp_a4;
    s32 temp_a6;
    void *temp_a5;

    temp_a5 = arg0 + 0x910;
    temp_a6 = M2C_FIELD(arg0, s32 *, 0xE74);
    temp_a4 = M2C_FIELD(temp_a5, s32 *, 0x580) & 0x0FFFFFFF;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0), s32 *, 0x990) = (s32) (((u32) (M2C_FIELD(temp_a5, s32 *, 0x568) * M2C_FIELD(temp_a5, s32 *, 0x56C) * temp_a6) >> 4) | 0x30000000);
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0), s32 *, 0x994) = temp_a4;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0), s32 *, 0x998) = 0;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + arg0), s32 *, 0x99C) = func_0018A3F0(0x50, 0, ((u32) (M2C_FIELD(temp_a5, s32 *, 0x568) * M2C_FIELD(temp_a5, s32 *, 0x56C) * M2C_FIELD(arg0, s32 *, 0xE74)) >> 4) & 0xFFFF, 0, temp_a4, temp_a5, temp_a6, 0x30000000);
}
