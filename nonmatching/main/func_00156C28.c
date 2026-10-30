/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 ADX_DecodeInfoAiff(s32, s32, s16 *, void *, s32, s32, s32, void *, void *, s32); /* extern */

s16 func_00156C28(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;

    M2C_FIELD(arg0, s16 *, 2) = 1;
    if (ADX_DecodeInfoAiff(arg1, arg2, &sp10, arg0 + 0xC, arg0 + 0xD, arg0 + 0xF, arg0 + 0xE, arg0 + 0x14, arg0 + 0x18, arg0 + 0x10) < 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s8 *, 0xE);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s8 *, 0xF);
    M2C_FIELD(arg0, s16 *, 0x98) = 3;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    if (M2C_FIELD(arg0, s8 *, 0xD) != 8) {
        M2C_FIELD(arg0, s16 *, 0x9C) = 0;
    } else {
        M2C_FIELD(arg0, s16 *, 0x9C) = 1;
    }
    return sp10;
}
