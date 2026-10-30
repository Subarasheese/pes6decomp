/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016F578(void *arg0) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_a4;
    s16 temp_a5;
    s16 temp_a6;
    s16 temp_v1_3;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = arg0 + 0x620;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x4DC) + M2C_FIELD(arg0, s32 *, 0x5A0) + temp_v1;
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x4E0) + M2C_FIELD(arg0, s32 *, 0x4D4) + temp_v1;
    temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x2B4);
    temp_a3 = temp_a2 + M2C_FIELD(arg0, s32 *, 0x4D8);
    temp_a5 = temp_a1 + M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_v0_2 = temp_v0 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x130);
    M2C_FIELD(temp_v0_2, s16 *, 0x80) = temp_a1;
    temp_a0 = temp_a1 + temp_v1_2;
    temp_a4 = temp_a3 - temp_v1_2;
    temp_a6 = temp_a5 - temp_v1_2;
    temp_v0_3 = temp_v0_2 + 0x80;
    temp_v1_3 = temp_a2 + temp_v1_2;
    M2C_FIELD(temp_v0_3, s16 *, 0x92) = temp_a4;
    M2C_FIELD(temp_v0_3, s16 *, 0x42) = temp_a2;
    M2C_FIELD(temp_v0_3, s16 *, 0x52) = temp_v1_3;
    M2C_FIELD(temp_v0_3, s16 *, 0x60) = temp_a5;
    M2C_FIELD(temp_v0_3, s16 *, 0x70) = temp_a6;
    M2C_FIELD(temp_v0_3, s16 *, 0x80) = temp_a1;
    M2C_FIELD(temp_v0_3, s16 *, 0x82) = temp_a3;
    M2C_FIELD(temp_v0_3, s16 *, 0x90) = temp_a0;
    M2C_FIELD(temp_v0_3, s16 *, 2) = temp_a3;
    M2C_FIELD(temp_v0_3, s16 *, 0x10) = temp_a0;
    M2C_FIELD(temp_v0_3, s16 *, 0x12) = temp_a4;
    M2C_FIELD(temp_v0_3, s16 *, 0x20) = temp_a1;
    M2C_FIELD(temp_v0_3, s16 *, 0x22) = temp_a2;
    M2C_FIELD(temp_v0_3, s16 *, 0x30) = temp_a0;
    M2C_FIELD(temp_v0_3, s16 *, 0x32) = temp_v1_3;
    M2C_FIELD(temp_v0_3, s16 *, 0x40) = temp_a5;
    M2C_FIELD(temp_v0_3, s16 *, 0x50) = temp_a6;
    M2C_FIELD(temp_v0_3, s16 *, 0x62) = temp_a3;
    M2C_FIELD(temp_v0_3, s16 *, 0x72) = temp_a4;
}
