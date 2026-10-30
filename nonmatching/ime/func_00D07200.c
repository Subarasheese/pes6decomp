/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_00D07200(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = -1;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (arg0 != NULL) {
            func_001C48E8(arg0 + 0x18, 0, 0x21);
        }
        if (arg0 != NULL) {
            func_001C48E8(arg0 + 0x39, 0, 0x101);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        M2C_FIELD(arg0, s32 *, 0x14) = -1;
        M2C_FIELD(arg0, s32 *, 0x144) = 5;
        M2C_FIELD(arg0, s32 *, 0x148) = 0;
        M2C_FIELD(arg0, s32 *, 0x13C) = 0;
        M2C_FIELD(arg0, s8 *, 0x140) = 0;
        M2C_FIELD(arg0, s8 *, 0x141) = 0;
        M2C_FIELD(arg0, s8 *, 0x142) = 0;
        M2C_FIELD(arg0, s8 *, 0x143) = 0;
        return 0;
    }
    return 1;
}
