/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u64 func_002282E0(void *arg0, u32 arg1) {
    switch (arg1) {
    case 0:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 2) << 0x38) >> 0x3F;
    case 2:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 3) << 0x38) >> 0x3F;
    case 3:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 4) << 0x38) >> 0x3F;
    case 4:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 5) << 0x38) >> 0x3F;
    case 5:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 6) << 0x38) >> 0x3F;
    case 6:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x38) >> 0x3F;
    case 7:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 8) << 0x38) >> 0x3F;
    case 8:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 9) << 0x38) >> 0x3F;
    case 9:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 0xA) << 0x38) >> 0x3F;
    case 10:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 0xB) << 0x38) >> 0x3F;
    case 11:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 0xD) << 0x38) >> 0x3F;
    case 12:
        return (u64) ((s64) M2C_FIELD(arg0, u8 *, 0xD) << 0x38) >> 0x3F;
    default:
        return 0U;
    }
}
