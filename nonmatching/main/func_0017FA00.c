/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017FA50(s8 *);                        /* extern */

void func_0017FA00(void) {
    s8 sp10;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x14;
    var_v1 = &sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_0017FA50(&sp10);
}
