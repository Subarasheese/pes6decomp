/* compiler: mwcc-3.0.1b151 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00520130[];

void func_0018C140(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (*(void **)D_00520130 != NULL) {
        M2C_FIELD(*(void **)D_00520130, s32 *, 0) = 1;
        if (*(void **)D_00520130 != NULL) {
            if (var_a0 == 0) {
                var_a0 = 1;
            }
            M2C_FIELD(*(void **)D_00520130, s16 *, 0x10) = var_a0;
        }
    }
}
