/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s8 D_003E9F08;
extern s8 D_003E9F0C;
extern s8 D_003E9F10;

s32 func_003197F0(void *arg0) {
    D_003E9F10 = 0;
    D_003E9F0C = 0;
    D_003E9F08 = 0;
    M2C_FIELD(arg0, u8 *, 5) = 0xFF;
    M2C_FIELD(arg0, u8 *, 4) = 0xFF;
    M2C_FIELD(arg0, u8 *, 9) = 0xFF;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
    M2C_FIELD(arg0, u8 *, 0x38) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x39) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x3A) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x3B) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0x42) = 0;
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x32) = 0;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    return 1;
}
