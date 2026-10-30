/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AE4690(s32, s32, s32, s32);          /* extern */
extern void *D_00B02688;

s32 func_00AE6D90(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = M2C_FIELD(D_00B02688, s32 *, 0x1400);
    var_v0 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        func_00AE4690(M2C_FIELD(D_00B02688, s32 *, 0x40), M2C_FIELD(D_00B02688, s32 *, 0x44), M2C_FIELD(D_00B02688, s32 *, 0x48), M2C_FIELD(D_00B02688, s32 *, 0x4C));
        var_s0 += 1;
        /* fallthrough */
    case 1:
        var_v0 = 1;
        break;
    }
    M2C_FIELD(D_00B02688, s32 *, 0x1400) = var_s0;
    return var_v0;
}
