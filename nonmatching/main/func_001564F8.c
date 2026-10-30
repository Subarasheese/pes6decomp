/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001564F8(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC0) != 0) {
        M2C_FIELD(arg0, s8 *, 0xE) = 1;
        M2C_FIELD(arg0, s8 *, 0xD) = 0x10;
        M2C_FIELD(arg0, s32 *, 0x18) = 0x7FFFFFFF;
        M2C_FIELD(arg0, s8 *, 0xF) = 0x7F;
        M2C_FIELD(arg0, s16 *, 0x98) = 0xF;
        M2C_FIELD(arg0, s32 *, 0x50) = 1;
        M2C_FIELD(arg0, s32 *, 0x54) = 0x7F;
        M2C_FIELD(arg0, s32 *, 0x58) = 0x600;
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        M2C_FIELD(arg0, s16 *, 2) = 1;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x600;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        M2C_FIELD(arg0, s16 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 0x24) = 0;
        M2C_FIELD(arg0, s16 *, 0x26) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0xBB80;
        var_v0 = 1;
    }
    return var_v0;
}
