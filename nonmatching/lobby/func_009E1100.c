/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E08B0(u8, void *);                  /* extern */
extern void *D_00A7DEF0;

void func_009E1100(s32 arg0) {
    s8 var_v0;
    s8 var_v1;

    if (D_00A7DEF0 != NULL) {
        var_v0 = arg0 & 0xFF;
        var_v1 = M2C_FIELD(D_00A7DEF0, u8 *, 3) - 1;
        if (var_v1 < var_v0) {

        } else {
            if (var_v0 < 0) {
                var_v0 = 0;
            }
            var_v1 = var_v0;
        }
        M2C_FIELD(D_00A7DEF0, s8 *, 2) = var_v1;
        func_009E08B0((u8) M2C_FIELD(D_00A7DEF0, s8 *, 2), D_00A7DEF0);
    }
}
