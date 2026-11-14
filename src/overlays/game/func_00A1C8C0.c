/* compiler: mwcc-3.0.1b151 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

s32 func_00A1B990();

s32 func_00A1C8C0(char *arg0) {
    u8 temp_v1;

    temp_v1 = *(u8 *)(arg0 + 0x16);
    switch (temp_v1) {
    case 0xF:
    case 0x43:
        return 1;
    case 0xA:
        return *(u16 *)(arg0 + 0x18) < 2;
    case 0x4:
        return *(u16 *)(arg0 + 0x18) < 4;
    case 0x26:
    case 0x28:
        return 0;
    case 0x25:
    case 0x24:
        return *(u16 *)(arg0 + 0x18) < 2;
    default:
        return (func_00A1B990() & 0xFF) == 0;
    }
}
