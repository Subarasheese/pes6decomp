/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003266C0(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_v0;

    if (arg2 != 0xFF) {
        temp_v1 = *arg1;
        switch (temp_v1) {                          /* irregular */
        case 17:
            /* fallthrough */
        case 11:
            var_v0 = M2C_FIELD(((arg2 * 4) + arg1), s32 *, 0x8E4);
            break;
        default:
            var_v0 = M2C_FIELD(((arg2 * 0x3C) + arg1), s32 *, 0x84);
            break;
        }
        *arg0 = var_v0;
        return 1;
    }
    *arg0 = 0;
    return 0;
}
