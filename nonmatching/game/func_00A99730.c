/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A99730(void *arg0, s32 arg1) {
    s32 var_a1;
    u16 temp_v1;

    var_a1 = arg1;
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0xA:
        if (var_a1 < 0x5801) {
            var_a1 = 0x5800;
        }
        break;
    case 0xEE:
    case 0xCA:
    case 0x244:
    case 0xC9:
        if (var_a1 < 0x4401) {
            var_a1 = 0x4400;
        }
        break;
    default:
        if (var_a1 < 0x3001) {
            var_a1 = 0x3000;
        }
        break;
    }
    return var_a1;
}
