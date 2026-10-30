/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5EE0(s32 *);                       /* extern */

void func_0099BD50(void) {
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
    sp18 = 0x16;
    sp1C = 0x12;
    func_001D5EE0(&sp18);
}
