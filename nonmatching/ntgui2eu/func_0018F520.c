/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0018F128(s32, s32, s32, s32, s32, s16, s16);
extern char D_011FAFC0[];
extern char D_011FC830[];

void func_0018F520(s32 arg0) {
    s16 temp_a3;
    s32 temp_v1;
    s64 temp_a6;
    void *temp_a7;
    void *temp_v1_2;

    temp_v1 = arg0 * 0x28;
    temp_a7 = temp_v1 + ((void *)D_011FAFC0);
    M2C_FIELD((((void *)D_011FC830) + temp_v1), void **, 0xC) = temp_a7;
    temp_v1_2 = temp_v1 + ((void *)D_011FC830);
    M2C_FIELD(temp_a7, s64 *, 0) = 0xFF23;
    temp_a3 = M2C_FIELD(temp_v1_2, s16 *, 0x20);
    temp_a6 = M2C_FIELD(temp_v1_2, s16 *, 0x14) | ((s64) ((s16) ((temp_a3 > -1) ? temp_a3 : (temp_a3 + 0x3F)) >> 6) << 9) | ((s64) M2C_FIELD(temp_v1_2, s16 *, 0x1C) << 0xF);
    M2C_FIELD(temp_a7, s64 *, 0x10) = temp_a6;
    func_0018F128(arg0, 0, 0, (s32) temp_a3, (s32) M2C_FIELD(temp_v1_2, s16 *, 0x22), temp_a3, (s16) temp_a6);
}
