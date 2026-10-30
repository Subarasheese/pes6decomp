/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D082D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00D13860(s32);                         /* extern */

s32 func_00D0A7D0(void *arg0, s32 arg1) {
    s32 var_a0;
    s32 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    func_00D082D0(arg0 + 0x808, 0);
    var_a0 = 5;
    if (arg0 == NULL) {

    } else if (arg1 < 0) {
        var_a0 = 5;
    } else if (arg1 < 0xA) {
        var_v1 = 0;
        do {
            if (arg1 == M2C_FIELD((arg0 + (var_v1 * 4)), s32 *, 0x7F4)) {
                var_a0 = var_v1;
            }
            var_v1 += 1;
        } while (var_v1 < 5);
    } else {
        var_a0 = 5;
    }
    if (var_a0 < 0) {
        return 0;
    }
    if (var_a0 < 5) {
        func_00D13860(M2C_FIELD(((var_a0 * 4) + arg0), s32 *, 0x7E0));
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0xD7B) = 1;
            M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
        }
        return 1;
    }
    return 0;
}
