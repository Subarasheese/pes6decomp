/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

char *func_00858B20(char *arg0, s32 arg1) {
    s32 var_v1;
    char *var_a0;

    var_a0 = arg0;
    var_v1 = 1;
loop_1:
    if ((M2C_FIELD(var_a0, s8 *, 8) != 0) && (M2C_FIELD(var_a0, s32 *, 4) == arg1)) {
        return var_a0;
    }
    var_v1 += 1;
    var_a0 += 0x1C;
    if (var_v1 >= 9) {
        return NULL;
    }
    goto loop_1;
}
