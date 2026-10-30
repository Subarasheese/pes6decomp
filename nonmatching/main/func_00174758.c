/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038DBD0[];
extern char D_0038DC30[];

s8 *func_00174758(void) {
    s32 var_a2;
    s8 *var_a0;
    s8 *var_a1;
    s8 *var_v0;
    s8 *var_v1;

    var_a2 = 0;
    var_a0 = NULL;
    if (M2C_FIELD(((void *)D_0038DBD0), s32 *, 0) > 0) {
        var_a0 = ((void *)D_0038DC30);
        var_v1 = ((void *)D_0038DC30);
        if ((*(s8 *)D_0038DC30) != 0) {
            var_a1 = ((void *)D_0038DC30);
loop_3:
            var_a2 += 1;
            var_a1 += 0x18;
            var_v1 += 0x18;
            if (var_a2 < M2C_FIELD(((void *)D_0038DBD0), s32 *, 0)) {
                var_a0 = var_v1;
                if (*var_a1 != 0) {
                    goto loop_3;
                }
            }
        }
    }
    var_v0 = NULL;
    if (var_a2 != M2C_FIELD(((void *)D_0038DBD0), s32 *, -0x2430)) {
        var_v0 = var_a0;
        *var_a0 = 1;
    }
    return var_v0;
}
