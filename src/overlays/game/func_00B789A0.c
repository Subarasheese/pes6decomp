/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u8 Pes6MatchContext_Stadium[];

u32 func_00B789A0(void) {
    u32 value;

    switch (Pes6MatchContext_Stadium[0]) {
    case 0:
    case 5:
    case 7:
    case 8:
    case 0xb:
    case 0xc:
    case 0x10:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x23:
        value = 1;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x21:
    case 0x22:
    case 0x24:
        value = 0;
        break;
    default:
        value = 0;
    }
    return value;
}
