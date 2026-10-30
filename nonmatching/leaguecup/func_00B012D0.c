/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAD54;

void func_00B012D0(s32 arg0, s32 arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    void *temp_a0;
    void *temp_v1;

    if (D_003EAD54 != 0) {
        temp_a0 = ((arg0 & 0xFFFF) * 0x1C) + D_003EAD54;
        temp_v1 = ((arg1 & 0xFFFF) * 0x1C) + D_003EAD54;
        sp0 = M2C_FIELD(temp_a0, f32 *, 0xA0C);
        sp4 = M2C_FIELD(temp_a0, f32 *, 0xA10);
        sp8 = M2C_FIELD(temp_a0, f32 *, 0xA14);
        spC = M2C_FIELD(temp_a0, f32 *, 0xA18);
        temp_f2 = M2C_FIELD(temp_a0, f32 *, 0xA1C);
        temp_f1 = M2C_FIELD(temp_a0, f32 *, 0xA20);
        temp_f0 = M2C_FIELD(temp_a0, f32 *, 0xA24);
        sp10 = temp_f2;
        sp14 = temp_f1;
        sp18 = temp_f0;
        M2C_FIELD(temp_a0, f32 *, 0xA0C) = (f32) M2C_FIELD(temp_v1, f32 *, 0xA0C);
        M2C_FIELD(temp_a0, f32 *, 0xA10) = (f32) M2C_FIELD(temp_v1, f32 *, 0xA10);
        M2C_FIELD(temp_a0, f32 *, 0xA14) = (f32) M2C_FIELD(temp_v1, f32 *, 0xA14);
        M2C_FIELD(temp_a0, f32 *, 0xA18) = (f32) M2C_FIELD(temp_v1, f32 *, 0xA18);
        M2C_FIELD(temp_a0, f32 *, 0xA1C) = (f32) M2C_FIELD(temp_v1, f32 *, 0xA1C);
        M2C_FIELD(temp_a0, f32 *, 0xA20) = (f32) M2C_FIELD(temp_v1, f32 *, 0xA20);
        M2C_FIELD(temp_a0, f32 *, 0xA24) = (f32) M2C_FIELD(temp_v1, f32 *, 0xA24);
        M2C_FIELD(temp_v1, f32 *, 0xA0C) = sp0;
        M2C_FIELD(temp_v1, f32 *, 0xA10) = sp4;
        M2C_FIELD(temp_v1, f32 *, 0xA14) = sp8;
        M2C_FIELD(temp_v1, f32 *, 0xA18) = spC;
        M2C_FIELD(temp_v1, f32 *, 0xA1C) = temp_f2;
        M2C_FIELD(temp_v1, f32 *, 0xA20) = temp_f1;
        M2C_FIELD(temp_v1, f32 *, 0xA24) = temp_f0;
    }
}
