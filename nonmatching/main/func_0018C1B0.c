/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00520130[];

void func_0018C1B0(s32 arg0) {
    s32 var_a4;
    void *var_a3;

    if ((*(s32 *)D_00520130) != 0) {
        var_a3 = (*(s32 *)D_00520130) + 4;
        var_a4 = 0;
        do {
            M2C_FIELD(var_a3, s8 *, 3) = 0;
            if (arg0 & (1 << var_a4)) {
                M2C_FIELD(var_a3, s8 *, 3) = 1;
                M2C_FIELD(var_a3, s8 *, 2) = 0;
                M2C_FIELD(var_a3, s16 *, 0) = 8;
            }
            var_a4 += 1;
            var_a3 += 4;
        } while (var_a4 < 4);
    }
}
