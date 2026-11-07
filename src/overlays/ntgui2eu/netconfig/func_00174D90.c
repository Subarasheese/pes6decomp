/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
void func_00174D90(void *arg0) {
    s32 a1 = M2C_FIELD(arg0, s32 *, 0x5A0);
    s32 a2 = M2C_FIELD(arg0, s32 *, 0x5A4);
    M2C_FIELD(arg0, s32 *, 0xB8) = a1;
    M2C_FIELD(arg0, s32 *, 0xBC) = a2;
    M2C_FIELD(arg0, s32 *, 0xC0) = a1 + (M2C_FIELD(arg0, s32 *, 0xD34) * 0x10);
    M2C_FIELD(arg0, s32 *, 0xC4) = a2 + (M2C_FIELD(arg0, s32 *, 0xD38) * 0x10);
}
