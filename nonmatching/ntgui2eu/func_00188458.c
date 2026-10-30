/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001884F0(void *);                      /* extern */
extern s32 (*D_005C3DC0)();

s32 func_00188458(void *arg0, void *arg1, void *arg2) {
    s32 temp_a1;
    s32 var_a0;

    var_a0 = D_005C3DC0();
    if ((M2C_FIELD(arg1, s32 *, 0x5AC) != M2C_FIELD(arg2, s32 *, 0x5AC)) || (M2C_FIELD(arg1, s32 *, 0x5B0) != M2C_FIELD(arg2, s32 *, 0x5B0))) {
        func_001884F0(arg0);
        var_a0 = 1;
    }
    temp_a1 = M2C_FIELD(arg1, s32 *, 0xC74);
    if (temp_a1 != M2C_FIELD(arg2, s32 *, 0xC74)) {
        M2C_FIELD(arg0, s32 *, 0xC74) = temp_a1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_a0 = 1;
    }
    return var_a0;
}
