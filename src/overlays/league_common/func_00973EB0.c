/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00226710(void);

s32 func_00973EB0(void) {
    s32 var_s0;
    u32 temp_v0;

    var_s0 = -1;
    temp_v0 = func_00226710() & 0xFF;
    switch (temp_v0) {
    case 0x3:
        var_s0 = 0x01130050;
        break;
    case 0x2:
        var_s0 = 0x0113004F;
        break;
    case 0x4:
        var_s0 = 0x01130051;
        break;
    case 0x1:
        var_s0 = 0x0113004D;
        break;
    case 0xA:
        var_s0 = 0x0113004E;
        break;
    case 0x0:
        var_s0 = 0x0113004B;
        break;
    case 0x9:
        var_s0 = 0x0113004C;
        break;
    case 0x5:
    case 0x8:
        var_s0 = 0x01130053;
        break;
    case 0x3A:
        var_s0 = 0x0113005E;
        break;
    case 0x6:
    case 0x7:
        var_s0 = 0x01130052;
        break;
    case 0x12:
        var_s0 = 0x01130047;
        break;
    case 0x18:
        var_s0 = 0x01130045;
        break;
    case 0x16:
        var_s0 = 0x01130043;
        break;
    case 0x1A:
        var_s0 = 0x0113003F;
        break;
    case 0xB:
    case 0xD:
        var_s0 = 0x01130049;
        break;
    case 0xF:
        var_s0 = 0x0113003D;
        break;
    case 0x14:
        var_s0 = 0x01130041;
        break;
    case 0x1C:
    case 0x1E:
    case 0x1F:
        var_s0 = 0x01130054;
        break;
    case 0x20:
    case 0x22:
    case 0x23:
        var_s0 = 0x01130055;
        break;
    case 0x1D:
        var_s0 = 0x01130056;
        break;
    case 0x21:
        var_s0 = 0x01130057;
        break;
    case 0x27:
        var_s0 = 0x0113005B;
        break;
    case 0x24:
        var_s0 = 0x01130058;
        break;
    case 0x25:
        var_s0 = 0x01130059;
        break;
    case 0x26:
        var_s0 = 0x0113005A;
        break;
    case 0xC:
    case 0xE:
        var_s0 = 0x0113004A;
        break;
    case 0x10:
    case 0x11:
        var_s0 = 0x0113003E;
        break;
    case 0x13:
        var_s0 = 0x01130048;
        break;
    case 0x15:
        var_s0 = 0x01130042;
        break;
    case 0x17:
        var_s0 = 0x01130044;
        break;
    case 0x19:
        var_s0 = 0x01130046;
        break;
    case 0x1B:
        var_s0 = 0x01130040;
        break;
    }
    return var_s0;
}
