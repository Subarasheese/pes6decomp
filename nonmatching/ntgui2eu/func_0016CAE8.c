/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016CAE8(void *arg0) {
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a4_3;
    void *temp_a4_4;
    void *temp_a4_5;
    void *temp_a4_6;

    temp_a2 = arg0 + 0x910;
    temp_a2_2 = temp_a2 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x140) + 0x40080);
    M2C_FIELD(temp_a2_2, u8 *, 0x70) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40320);
    temp_a4 = temp_a2_2 + 0x70;
    M2C_FIELD(temp_a4, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40321);
    M2C_FIELD(temp_a4, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40322);
    M2C_FIELD(temp_a4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x40323)) / 255);
    temp_a4_2 = temp_a2_2 + 0x90;
    M2C_FIELD(temp_a2_2, u8 *, 0x90) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40324);
    M2C_FIELD(temp_a4_2, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40325);
    M2C_FIELD(temp_a4_2, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40326);
    M2C_FIELD(temp_a4_2, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x40327)) / 255);
    temp_a4_3 = temp_a2_2 + 0xB0;
    M2C_FIELD(temp_a2_2, u8 *, 0xB0) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40324);
    M2C_FIELD(temp_a4_3, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40325);
    M2C_FIELD(temp_a4_3, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40326);
    M2C_FIELD(temp_a4_3, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x40327)) / 255);
    temp_a4_4 = temp_a2_2 + 0xD0;
    M2C_FIELD(temp_a2_2, u8 *, 0xD0) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40324);
    M2C_FIELD(temp_a4_4, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40325);
    M2C_FIELD(temp_a4_4, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40326);
    M2C_FIELD(temp_a4_4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x40327)) / 255);
    temp_a4_5 = temp_a2_2 + 0xF0;
    M2C_FIELD(temp_a2_2, u8 *, 0xF0) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40324);
    M2C_FIELD(temp_a4_5, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40325);
    M2C_FIELD(temp_a4_5, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40326);
    M2C_FIELD(temp_a4_5, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x40327)) / 255);
    temp_a4_6 = temp_a2_2 + 0x110;
    M2C_FIELD(temp_a2_2, u8 *, 0x110) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40324);
    M2C_FIELD(temp_a4_6, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40325);
    M2C_FIELD(temp_a4_6, u8 *, 2) = (u8) M2C_FIELD(temp_a2, u8 *, 0x40326);
    M2C_FIELD(temp_a4_6, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a2, u8 *, 0x40327)) / 255);
}
