/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A0C8D0(void *arg0) {
    u16 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    if (((u64) ((s64) M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 0xD) << 0x38) >> 0x39) == 1) {
        return 0;
    }
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0xBE:
    case 0x11:
    case 0x14:
    case 0x17:
    case 0x16:
    case 0x15:
        return 1;
    case 0x198:
    case 0x18:
        return 0;
    default:
        return (0x1A00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C);
    }
}
