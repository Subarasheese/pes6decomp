/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00BEF408(s32, s32);
extern void func_00BF5CC0(s32, s32, s32);

s32 func_00BED658(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4);
    if ((M2C_FIELD(arg1, s32 *, 0) >= temp_s0) ||
        (var_v0 = func_00BEF408(temp_s0, arg1), (var_v0 == 0))) {
        func_00BF5CC0(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg0, s32 *, 8), temp_s0 * 8);
        M2C_FIELD(arg1, s32 *, 4) = temp_s0;
        var_v0 = 0;
    }
    return var_v0;
}
