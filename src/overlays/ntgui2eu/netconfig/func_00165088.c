/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00165088(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 (*var_v0)(void *, s32, s32, s32);
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (temp_a0 != NULL) {
        func_00165088(temp_a0, arg1, arg2, arg3, arg4);
    }
    var_v0 = M2C_FIELD(arg0, s32 (**)(void *, s32, s32, s32), 0x58);
    if (var_v0 != NULL) {
        var_v0 = var_v0(arg1, arg2, arg3, arg4);
    }
    return (s32) var_v0;
}
