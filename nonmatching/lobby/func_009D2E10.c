/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009D1950(M2C_UNK);                     /* extern */
extern void *D_00A7DE00;

s32 func_009D2E10(s8 arg0) {
    s8 var_s0;
    void *temp_v0;

    var_s0 = arg0;
    if (D_00A7DE00 != NULL) {
        return 0;
    }
    temp_v0 = func_0099C7E0(0xF8);
    D_00A7DE00 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_v0, s8 *, 1) = 1;
    M2C_FIELD(D_00A7DE00, s8 *, 2) = 1;
    M2C_FIELD(D_00A7DE00, s8 *, 3) = 1;
    if ((var_s0 < 0) || (var_s0 >= 4)) {
        var_s0 = 0;
    }
    M2C_FIELD(D_00A7DE00, s8 *, 0) = var_s0;
    func_009D1950(1);
    return 1;
}
