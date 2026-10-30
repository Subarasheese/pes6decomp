/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s32, s32, s8 *);              /* extern */
M2C_UNK func_00995D30(s8 *);                        /* extern */

void func_009969B0(s32 arg0) {
    s8 sp20;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x100;
    var_v1 = &sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_00995D30(&sp20);
    sprintf(arg0, func_001F08B0(0x1E0031), &sp20);
}
