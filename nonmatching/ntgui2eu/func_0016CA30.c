/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016CA30(void *arg0) {
    s16 temp_a1;
    s16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a2;

    temp_a2 = arg0 + 0x910 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x140) + 0x40080);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x4DC) + M2C_FIELD(arg0, s32 *, 0x5A0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x4E0) + M2C_FIELD(arg0, s32 *, 0x4D4);
    temp_a0 = temp_a2 + 0x70;
    M2C_FIELD(temp_a0, s16 *, 0x12) = temp_v1;
    M2C_FIELD(temp_a0, s16 *, 0x10) = temp_a1;
    temp_a0_2 = temp_a2 + 0x90;
    M2C_FIELD(temp_a0_2, s16 *, 0x10) = temp_a1;
    M2C_FIELD(temp_a0_2, s16 *, 0x12) = (s16) (temp_v1 - M2C_FIELD(arg0, u16 *, 0x40C40));
    temp_a0_3 = temp_a2 + 0xB0;
    M2C_FIELD(temp_a0_3, s16 *, 0x12) = temp_v1;
    M2C_FIELD(temp_a0_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x40C40) + temp_a1);
    temp_a0_4 = temp_a2 + 0xD0;
    M2C_FIELD(temp_a0_4, s16 *, 0x10) = temp_a1;
    M2C_FIELD(temp_a0_4, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x40C40) + temp_v1);
    temp_a0_5 = temp_a2 + 0xF0;
    M2C_FIELD(temp_a0_5, s16 *, 0x12) = temp_v1;
    M2C_FIELD(temp_a0_5, s16 *, 0x10) = (s16) (temp_a1 - M2C_FIELD(arg0, u16 *, 0x40C40));
    temp_a0_6 = temp_a2 + 0x110;
    M2C_FIELD(temp_a0_6, s16 *, 0x10) = temp_a1;
    M2C_FIELD(temp_a0_6, s16 *, 0x12) = (s16) (temp_v1 - M2C_FIELD(arg0, u16 *, 0x40C40));
}
