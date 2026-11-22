/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern s64 func_00230410(void);
extern s32 func_002E8CB0(s32, s8);

extern void *D_003E7B0C;

void func_0096D5E0(void) {
    s32 temp_v0;

    if (func_00230410() == 1) {
        func_002E8CB0(5, 0);
    } else {
        temp_v0 = func_00226710() & 0xFF;
        switch (temp_v0) {
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
            func_002E8CB0(3, 0);
            break;
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
            func_002E8CB0(0xF, 0);
            break;
        case 0x2F:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
            func_002E8CB0(0x10, 0);
            break;
        default:
            func_002E8CB0(2, 0);
            break;
        }
    }
    M2C_FIELD(D_003E7B0C, s8 *, 0x2F) = 1;
}
