/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00166A50(void *arg0) {
    void *temp_v1;

    temp_v1 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) << 9) + 0xD0) + 0x10;
    M2C_FIELD(temp_v1, u8 *, 0x60) = (u8) M2C_FIELD(arg0, u8 *, 0x5D0);
    M2C_FIELD(temp_v1, u8 *, 0x61) = (u8) M2C_FIELD(arg0, u8 *, 0x5D1);
    M2C_FIELD(temp_v1, u8 *, 0x62) = (u8) M2C_FIELD(arg0, u8 *, 0x5D2);
    M2C_FIELD(temp_v1, s8 *, 0x63) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(arg0, u8 *, 0x5D3)) / 255);
}
