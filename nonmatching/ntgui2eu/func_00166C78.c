/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00166C78(void *arg0) {
    void *temp_a1;

    temp_a1 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) << 9) + 0xD0) + 0x120;
    M2C_FIELD(temp_a1, s16 *, 0x60) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x4DC) + M2C_FIELD(arg0, u16 *, 0x5A0)));
    M2C_FIELD(temp_a1, s16 *, 0x62) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x4E0) + M2C_FIELD(arg0, u16 *, 0x4D4)));
    M2C_FIELD(temp_a1, s16 *, 0x80) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x5AC) + M2C_FIELD(arg0, u16 *, 0x5A0)));
    M2C_FIELD(temp_a1, s16 *, 0x82) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x4E0) + M2C_FIELD(arg0, u16 *, 0x4D4)));
    M2C_FIELD(temp_a1, s16 *, 0xA0) = (s16) (M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x4DC) + M2C_FIELD(arg0, u16 *, 0x5A0)));
    M2C_FIELD(temp_a1, s16 *, 0xA2) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x4D8) + M2C_FIELD(arg0, u16 *, 0x4D4)));
    M2C_FIELD(temp_a1, s16 *, 0xC0) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x5AC) + M2C_FIELD(arg0, u16 *, 0x5A0)));
    M2C_FIELD(temp_a1, s16 *, 0xC2) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + M2C_FIELD(arg0, u16 *, 0x5D4) + (M2C_FIELD(arg0, u16 *, 0x4D8) + M2C_FIELD(arg0, u16 *, 0x4D4)));
}
