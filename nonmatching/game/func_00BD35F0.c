/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD35F0(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0x4FB:
        return 0;
    case 0x412:
        return 0x24C3;
    case 0x57D:
        return 0x1D4C;
    case 0x58D:
        return 0x222E;
    case 0x584:
        return 0x4E2;
    case 0x57F:
        return 0x4E2;
    case 0x57E:
        return 0x1D4C;
    case 0x535:
        return 0;
    case 0x58E:
        return 0xEA6;
    case 0x58F:
        return 0xEA6;
    case 0x56D:
        return 0x3E8;
    case 0x56E:
        return 0x1B58;
    case 0x56F:
        return 0x1770;
    case 0x523:
        return 0x2134;
    case 0x522:
        return 0x2328;
    case 0x4F3:
        return 0x1388;
    case 0x4F2:
        return 0x1388;
    case 0x50F:
        return 0x1E61;
    case 0x542:
        return 0x1388;
    case 0x3F8:
        return 0x15D4;
    case 0x544:
        return 0xFA0;
    case 0x54F:
        return 0x1B58;
    case 0x54E:
        return 0x1B58;
    case 0x54D:
        return 0x3E8;
    case 0x538:
        return 0x11E7;
    case 0x539:
        return 0x256F;
    case 0x4D4:
        return 0x2328;
    case 0x4D3:
        return 0x2328;
    case 0x550:
        return 0;
    case 0x54B:
        return 0xFA0;
    case 0x547:
        return 0x7D0;
    case 0x546:
        return 0x1046;
    case 0x4CF:
        return 0;
    case 0x4CE:
        return 0;
    case 0x54A:
        return 0x1388;
    case 0x4E9:
        return 0x3E8;
    case 0x516:
        return 0x208D;
    case 0x521:
        return 0x2328;
    case 0x50E:
        return 0xDAC;
    case 0x50D:
        return 0x2328;
    case 0x552:
        return 0x1F40;
    default:
        return 0xFFFF & 0xFFFF;
    }
}
