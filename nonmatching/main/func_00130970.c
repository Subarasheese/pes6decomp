/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003FB788;
extern void *D_003FB78C;

void func_00130970(void *arg0) {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    void *temp_a4;
    void *temp_v1;

    temp_a4 = D_003FB788;
    temp_v1 = D_003FB78C;
    D_003FB788 = temp_a4 + 0xC;
    D_003FB78C = temp_v1 + 0xC;
    sp1C = M2C_FIELD(temp_a4, u16 *, 0) | (M2C_FIELD(temp_a4, u16 *, 2) << 0x10);
    M2C_FIELD(arg0, s32 *, 0xA0) = sp1C;
    sp18 = M2C_FIELD(temp_a4, u16 *, 4) | (M2C_FIELD(temp_a4, u16 *, 6) << 0x10);
    M2C_FIELD(arg0, s32 *, 0xA4) = sp18;
    sp14 = M2C_FIELD(temp_a4, u16 *, 8) | (M2C_FIELD(temp_a4, u16 *, 0xA) << 0x10);
    M2C_FIELD(arg0, s32 *, 0xA8) = sp14;
    sp10 = M2C_FIELD(temp_v1, u16 *, 0) | (M2C_FIELD(temp_v1, u16 *, 2) << 0x10);
    M2C_FIELD(arg0, s32 *, 0xB0) = sp10;
    spC = M2C_FIELD(temp_v1, u16 *, 4) | (M2C_FIELD(temp_v1, u16 *, 6) << 0x10);
    M2C_FIELD(arg0, s32 *, 0xB4) = spC;
    sp8 = M2C_FIELD(temp_v1, u16 *, 8) | (M2C_FIELD(temp_v1, u16 *, 0xA) << 0x10);
    M2C_FIELD(arg0, s32 *, 0xB8) = sp8;
}
