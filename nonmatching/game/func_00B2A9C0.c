/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BAC710(u16);                             /* extern */

s32 func_00B2A9C0(void **arg0) {
    f32 var_f1;
    s32 temp_v0;
    s32 var_s0;
    u16 temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30);
    var_s0 = 0;
    if ((s32) temp_a0 >= 0x59A) {
        temp_v0 = func_00BAC710(temp_a0);
        switch (temp_v0) {                          /* irregular */
        case 0x102:
            var_s0 = 0xCC;
            break;
        case 0xFE:
            var_s0 = 0x19E;
            break;
        case 0x1C5:
            var_s0 = 0x18E;
            break;
        case 0x41:
            var_s0 = 0x140;
            break;
        case 0x8B:
            var_s0 = 0x9E;
            break;
        case 0x8A:
            var_s0 = 0xB0;
            break;
        case 0x5A:
            var_s0 = 0x19A;
            break;
        case 0x1C:
            var_s0 = 0x5C;
            break;
        case 0x1D4:
            var_s0 = 0x152;
            break;
        case 0x1C6:
            var_s0 = 0xD4;
            break;
        case 0x1B7:
            var_s0 = 0x3E;
            break;
        case 0x191:
            var_s0 = 0xDC;
            break;
        case 0x189:
            var_s0 = 0xC4;
            break;
        case 0x15F:
            var_s0 = 0xFE;
            break;
        case 0x10A:
            var_s0 = 0xD4;
            break;
        case 0x104:
            var_s0 = 0x122;
            break;
        case 0xA6:
            var_s0 = 0xA4;
            break;
        case 0xA4:
            var_s0 = 0x38;
            break;
        case 0x59:
            var_s0 = 0x116;
            break;
        case 0x52:
            var_s0 = 0x9C;
            break;
        case 0x51:
            var_s0 = 0xB8;
            break;
        case 0x4A:
            var_s0 = 0xC4;
            break;
        case 0x49:
            var_s0 = 0x158;
            break;
        case 0x48:
            var_s0 = 0x9C;
            break;
        case 0x2F:
            var_s0 = 0xB2;
            break;
        case 0x2A:
            var_s0 = 0xB0;
            break;
        case 0x29:
            var_s0 = 0x36;
            break;
        case 0x1E:
            var_s0 = 0x18;
            break;
        case 0x1D:
            var_s0 = 0xB4;
            break;
        case 0xE:
            var_s0 = 0xA0;
            break;
        }
    }
    if (var_s0 != 0) {
        var_f1 = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), f32 *, 0x28);
        if (!(var_f1 <= 1.0f)) {
            var_f1 = 1.0f;
        }
        var_s0 = (s32) ((f32) var_s0 - var_f1);
    }
    return var_s0;
}
