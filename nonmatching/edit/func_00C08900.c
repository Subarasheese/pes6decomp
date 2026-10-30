/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B8FDA0(M2C_UNK, M2C_UNK, M2C_UNK, s8 *); /* extern */
M2C_UNK func_00B90EB0(s8 *);                        /* extern */

void func_00C08900(void) {
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
    func_00B8FDA0(0x16, 0x1C, 0x43, &sp10);
    func_00B90EB0(&sp10);
}
