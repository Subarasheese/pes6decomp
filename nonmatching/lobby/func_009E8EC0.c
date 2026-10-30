/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(s32);                         /* extern */

s32 func_009E8EC0(void *arg0, s32 arg1) {
    s32 (*temp_v0)(s32, s32);
    s32 temp_a1;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    void *temp_v1;

    var_s1 = 0;
    temp_v1 = M2C_FIELD(arg0, void **, 0x54);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x38);
    var_a0 = -1;
    if (temp_a1 >= 0) {
        temp_v0 = M2C_FIELD(temp_v1, s32 (**)(s32, s32), 0x20);
        if (temp_v0 != NULL) {
            var_v0 = temp_v0(M2C_FIELD(temp_v1, s32 *, 0), temp_a1);
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 1) {
            M2C_FIELD((arg0 + 0x10), s32 *, 0x30) = arg1;
            var_s1 = 1;
        }
        var_a0 = 0x84028400;
    }
    if (var_a0 >= 0) {
        func_0026E840(var_a0);
    }
    return var_s1;
}
