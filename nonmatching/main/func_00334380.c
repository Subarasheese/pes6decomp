/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_003338C0(void *, M2C_UNK, s32, s32);   /* extern */
M2C_UNK func_00334030(s16 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_00334380(void *arg0, s32 arg1, s32 arg2) {
    s16 sp4C;
    s16 sp4E;

    if (arg1 != 1) {

    } else {
        M2C_FIELD(arg0, s32 *, 0) = 0xD;
        M2C_FIELD(arg0, s32 *, 4) = 0xD;
        M2C_FIELD(arg0, s16 *, 0x28) = -1;
        M2C_FIELD(arg0, s16 *, 0x2A) = -1;
        M2C_FIELD(arg0, s32 *, 8) = 0xD;
        M2C_FIELD(arg0, s32 *, 0xC) = 0xD;
        M2C_FIELD(arg0, s32 *, 0x10) = 0xD;
        M2C_FIELD(arg0, s32 *, 0x14) = 0xD;
        M2C_FIELD(arg0, s32 *, 0x18) = 0xD;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xD;
        M2C_FIELD(arg0, s32 *, 0x20) = 0xD;
        M2C_FIELD(arg0, s32 *, 0x24) = 0xD;
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
        M2C_FIELD(arg0, s8 *, 0x34) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x35) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x36) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x37) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x38) = 6;
        M2C_FIELD(arg0, s8 *, 0x3C) = 0;
        M2C_FIELD(arg0, s8 *, 0x3D) = 0;
        M2C_FIELD(arg0, s16 *, 0x3E) = 0;
        M2C_FIELD(arg0, s16 *, 0x40) = 0;
        M2C_FIELD(arg0, s16 *, 0x42) = 0;
        M2C_FIELD(arg0, s8 *, 0x39) = 0;
        M2C_FIELD(arg0, s8 *, 0x3A) = 0;
        sp4C = 0;
        sp4E = 0;
        func_00334030(&sp4C, 0, 0xD, 1);
        func_003338C0(arg0, 0, arg2, arg1);
    }
    return 1;
}
