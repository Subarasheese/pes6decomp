/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_0031BC70(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s8 *, 0x60) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x31C) = 0;
        M2C_FIELD(arg0, s32 *, 0x320) = 0;
        M2C_FIELD(arg0, s8 *, 0x3A8) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x3AC) = 0x8F8F8F8F;
        M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x3B4) = 0;
        /* fallthrough */
    case 2:
        M2C_FIELD(arg0, s8 *, 0x4B) = 0;
        M2C_FIELD(arg0, s8 *, 0xD) = 0xFF;
        func_001C48E8(arg0 + 0x18, 0xFFFF6235, 0x20);
        /* fallthrough */
    case 4:
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        func_001C48E8(arg0 + 0x3C, 0xFF, 4);
        M2C_FIELD(arg0, s8 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        func_001C48E8(arg0 + 0x74, 0, 0x280);
        func_001C48E8(arg0 + 0x2F4, 0xABABABAB, 0x18);
        break;
    }
    return 1;
}
