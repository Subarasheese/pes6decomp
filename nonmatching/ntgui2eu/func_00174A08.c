/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165CB0(void *);                      /* extern */
extern s32 (*D_005C14A0)();

s32 func_00174A08(void *arg0, void *arg1, void *arg2) {
    M2C_UNK (*temp_v0)(void *, s32);
    s32 temp_a1;
    s32 var_v1;

    var_v1 = D_005C14A0();
    temp_a1 = M2C_FIELD(arg1, s32 *, 0x918);
    if (temp_a1 != M2C_FIELD(arg2, s32 *, 0x918)) {
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, s32), 0x128);
        if (temp_v0 == NULL) {
            M2C_FIELD(arg0, s32 *, 0x918) = temp_a1;
        } else {
            temp_v0(arg0, temp_a1);
        }
        func_00165CB0(arg0);
        var_v1 = 1;
    }
    return var_v1;
}
