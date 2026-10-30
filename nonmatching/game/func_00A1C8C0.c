/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A1B990();                                /* extern */

s32 func_00A1C8C0(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 0x4:
        return (s32) M2C_FIELD(arg0, u16 *, 0x18) < 4;
    case 0xA:
        return (s32) M2C_FIELD(arg0, u16 *, 0x18) < 2;
    case 0x43:
    case 0xF:
        return 1;
    case 0x28:
    case 0x26:
        return 0;
    case 0x24:
    case 0x25:
        return (s32) M2C_FIELD(arg0, u16 *, 0x18) < 2;
    default:
        return (func_00A1B990() & 0xFF) == 0;
    }
}
