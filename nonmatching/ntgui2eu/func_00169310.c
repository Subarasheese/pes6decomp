/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00169310(void *arg0) {
    s64 temp_a1;
    s64 temp_v1;
    s64 temp_v1_2;
    s64 temp_v1_3;
    void *temp_a4;
    void *temp_v0;

    temp_v0 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + 0x630);
    temp_a4 = temp_v0 + 0x10;
    temp_a1 = M2C_FIELD(temp_a4, s64 *, 0x20);
    if (M2C_FIELD(arg0, s32 *, 0x858) != 0) {
        temp_v1 = (temp_a1 & ~0x7FF) | (((s64) M2C_FIELD(arg0, s32 *, 0x830) >> 4) & 0x7FF);
        M2C_FIELD(temp_a4, s64 *, 0x20) = temp_v1;
        temp_v1_2 = (temp_v1 & 0xF800FFFF) | (((((s32) M2C_FIELD(arg0, s32 *, 0x838) >> 4) - 1) & 0x7FF) << 0x10);
        M2C_FIELD(temp_a4, s64 *, 0x20) = temp_v1_2;
        temp_v1_3 = (temp_v1_2 & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((s32) (M2C_FIELD(arg0, s32 *, 0x834) + 7) >> 4) & 0x7FF) << 0x20);
        M2C_FIELD(temp_a4, s64 *, 0x20) = temp_v1_3;
        M2C_FIELD(temp_a4, s64 *, 0x20) = (s64) ((temp_v1_3 & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | (((((s32) (M2C_FIELD(arg0, s32 *, 0x83C) + 0xF) >> 4) - 1) & 0x7FF) << 0x30));
    } else {
        M2C_FIELD(temp_a4, s64 *, 0x20) = (s64) (temp_a1 & ~0x7FF & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) & 0xF800FFFF & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF));
    }
    M2C_FIELD((temp_v0 + 0x60), s64 *, 0x20) = (s64) M2C_FIELD(temp_a4, s64 *, 0x20);
}
