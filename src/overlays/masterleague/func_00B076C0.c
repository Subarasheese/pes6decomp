/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001F08B0(s32);
extern void func_002F4130(void *, s32, s32, s32);

void func_00B076C0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_a0;
    u32 temp_v0;

    var_a0 = arg0;
    temp_v0 = arg1 & 0xFF;
    temp_s0 = var_a0;
    switch (temp_v0) {
    case 2:
        var_a0 = 0x1F0000;
        break;
    case 3:
        var_a0 = 0x1F0000;
        break;
    case 4:
        var_a0 = 0x1F0000;
        break;
    case 5:
        var_a0 = 0x1F0000;
        break;
    case 6:
        var_a0 = 0x1F0000;
        break;
    case 7:
        var_a0 = 0x1F0000;
        break;
    case 8:
        var_a0 = 0x1D00A4;
        break;
    case 10:
        var_a0 = 0x1F002C;
        break;
    case 11:
        var_a0 = 0x1F0000;
        break;
    case 9:
        var_a0 = 0x1F0003;
        break;
    }
    func_002F4130((void *) temp_s0, 0, 0, func_001F08B0(var_a0));
}
