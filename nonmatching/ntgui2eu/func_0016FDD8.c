/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BFFA8[];
extern char D_005BFFAC[];

void func_0016FDD8(void *arg0) {
    s64 temp_v1;
    s64 temp_v1_2;
    s64 temp_v1_3;
    void *temp_a4;

    temp_a4 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x50) + arg0 + 0x890;
    M2C_FIELD(temp_a4, s16 *, 0x10) = (s16) (((0x800 - ((s32) (*(s32 *)D_005BFFA8) >> 1)) * 0x10) - M2C_FIELD(arg0, u16 *, 0x828));
    temp_v1 = (M2C_FIELD(temp_a4, s64 *, 0x20) & ~0x7FF) | (((s64) M2C_FIELD(arg0, s32 *, 0x830) >> 4) & 0x7FF);
    M2C_FIELD(temp_a4, s64 *, 0x20) = temp_v1;
    M2C_FIELD(temp_a4, s16 *, 0x14) = (s16) (((0x800 - ((s32) (*(s32 *)D_005BFFAC) >> 1)) * 0x10) - M2C_FIELD(arg0, u16 *, 0x82C));
    temp_v1_2 = (temp_v1 & 0xF800FFFF) | (((((s32) M2C_FIELD(arg0, s32 *, 0x838) >> 4) - 1) & 0x7FF) << 0x10);
    M2C_FIELD(temp_a4, s64 *, 0x20) = temp_v1_2;
    temp_v1_3 = (temp_v1_2 & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((s32) (M2C_FIELD(arg0, s32 *, 0x834) + 7) >> 4) & 0x7FF) << 0x20);
    M2C_FIELD(temp_a4, s64 *, 0x20) = temp_v1_3;
    M2C_FIELD(temp_a4, s64 *, 0x20) = (s64) ((temp_v1_3 & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | (((((s32) (M2C_FIELD(arg0, s32 *, 0x83C) + 0xF) >> 4) - 1) & 0x7FF) << 0x30));
}
