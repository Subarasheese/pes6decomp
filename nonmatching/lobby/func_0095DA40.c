/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00827C70(s32);                         /* extern */
s32 func_00828140();                                /* extern */
s32 func_00936B90();                                /* extern */

void func_0095DA40(void) {
    s32 temp_v0;
    s32 var_s0;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3F1A4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s0 = M2C_FIELD(var_v0, s32 *, 4);
    } else {
        var_s0 = 0;
    }
    func_00827C70(var_s0 + func_00828140());
}
