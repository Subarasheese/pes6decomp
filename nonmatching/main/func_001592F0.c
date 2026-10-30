/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001591D0(s32, s32, s16 *, void *, void *, s32, s32, void *, void *, s32, void *); /* extern */

s16 func_001592F0(void *arg0, s32 arg1, s32 arg2) {
    s16 sp20;

    M2C_FIELD(arg0, s16 *, 2) = 1;
    if (func_001591D0(arg1, arg2, &sp20, arg0 + 0xC, arg0 + 0xD, arg0 + 0xF, arg0 + 0xE, arg0 + 0x14, arg0 + 0x18, arg0 + 0x10, arg0 + 0x9C) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s16 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 0x26) = 0;
        M2C_FIELD(arg0, s16 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s8 *, 0xE);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s8 *, 0xF);
        M2C_FIELD(arg0, s16 *, 0x98) = 2;
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        return sp20;
    }
    return 0;
}
