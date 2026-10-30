/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00174D90(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5A0);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x5A4);
    M2C_FIELD(arg0, s32 *, 0xB8) = temp_a1;
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (temp_a1 + (M2C_FIELD(arg0, s32 *, 0xD34) * 0x10));
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (temp_a2 + (M2C_FIELD(arg0, s32 *, 0xD38) * 0x10));
    M2C_FIELD(arg0, s32 *, 0xBC) = temp_a2;
}
