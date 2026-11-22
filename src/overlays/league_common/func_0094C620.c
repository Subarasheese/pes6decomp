/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00226710(void);
extern void func_0094BE40(s32, s32);
extern void func_0094C330(s32, s32);

void func_0094C620(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00226710() & 0xFF;
    switch (temp_v0) {
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
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
        func_0094C330(arg0, arg1);
        return;
    default:
        func_0094BE40(arg0, arg1);
        return;
    }
}
