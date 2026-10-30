/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s8 *, s32, s32, s32);         /* extern */
M2C_UNK func_00B8FAD0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B8FB70(s32, s8 *);                   /* extern */

void func_00B92720(s32 arg0, s32 arg1, s32 arg2) {
    s8 sp48;
    M2C_UNK var_a1;
    s32 temp_s1;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 8;
    var_v1 = &sp48;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_s1 = arg2 & 0xFFFF;
    var_a1 = 0;
    if (temp_s1 >= 2) {
        sprintf(&sp48, func_001F08B0(0x670028), (arg1 & 0xFFFF) + 1, temp_s1);
        func_00B8FB70(arg0, &sp48);
        var_a1 = 1;
    }
    func_00B8FAD0(arg0, var_a1);
}
