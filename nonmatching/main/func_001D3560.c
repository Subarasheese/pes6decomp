/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003992E0[];

void func_001D3560(u16 *arg0) {
    s32 temp_v1;
    s64 var_a3;
    s64 var_a4;
    s64 var_a5;
    u16 temp_a2;

    temp_a2 = *arg0;
    var_a5 = 0;
    var_a4 = 0;
    temp_v1 = temp_a2 & 0xF;
    var_a3 = 0;
    switch (temp_v1) {                              /* irregular */
    case 3:
        if (!(temp_a2 & 0x40)) {
            if (!(temp_a2 & 0x80)) {
                var_a5 = 3;
            } else {
                var_a5 = 5;
            }
        } else {
        case 4:
            var_a5 = 4;
        }
        break;
    case 2:
        if (!(temp_a2 & 0x40)) {
            var_a5 = 1;
        } else {
            var_a5 = 2;
        }
        break;
    }
    if (temp_a2 & 0x10) {
        var_a4 = 1;
    }
    if (temp_a2 & 0x20) {
        var_a3 = 1;
    }
    (*(s64 *)D_003992E0) = (((((s64) (var_a3 << 0x20) >> 0x20) * 0x10) | (((s64) (var_a5 << 0x20) >> 0x20) | (((s64) (var_a4 << 0x20) >> 0x20) * 8)) | 0x60) << 0x2F) | (0x8000 | (0x10004000 << 0x20));
}
