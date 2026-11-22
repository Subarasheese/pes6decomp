/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6SaveData_IsUnavailable(void);

s32 func_002262E0(s32 arg0) {
    u32 value;

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0x11;
    }
    value = (0xFF & arg0);
    switch (value) {
    case 0x0:
    case 0x1:
    case 0x7:
    case 0x10:
    case 0x24:
    case 0x25:
    case 0x28:
    case 0x29:
    case 0x2C:
    case 0x2F:
    case 0x32:
    case 0x33:
    case 0x38:
        return 2;
    case 0x2:
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x8:
    case 0x9:
    case 0xA:
    case 0xC:
    case 0xE:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x17:
    case 0x19:
    case 0x1B:
    case 0x1D:
    case 0x21:
    case 0x26:
    case 0x27:
    case 0x2A:
    case 0x2B:
    case 0x2D:
    case 0x30:
    case 0x31:
    case 0x35:
    case 0x37:
    case 0x39:
    case 0x3A:
        return 1;
    case 0x6:
        return 3;
    case 0xB:
    case 0xD:
    case 0xF:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x18:
    case 0x1A:
    case 0x1C:
    case 0x1E:
    case 0x20:
    case 0x22:
    case 0x2E:
    case 0x34:
    case 0x36:
        return 0;
    case 0x1F:
    case 0x23:
        return 5;
    default:
        return 6;
    }
}
