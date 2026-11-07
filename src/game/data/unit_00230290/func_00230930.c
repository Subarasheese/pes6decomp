/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern u8 func_00226710(void);
s32 func_0022B0A0();

s32 func_00230930(void) {
    int a = (func_00309420() != 0); if (a == 1) return 0;
    switch (func_00226710()) {
    case 2: case 3: case 4: case 5: case 7: case 8: case 9: case 0xA: case 0x3A: case 0xC: case 0xE:
    case 0x11: case 0x13: case 0x15: case 0x17: case 0x19: case 0x1B: case 0x1D: case 0x21: case 0x26:
    case 0x27: case 0x2D: case 0x39:
        break;
    default:
        return 0;
    }
    return func_0022B0A0();
}
