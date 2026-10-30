/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_009D5ED0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x66) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 0x28) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xD));
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0x274;
}
