/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_009E8260(void *arg0) {
    s32 (*temp_v0)(void *);
    s32 var_v0;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x54);
    temp_v0 = M2C_FIELD(temp_a0, s32 (**)(void *), 4);
    if (temp_v0 == NULL) {
        var_v0 = 1;
    } else {
        var_v0 = temp_v0(temp_a0);
    }
    if (var_v0 == 1) {
        M2C_FIELD(arg0, void **, 0x54) = NULL;
    }
}
