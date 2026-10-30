/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CDC590();                            /* extern */

s32 func_00803C30(void) {
    s8 sp10;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = &sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_00CDC590();
    return 0;
}
