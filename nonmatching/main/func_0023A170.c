/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
s32 func_0023A170(void) {
    s32 temp_v0;

    temp_v0 = func_00226710() & 0xFF;
    switch (temp_v0) {                              /* irregular */
    case 0x39:
        return 1;
    case 0x2D:
    case 0x20:
    case 0x1C:
    case 0x27:
    case 0x26:
    case 0x21:
    case 0x1D:
    case 0x1B:
    case 0x19:
    case 0x17:
    case 0x15:
    case 0x13:
    case 0x11:
    case 0xE:
    case 0xC:
    case 0x3A:
    case 0xA:
    case 0x9:
    case 0x8:
    case 0x5:
    case 0x4:
    case 0x3:
    case 0x2:
        return 1;
    default:
        return 0;
    }
}
