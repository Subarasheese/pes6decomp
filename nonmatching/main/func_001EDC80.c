/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001EDC80(void *arg0, s32 arg1) {
    s32 var_a1;
    void *var_v0;

    var_a1 = arg1;
    if ((arg0 != NULL) && (var_v0 = M2C_FIELD(arg0, void **, 0), (var_v0 != NULL)) && (var_a1 >= 0) && ((s32) M2C_FIELD(arg0, u16 *, 0x34) >= var_a1)) {
loop_4:
        if (var_a1 != 0) {
            var_v0 = M2C_FIELD(var_v0, void **, 8);
            var_a1 -= 1;
            goto loop_4;
        }
    } else {
        var_v0 = NULL;
    }
    return var_v0;
}
