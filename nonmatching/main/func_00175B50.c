/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038DBD0[];
extern char D_0038DBD8[];

s32 func_00175B50(void *arg0) {
    s32 var_v0;
    u32 temp_v0;
    void **temp_a0;

    if (((*(s32 *)D_0038DBD8) != 1) || (var_v0 = 0, ((*(s32 *)D_0038DBD0) > 0))) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void ***, 8);
        temp_v0 = M2C_FIELD(*temp_a0, u32 (**)(void **, M2C_UNK, void *), 0x24)(temp_a0, 0, arg0);
        var_v0 = (s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1;
    }
    return var_v0;
}
