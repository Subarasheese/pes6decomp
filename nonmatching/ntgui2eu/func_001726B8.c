/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001726B8(void *arg0) {
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_v1;
    void *temp_a1;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_t2_4;

    temp_a6 = M2C_FIELD(arg0, s32 *, 0x8D4);
    temp_a4 = temp_a6 + M2C_FIELD(arg0, s32 *, 0xCF0);
    temp_a5 = M2C_FIELD(arg0, s32 *, 0x4DC) + M2C_FIELD(arg0, s32 *, 0x5A0);
    temp_a1 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xF0) + 0x920);
    temp_a7 = temp_a4 + M2C_FIELD(arg0, s32 *, 0xBF8);
    temp_t2 = temp_a1 + 0x60;
    M2C_FIELD(temp_t2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_a5 + temp_a7);
    temp_t0 = M2C_FIELD(arg0, s32 *, 0xCF4);
    temp_t1 = temp_a6 + temp_t0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x4E0) + M2C_FIELD(arg0, s32 *, 0x4D4);
    temp_a4_2 = temp_a4 + M2C_FIELD(arg0, s32 *, 0xBFC);
    M2C_FIELD(temp_t2, s16 *, 0x12) = (s16) (temp_v1 + (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_t1));
    temp_t2_2 = temp_a1 + 0x80;
    temp_a2 = (M2C_FIELD(arg0, s32 *, 0x5B0) - temp_a6) - temp_t0;
    M2C_FIELD(temp_t2_2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_a5 + temp_a4_2);
    M2C_FIELD(temp_t2_2, s16 *, 0x12) = (s16) (temp_v1 + (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_t1));
    temp_t2_3 = temp_a1 + 0xA0;
    M2C_FIELD(temp_t2_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_a5 + temp_a7);
    M2C_FIELD(temp_t2_3, s16 *, 0x12) = (s16) (temp_v1 + (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_a2));
    temp_t2_4 = temp_a1 + 0xC0;
    M2C_FIELD(temp_t2_4, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_a5 + temp_a4_2);
    M2C_FIELD(temp_t2_4, s16 *, 0x12) = (s16) (temp_v1 + (M2C_FIELD(arg0, u16 *, 0x5D4) + temp_a2));
}
