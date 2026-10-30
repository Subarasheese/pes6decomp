/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D7A20(s32, s8 *);                   /* extern */
M2C_UNK func_002DF0A0(s32, s8 *);                   /* extern */

void func_00B90640(s32 arg0, s32 arg1) {
    s8 sp20;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = &sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_001D7A20(arg1, &sp20);
    func_002DF0A0(arg0, &sp20);
}
