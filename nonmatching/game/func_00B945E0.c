/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BC13A0(M2C_UNK);                         /* extern */

s32 func_00B945E0(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00BBB8C0(5);
    switch (temp_v0) {                              /* irregular */
    case 3:
        var_v0 = func_00BC13A0(0x3F);
        break;
    case 2:
        var_v0 = func_00BC13A0(0x40);
        break;
    case 1:
        var_v0 = func_00BC13A0(0x3E);
        break;
    default:
        var_v0 = func_00BC13A0(0x41);
        break;
    }
    return var_v0 & 0xFFFF;
}
