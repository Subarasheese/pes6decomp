/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00955F10(s32);
extern void func_00955FB0(void);

void func_00B77740(s32 arg0) {
    s32 var_s0;
    u32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    var_s0 = 0;
    switch (temp_v0) {
    case 0:
        var_s0 = 0x01110014;
        break;
    case 13:
        var_s0 = 0x01110035;
        break;
    case 1:
        var_s0 = 0x01110015;
        break;
    case 4:
        var_s0 = 0x01110010;
        break;
    case 3:
        var_s0 = 0x01110012;
        break;
    case 2:
        var_s0 = 0x01110011;
        break;
    case 5:
        var_s0 = 0x0111000E;
        break;
    case 7:
        var_s0 = 0x0111000B;
        break;
    case 9:
        var_s0 = 0x0111002A;
        break;
    case 6:
        var_s0 = 0x01110034;
        break;
    case 8:
        var_s0 = 0x0111000A;
        break;
    case 10:
        var_s0 = 0x01110029;
        break;
    case 12:
        var_s0 = 0x0111002B;
        break;
    case 11:
        var_s0 = 0x01110016;
        break;
    default:
        func_00955FB0();
        break;
    }
    func_00955F10(var_s0);
}
