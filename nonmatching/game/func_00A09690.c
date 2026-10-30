/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00287230(M2C_UNK, void *);                 /* extern */

u16 func_00A09690(void *arg0) {
    s32 var_v0;
    u16 temp_v0;
    u16 temp_v1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a2, u16 *, 0x30);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x26);
    switch (temp_v1) {                              /* irregular */
    case 0x313:
    case 0x16F:
    case 0xC0:
    case 0x236:
    case 0x30C:
    case 0x306:
    case 0x2D8:
    case 0x2D9:
    case 0x2E5:
    case 0x36:
    case 0x5B:
    case 0xC8:
    case 0xB7:
    case 0x3:
    case 0xC1:
    case 0x130:
    case 0x39:
    case 0x3A:
    case 0x1F:
    case 0x235:
    case 0x56:
    case 0x1D:
    case 0x3E:
    case 0x4C:
    case 0x4A:
    case 0x10B:
    case 0x4D:
    case 0x3D:
    case 0x58:
    case 0x2E:
        var_v0 = func_00287230(0, temp_a2);
block_53:
        return var_v0 & 0xFFFF;
    case 0x16E:
    case 0x2FA:
        var_v0 = (temp_v0 & 0xFFFF) + (((M2C_FIELD(temp_a2, u8 *, 0x2D) != 0) ? -1 : 1) * 0x5000);
        goto block_53;
    case 0xBC:
    case 0x49:
    case 0x24:
    case 0x2B5:
    case 0x38E:
    case 0x2C6:
    case 0x1C:
    case 0x228:
    case 0x2D6:
    case 0x2D7:
    case 0x5C:
    case 0x63:
    case 0x59:
    case 0x5A:
    case 0x4F:
    case 0x2FE:
    case 0x30E:
        var_v0 = func_00287230(6, temp_a2);
        goto block_53;
    default:
        return temp_v0;
    }
}
