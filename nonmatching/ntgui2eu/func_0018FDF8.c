/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FC830[];

void func_0018FDF8(s32 arg0, s64 *arg1) {
    s64 temp_v1_2;
    void **temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_v1;

    temp_a0 = (arg0 * 0x28) + ((void *)D_011FC830);
    temp_v1 = *temp_a0;
    M2C_FIELD(temp_v1, s32 *, 0xC) = (s32) (M2C_FIELD(temp_v1, s32 *, 0xC) + 1);
    temp_a2 = *temp_a0;
    M2C_FIELD(temp_a2, s32 *, 0) = (s32) (M2C_FIELD(temp_a2, s32 *, 0) + 1);
    temp_a3 = *temp_a0;
    temp_v1_2 = M2C_FIELD(temp_a3, s64 *, 0x10);
    M2C_FIELD(temp_a3, s64 *, 0x10) = (s64) ((temp_v1_2 & ~0x7FFF) | ((((s64) ((temp_v1_2 & 0x7FFF) << 0x20) >> 0x20) + 1) & 0x7FFF));
    M2C_FIELD(*temp_a0, s64 *, 0xA8) = 0x44;
    M2C_FIELD(*temp_a0, s64 *, 0xA0) = (s64) *arg1;
    temp_a1 = *temp_a0;
    M2C_FIELD(temp_a1, s64 *, 0x80) = (s64) (M2C_FIELD(temp_a1, s64 *, 0x80) | 1);
}
