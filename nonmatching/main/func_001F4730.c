/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(s8 *, M2C_UNK);               /* extern */
s8 func_001DD420(s8 *);                             /* extern */

void func_001F4730(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    s8 sp2C;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 4;
    var_v1 = &sp2C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    M2C_FIELD(arg2, s32 *, 4) = 4;
    M2C_FIELD(arg2, u8 *, 0xC) = (u8) (M2C_FIELD(arg2, u8 *, 0xC) + 3);
    M2C_FIELD(arg2, u8 *, 0xD) = (u8) M2C_FIELD(arg2, u8 *, 0xC);
    func_001C8590(&sp2C, 3);
    M2C_FIELD(arg2, s8 *, 0x1B) = func_001DD420(&sp2C);
}
