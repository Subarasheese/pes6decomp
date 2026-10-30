/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00510FF0[];

void func_0017B070(void *arg0) {
    M2C_UNK **temp_a1;
    M2C_UNK *var_a2;
    M2C_UNK *var_v1;

    M2C_FIELD(arg0, s8 *, 1) = 0;
    temp_a1 = ((void *)D_00510FF0) + (M2C_FIELD(arg0, s8 *, 2) * 4);
    var_a2 = *temp_a1;
    if (var_a2 != arg0) {
        var_v1 = M2C_FIELD(var_a2, M2C_UNK **, 0x130);
        if (var_v1 != arg0) {
            do {
                var_a2 = var_v1;
                var_v1 = M2C_FIELD(var_v1, M2C_UNK **, 0x130);
            } while (var_v1 != arg0);
        }
        M2C_FIELD(var_a2, s32 *, 0x130) = (s32) M2C_FIELD(arg0, s32 *, 0x130);
    } else {
        *temp_a1 = ((void *)D_00510FF0);
    }
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
}
