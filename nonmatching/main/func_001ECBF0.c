/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001ECBF0(void *arg0) {
    s32 var_a1;
    void *var_v1;
    void *var_v1_2;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 4) {
        var_v1 = M2C_FIELD(arg0, void **, 0);
        do {
            if ((M2C_FIELD(var_v1, u8 *, 0x11C) != 0) && !(((s32) M2C_FIELD(var_v1, u8 *, 0x11D) >> 1) & 1)) {
                var_a1 += 1;
            }
            var_v1 = M2C_FIELD(var_v1, void **, 8);
        } while (var_v1 != NULL);
    } else {
        var_v1_2 = M2C_FIELD(arg0, void **, 0);
        do {
            if (M2C_FIELD(var_v1_2, u8 *, 0x34) != 0) {
                var_a1 += M2C_FIELD(var_v1_2, s32 *, 8);
            }
            var_v1_2 = M2C_FIELD(var_v1_2, void **, 4);
        } while (var_v1_2 != NULL);
    }
    if (var_a1 != 0) {
        return 1;
    }
    return 0;
}
