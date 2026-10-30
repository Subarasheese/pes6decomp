/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189AD0(void *, s32);                 /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, u16, M2C_UNK);  /* extern */

void func_00163618(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void **temp_s1;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x928) * 2;
    temp_s1 = arg0 + 0x910 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 4);
    temp_v1 = *temp_s1;
    temp_v0_2 = temp_v0 + 6;
    M2C_FIELD(arg0, s32 *, 0x934) = (s32) (temp_v0 + 8);
    M2C_FIELD(arg0, s32 *, 0x938) = temp_v0_2;
    M2C_FIELD(temp_v1, s32 *, 0) = (s32) (temp_v0_2 | 0x10000000);
    M2C_FIELD(temp_v1, s32 *, 8) = 0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    temp_v1_2 = *temp_s1;
    M2C_FIELD(temp_v1_2, s32 *, 0xC) = func_0018A3F0(0x50, 0, (u16) M2C_FIELD(arg0, s32 *, 0x938), 0);
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x928) << 5) + temp_v1_2), s32 *, 0x70) = 0x60000000;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x928) << 5) + temp_v1_2), s32 *, 0x74) = 0;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x928) << 5) + temp_v1_2), s32 *, 0x78) = 0;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x928) << 5) + temp_v1_2), s32 *, 0x7C) = 0;
    func_00189AD0(temp_v1_2 + 0x10, (M2C_FIELD(arg0, s32 *, 0x928) * 2) + 5);
}
