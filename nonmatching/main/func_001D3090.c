/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001D3090(void *arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0);
    var_a1 = 2;
    if (temp_v1 & 0x20) {
        var_a1 = 5;
    }
    temp_v0 = temp_v1 & 0xF;
    switch (temp_v1) {                              /* irregular */
    case 0x4:
    case 0x3:
    case 0x2:
        var_a1 = var_a1 + 1 + (temp_v0 * M2C_FIELD(arg0, u16 *, 2));
        break;
    case 0x14:
    case 0x13:
    case 0x12:
        var_v0 = M2C_FIELD(arg0, u16 *, 2) * (temp_v0 * 2);
block_33:
        var_a1 += var_v0;
        break;
    case 0x34:
    case 0x33:
    case 0x24:
    case 0x23:
        var_v0 = M2C_FIELD(arg0, u16 *, 2) * (temp_v0 * 3);
        goto block_33;
    case 0x43:
    case 0x42:
        var_a1 = var_a1 + 1 + ((temp_v0 + M2C_FIELD(arg0, u16 *, 2)) - 1);
        break;
    case 0x193:
    case 0x93:
    case 0x183:
    case 0x83:
    case 0x53:
    case 0x52:
        var_v0 = ((temp_v0 + M2C_FIELD(arg0, u16 *, 2)) - 1) * 2;
        goto block_33;
    case 0x1B3:
    case 0xB3:
    case 0x1A3:
    case 0xA3:
    case 0x73:
    case 0x63:
        var_v0 = ((temp_v0 + M2C_FIELD(arg0, u16 *, 2)) - 1) * 3;
        goto block_33;
    }
    return var_a1 * 0x10;
}
