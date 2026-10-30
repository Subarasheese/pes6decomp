/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018EC90(void *, s16, s16, s16, s16);  /* extern */
extern char D_005C8D68[];
extern char D_011FAFC0[];
extern char D_011FC830[];

void func_0018F0A0(s32 arg0) {
    s32 temp_s0;
    void *temp_a0;
    void *temp_s0_2;

    temp_s0 = arg0 * 0x28;
    temp_a0 = temp_s0 + ((void *)D_011FAFC0);
    M2C_FIELD((((void *)D_011FC830) + temp_s0), void **, 0xC) = temp_a0;
    temp_s0_2 = temp_s0 + ((void *)D_011FC830);
    func_0018EC90(temp_a0, M2C_FIELD(temp_s0_2, s16 *, 0x14), M2C_FIELD(temp_s0_2, s16 *, 0x1C), M2C_FIELD(temp_s0_2, s16 *, 0x20), M2C_FIELD(temp_s0_2, s16 *, 0x22));
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x1C) = (s32) M2C_FIELD(temp_s0_2, s16 *, 0x22);
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0xC) = (s32) M2C_FIELD(temp_s0_2, s16 *, 0x1C);
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x10) = (s32) M2C_FIELD(temp_s0_2, s16 *, 0x1E);
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x14) = (s32) M2C_FIELD(temp_s0_2, s16 *, 0x24);
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x18) = (s32) M2C_FIELD(temp_s0_2, s16 *, 0x20);
}
