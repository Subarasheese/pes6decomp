/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009CE560(void *, void *);              /* extern */

s32 func_009CDE50(M2C_UNK arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0xC);
    var_v0 = temp_v1 - 1;
    if (var_v0 >= 0x21) {
        var_v0 = 0x20;
    } else if (var_v0 < 0) {
        var_v0 = 0;
    }
    if (var_v0 != temp_v1) {
        M2C_FIELD(arg1, s32 *, 0xC) = var_v0;
        M2C_FIELD(arg1, s16 *, 0x14) = (s16) (var_v0 + 0xDD);
        temp_v1_2 = M2C_FIELD(arg1, s32 *, 0xC);
        temp_v0 = M2C_FIELD(arg1, s32 *, 0x10);
        if (temp_v1_2 < temp_v0) {
            M2C_FIELD(arg1, s32 *, 0x10) = temp_v1_2;
        } else if (temp_v1_2 >= (temp_v0 + 0xC)) {
            M2C_FIELD(arg1, s32 *, 0x10) = (s32) (temp_v1_2 - 0xB);
        }
        func_009CE560(arg1, arg1 + 0xC);
        func_0026E840(0x8400F802);
    }
    return 0;
}
