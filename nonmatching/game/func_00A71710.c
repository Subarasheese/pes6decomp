/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009983C0(M2C_UNK);                     /* extern */
s32 func_00A1B990();                                /* extern */

s32 func_00A71710(void *arg0, s32 arg1) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 0x12:
    case 0x43:
    case 0xF:
    case 0x18:
    case 0x2C:
    case 0x4:
    case 0x9:
    case 0x8:
    case 0x6:
    case 0x5:
    case 0x30:
        return 1;
    case 0x10:
        if (arg1 != 0) {
            func_009983C0(1);
        }
        return 0;
    default:
        return (func_00A1B990() & 0xFF) == 0;
    }
}
