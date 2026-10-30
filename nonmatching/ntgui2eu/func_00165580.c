/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016A088(s32, s32, s32);                   /* extern */
s32 *func_0016B0D8(s32, void *, s32, s32);          /* extern */

s32 func_00165580(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_v0;
    void *var_s1;

    var_s1 = M2C_FIELD(arg0, void **, 0x4C);
loop_1:
    temp_v0 = func_0016B0D8(arg1, arg0, M2C_FIELD(var_s1, s32 *, 0x64), M2C_FIELD(var_s1, s32 *, 0x68));
    if (temp_v0 != NULL) {
        *temp_v0 = func_0016A088(*temp_v0, arg2, arg3);
        return 1;
    }
    var_s1 = M2C_FIELD(var_s1, void **, 0);
    if (var_s1 == NULL) {
        return 0;
    }
    goto loop_1;
}
