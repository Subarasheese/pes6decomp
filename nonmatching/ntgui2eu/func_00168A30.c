/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00168DC8(void *);                      /* extern */
M2C_UNK func_00169730(void *);                      /* extern */
extern s32 (*D_005BFAA8)();

s32 func_00168A30(void *arg0, void *arg1, void *arg2) {
    s32 temp_a1;
    s32 var_a0;

    var_a0 = D_005BFAA8();
    if ((M2C_FIELD(arg1, s64 *, 0x5A0) != M2C_FIELD(arg2, s64 *, 0x5A0)) || (M2C_FIELD(arg1, s32 *, 0x5AC) != M2C_FIELD(arg2, s32 *, 0x5AC)) || (M2C_FIELD(arg1, s32 *, 0x5B0) != M2C_FIELD(arg2, s32 *, 0x5B0))) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x130)(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x12C)(arg0);
        func_00169730(arg0);
        func_00168DC8(arg0);
        var_a0 = 1;
    }
    temp_a1 = M2C_FIELD(arg1, s32 *, 0x86C);
    if (temp_a1 != M2C_FIELD(arg2, s32 *, 0x86C)) {
        M2C_FIELD(arg0, s32 *, 0x86C) = temp_a1;
        var_a0 = 1;
    }
    return var_a0;
}
