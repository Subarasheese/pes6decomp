/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00AF52B0(void *arg0, s32 arg1) {
    u32 temp_v0;

    temp_v0 = arg1 & 0xFF;
    switch (temp_v0) {
    case 0:
        return M2C_FIELD(arg0, u8 *, 4) & 0x7F;
    case 1:
        return M2C_FIELD(arg0, u8 *, 5) & 0x7F;
    case 2:
        return M2C_FIELD(arg0, u8 *, 0xA) & 0x7F;
    case 3:
        return M2C_FIELD(arg0, u8 *, 0xB) & 0x7F;
    case 4:
        return M2C_FIELD(arg0, u8 *, 7) & 0x7F;
    case 5:
        return M2C_FIELD(arg0, u8 *, 2) & 0x7F;
    case 6:
        return M2C_FIELD(arg0, u8 *, 3) & 0x7F;
    case 7:
        return M2C_FIELD(arg0, u8 *, 0x11) & 0x7F;
    case 8:
        return M2C_FIELD(arg0, u8 *, 0x10) & 0x7F;
    case 9:
        return M2C_FIELD(arg0, u8 *, 0xC) & 0x7F;
    case 10:
        return M2C_FIELD(arg0, u8 *, 0xD) & 0x7F;
    case 11:
        return M2C_FIELD(arg0, u8 *, 0xE) & 0x7F;
    case 12:
        return M2C_FIELD(arg0, u8 *, 0xF) & 0x7F;
    case 13:
        return M2C_FIELD(arg0, u8 *, 0x13) & 0x7F;
    case 14:
        return M2C_FIELD(arg0, u8 *, 0x18) & 0x7F;
    case 15:
        return M2C_FIELD(arg0, u8 *, 0x15) & 0x7F;
    case 16:
        return M2C_FIELD(arg0, u8 *, 0x14) & 0x7F;
    case 17:
        return M2C_FIELD(arg0, u8 *, 0x17) & 0x7F;
    case 18:
        return M2C_FIELD(arg0, u8 *, 0x12) & 0x7F;
    case 19:
        return M2C_FIELD(arg0, u8 *, 0x1B) & 0x7F;
    case 20:
        return M2C_FIELD(arg0, u8 *, 8) & 0x7F;
    case 21:
        return M2C_FIELD(arg0, u8 *, 6) & 0x7F;
    case 22:
        return M2C_FIELD(arg0, u8 *, 0x16) & 0x7F;
    default:
        return 0xFF;
    }
}
