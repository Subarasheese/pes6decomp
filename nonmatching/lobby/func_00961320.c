/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00817450(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00831270(s32);                             /* extern */
s32 func_008313A0(s32);                             /* extern */
s32 func_00831830();                                /* extern */
M2C_UNK func_00842290(s32, s32);                    /* extern */

s32 func_00961320(void) {
    s32 temp_s0;
    s32 var_s1;

    temp_s0 = func_00831830() & 0xFFFF;
    if (((temp_s0 < 0xDE) || (temp_s0 >= 0xFE)) && (temp_s0 != 0x35)) {

    } else {
        var_s1 = 0;
        do {
            func_00842290(var_s1, func_008313A0(var_s1) & 0xFF);
            func_00842290(var_s1, func_00831270(var_s1));
            var_s1 += 1;
        } while (var_s1 < 0x20);
        func_00817450(temp_s0, 0x126, 1);
    }
    return 4;
}
