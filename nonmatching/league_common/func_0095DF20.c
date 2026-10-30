/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0094C730();                                /* extern */

s32 func_0095DF20(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = -1;
    temp_v1 = func_0094C730() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 18:
        var_s0 = -2;
        break;
    case 5:
        var_s0 = 0x1A0021;
        break;
    case 11:
    case 10:
        var_s0 = 0x1A0012;
        break;
    case 13:
    case 12:
        var_s0 = 0x1A004F;
        break;
    case 19:
        var_s0 = 0x410013;
        break;
    case 20:
        var_s0 = 0x410045;
        break;
    case 21:
        var_s0 = 0x410046;
        break;
    case 22:
        var_s0 = 0x410047;
        break;
    case 23:
        var_s0 = 0x1A00B8;
        break;
    case 24:
        var_s0 = 0x1A0025;
        break;
    case 25:
        var_s0 = 0x190087;
        break;
    case 26:
        var_s0 = 0x410046;
        break;
    case 27:
        var_s0 = 0x410047;
        break;
    case 28:
        var_s0 = 0x410046;
        break;
    case 29:
        var_s0 = 0x410046;
        break;
    case 39:
        var_s0 = 0x19005B;
        break;
    case 30:
    case 3:
        var_s0 = 0;
        break;
    }
    return var_s0;
}
