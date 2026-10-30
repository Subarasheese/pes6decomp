/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00166AA8(void *arg0) {
    void *temp_a1;

    temp_a1 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) << 9) + 0xD0) + 0x10;
    M2C_FIELD(temp_a1, u8 *, 0x160) = (u8) M2C_FIELD(arg0, u8 *, 0x5C0);
    M2C_FIELD(temp_a1, u8 *, 0x161) = (u8) M2C_FIELD(arg0, u8 *, 0x5C1);
    M2C_FIELD(temp_a1, u8 *, 0x162) = (u8) M2C_FIELD(arg0, u8 *, 0x5C2);
    M2C_FIELD(temp_a1, s8 *, 0x163) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(arg0, u8 *, 0x5C3)) / 255);
    M2C_FIELD(temp_a1, u8 *, 0x180) = (u8) M2C_FIELD(arg0, u8 *, 0x5C4);
    M2C_FIELD(temp_a1, u8 *, 0x181) = (u8) M2C_FIELD(arg0, u8 *, 0x5C5);
    M2C_FIELD(temp_a1, u8 *, 0x182) = (u8) M2C_FIELD(arg0, u8 *, 0x5C6);
    M2C_FIELD(temp_a1, s8 *, 0x183) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(arg0, u8 *, 0x5C7)) / 255);
    M2C_FIELD(temp_a1, u8 *, 0x1A0) = (u8) M2C_FIELD(arg0, u8 *, 0x5C8);
    M2C_FIELD(temp_a1, u8 *, 0x1A1) = (u8) M2C_FIELD(arg0, u8 *, 0x5C9);
    M2C_FIELD(temp_a1, u8 *, 0x1A2) = (u8) M2C_FIELD(arg0, u8 *, 0x5CA);
    M2C_FIELD(temp_a1, s8 *, 0x1A3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(arg0, u8 *, 0x5CB)) / 255);
    M2C_FIELD(temp_a1, u8 *, 0x1C0) = (u8) M2C_FIELD(arg0, u8 *, 0x5CC);
    M2C_FIELD(temp_a1, u8 *, 0x1C1) = (u8) M2C_FIELD(arg0, u8 *, 0x5CD);
    M2C_FIELD(temp_a1, u8 *, 0x1C2) = (u8) M2C_FIELD(arg0, u8 *, 0x5CE);
    M2C_FIELD(temp_a1, s8 *, 0x1C3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(arg0, u8 *, 0x5CF)) / 255);
}
