/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00292D80(s32 arg0) {
    s32 c = arg0 & 0xFF;

    if (c == 0) return 0;
    if (c == 5) return 3;
    if (c == 4) return 2;
    if (c < 8) return 1;
    if (c == 8) return 4;
    if (c == 9) return 5;
    if (c < 0xF) return 6;
    if (c == 0xF) return 7;
    if (c == 0x10) return 8;
    if (c < 0x16) return 9;
    if (c == 0x16) return 0xA;
    if (c == 0x17) return 0xB;
    if (c < 0x1D) return 0xC;
    if (c == 0x1D) return 0xD;
    if (c == 0x1E) return 0xE;
    if (c < 0x24) return 0xF;
    if (c < 0x29) return 0x10;
    return 0;
}
