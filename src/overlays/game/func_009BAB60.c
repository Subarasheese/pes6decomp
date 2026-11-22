/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_009BAB60(void *arg0) {
    u16 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u16 *, 6);
    switch (temp_v0) {
    case 0x29E:
    case 0x29F:
    case 0x2A0:
    case 0x2A1:
    case 0x2A2:
    case 0x2A3:
    case 0x2A4:
    case 0x2A5:
        return 1;
    default:
        return 0;
    }
}
