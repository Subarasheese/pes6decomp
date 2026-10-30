/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BD210(s32 arg0) {
    s32 var_t9;
    s32 var_v0;
    u8 temp_v1;

    var_v0 = 0x21;
    var_t9 = 0;
    do {
        temp_v1 = M2C_FIELD((arg0 + var_t9), u8 *, 0x4A);
        switch (temp_v1) {                          /* irregular */
        case 16:
        case 23:
            var_v0 = 0x1F;
            break;
        case 15:
        case 22:
            var_v0 = 0x23;
            break;
        case 30:
            if ((var_v0 & 0xFF) == 0x23) {
                var_v0 = 0x21;
            }
            break;
        case 29:
            if ((var_v0 & 0xFF) == 0x1F) {
                var_v0 = 0x21;
            }
            break;
        }
        var_t9 += 1;
    } while (var_t9 < 0xB);
}
