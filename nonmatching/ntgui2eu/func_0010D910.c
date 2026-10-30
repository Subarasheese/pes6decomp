/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_011B5D30;

void func_0010D910(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s2;
    s16 temp_s2_2;
    s32 temp_v0;
    void *temp_s4;
    void *temp_s4_2;
    void *temp_s4_3;
    void *temp_s4_4;

    temp_s4 = arg0 + 0x10;
    M2C_FIELD(D_011B5D30, M2C_UNK (**)(), 0xFC)();
    temp_s1 = arg1 - M2C_FIELD(D_011B5D30, s32 (**)(M2C_UNK), 0xE8)(0x20);
    temp_s2 = arg2 - M2C_FIELD(D_011B5D30, s32 (**)(M2C_UNK), 0xE4)(0x20);
    temp_s1_2 = (temp_s1 < 0) ? 0 : temp_s1;
    temp_s2_2 = (temp_s2 < 0) ? 0 : temp_s2;
    M2C_FIELD(temp_s4, s16 *, 0xE) = temp_s2_2;
    temp_s4_2 = arg0 + 0x40;
    M2C_FIELD(arg0, s16 *, 0x3C) = temp_s1_2;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_s2_2 + M2C_FIELD(temp_s4, s32 *, 4));
    M2C_FIELD(temp_s4_2, s16 *, 0xE) = temp_s2_2;
    M2C_FIELD(temp_s4_2, s16 *, 0xC) = temp_s1_2;
    temp_s4_3 = arg0 + 0x50;
    M2C_FIELD(temp_s4_3, s16 *, 0xC) = temp_s1_2;
    M2C_FIELD(temp_s4_3, s32 *, 4) = (s32) (temp_s2_2 + M2C_FIELD(temp_s4_2, s32 *, 4));
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50) + (u16) M2C_FIELD(temp_s4_3, s16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x60) = temp_v0;
    temp_s4_4 = arg0 + 0x70;
    M2C_FIELD(temp_s4_4, s16 *, 0xE) = temp_s2_2;
    M2C_FIELD(arg0, s32 *, 0x70) = temp_v0;
    M2C_FIELD((arg0 + 0x80), s32 *, 4) = (s32) ((u16) M2C_FIELD(temp_s4_4, s16 *, 0xE) + M2C_FIELD(temp_s4_4, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}
