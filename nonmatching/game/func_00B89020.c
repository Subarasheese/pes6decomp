/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B89020(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0x4F9:
        return 0x682;
    case 0x4F8:
        return 0x115C;
    case 0x4F7:
        return 0x682;
    case 0x4F6:
        return 0x1388;
    case 0x502:
        return 0x1194;
    default:
        return 0;
    }
}
