/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C6D50[];

void func_0018C5F8(void) {
    M2C_UNK (**var_s1)();
    M2C_UNK (*var_v1)();
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    if (M2C_FIELD(((void *)D_005C6D50), s32 *, 0) > 0) {
        temp_v0 = ((void *)D_005C6D50) + 0x6D50;
        var_s1 = temp_v0 + 4;
        var_v1 = M2C_FIELD(temp_v0, M2C_UNK (**)(), 4);
loop_2:
        var_s0 += 1;
        var_s1 += 4;
        var_v1();
        if (var_s0 < M2C_FIELD(((void *)D_005C6D50), s32 *, 0x6D50)) {
            var_v1 = *var_s1;
            goto loop_2;
        }
    }
}
