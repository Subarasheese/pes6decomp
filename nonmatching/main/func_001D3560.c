/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_003992E0[];

void func_001D3560(u16 *arg0) {
    s32 temp_v1;
    s64 var_a3;
    s64 var_a4;
    s64 var_a5;
    u16 temp_a2;
    s64 hi;

    temp_a2 = *arg0;
    var_a5 = 0;
    var_a4 = 0;
    temp_v1 = temp_a2 & 0xF;
    var_a3 = 0;
    if (temp_v1 == 4) {
        var_a5 = 4;
    } else if (temp_v1 == 3) {
        if (temp_a2 & 0x40) {
            var_a5 = 4;
        } else if (!(temp_a2 & 0x80)) {
            var_a5 = 3;
        } else {
            var_a5 = 5;
        }
    } else if (temp_v1 == 2) {
        if (!(temp_a2 & 0x40)) {
            var_a5 = 1;
        } else {
            var_a5 = 2;
        }
    }
    if (temp_a2 & 0x10) {
        var_a4 = 1;
    }
    if (temp_a2 & 0x20) {
        var_a3 = 1;
    }
    hi = 0x10004000;
    (*(s64 *)D_003992E0) = ((var_a3 * 0x10 | (var_a5 | var_a4 * 8) | 0x60) << 0x2F) | (0x8000 | (hi << 0x20));
}
