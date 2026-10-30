/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DD680(s32 *);                       /* extern */

void func_0099B780(void) {
    s32 sp18;
    s32 sp1C;
    s32 *var_v1;
    s32 var_v0;

    var_v0 = 8;
    var_v1 = &sp18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp18 = 0x13;
    sp1C = 0x13;
    func_001DD680(&sp18);
}
