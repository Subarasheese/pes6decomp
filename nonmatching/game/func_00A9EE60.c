/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3220(s32, s32, s32);
void func_00A9EE60(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220((M2C_FIELD(arg0, u16 *, 0x10C) + ((arg2 & 0xFFFF) * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1))) & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), arg1);
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
}
