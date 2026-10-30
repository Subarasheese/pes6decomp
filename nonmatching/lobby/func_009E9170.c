/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
s32 func_009F42A0(s32);                             /* extern */

s32 func_009E9170(void *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_009F42A0(func_00985C70());
    M2C_FIELD(arg0, s32 *, 0x6C) = temp_v0;
    switch (temp_v0) {                              /* irregular */
    case 2:
        break;
    default:
    case 1:
        func_0026E840(0x8C008005);
        var_s0 = 3;
        break;
    case 3:
        var_s0 = 1;
        M2C_FIELD(arg0, s8 *, 0x5C) = 1;
        break;
    }
    if (var_s0 != 0) {
        func_0099D030(0);
    }
    return var_s0;
}
