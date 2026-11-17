/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00CBD8E0[];

void func_00C10330(s32 *arg0) {
    s32 *var_a3;
    s32 temp_v1;
    s32 var_a2;
    s32 *var_a0;

    var_a0 = arg0;
    var_a3 = (s32 *)D_00CBD8E0;
    if (var_a0 != NULL) {
        var_a2 = 0xBD;
        do {
            var_a2 -= 1;
            temp_v1 = var_a0[1];
            var_a3[0] = var_a0[0];
            var_a0 += 2;
            var_a3[1] = temp_v1;
            var_a3 += 2;
        } while (var_a2 > 0);
    }
}
