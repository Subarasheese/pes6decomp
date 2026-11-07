/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_00A07C60(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x2CD:
    case 0x2CA:
    case 0x2CB:
    case 0x2CC:
    case 0x2D0:
    case 0x333:
    case 0x2CF:
    case 0x2CE:
        return 2;
    case 0x28:
    case 0x29:
    case 0x27:
    case 0x2A:
    case 0x22E:
        return 1;
    default:
        return 0;
    }
}
