/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A08710(void *arg0) {
    s32 var_v0;
    s32 var_v1;
    u16 temp_a0;
    u64 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_a0 = M2C_FIELD(temp_a1, u16 *, 0x30);
    switch (temp_a0) {                              /* irregular */
    default:
        var_v1 = 0;
        break;
    case 0x2CE:
    case 0x2CF:
    case 0x333:
    case 0x2D0:
    case 0x2CC:
    case 0x2CB:
    case 0x2CA:
    case 0x2CD:
        var_v1 = 2;
        break;
    case 0x22E:
    case 0x2A:
    case 0x27:
    case 0x29:
    case 0x28:
        var_v1 = 1;
        break;
    }
    var_v0 = 1;
    if (var_v1 == 1) {
        return 0;
    }
    if (temp_a0 == 0x1DE) {
        return 0;
    }
    temp_v1 = (u64) ((s64) M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 0xD) << 0x38) >> 0x39;
    if (temp_v1 != 0) {
        var_v0 = temp_v1 == 0xB;
    }
    return var_v0;
}
