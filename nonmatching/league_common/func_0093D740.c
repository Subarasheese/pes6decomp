/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B6A30(s32);                         /* extern */
s32 func_0093D790();                                /* extern */

void func_0093D740(void) {
    s32 var_v0;

    var_v0 = func_0093D790();
    if (var_v0 == -1) {
        var_v0 = 1;
    }
    func_001B6A30(var_v0);
}
