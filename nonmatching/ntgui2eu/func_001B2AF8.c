/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK func_001B3DC0;
extern M2C_UNK func_001B3E28;
extern M2C_UNK func_001B3EA8;
extern M2C_UNK func_001B3F10;

void func_001B2AF8(void *arg0, s16 arg1, s16 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg3;
    M2C_FIELD(arg0, s16 *, 0xC) = arg1;
    M2C_FIELD(arg0, s16 *, 0xE) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_001B3DC0;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_001B3E28;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &func_001B3EA8;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &func_001B3F10;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, void **, 0x1C) = arg0;
}
