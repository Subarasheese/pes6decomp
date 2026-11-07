/* compiler: ee-gcc-2.96-Os-G0 */
#include "pes6/m2c.h"


void func_0016FA18(void *arg0) {
    s64 temp_a1;
    s64 var_v1;

    var_v1 = M2C_FIELD(arg0, s64 *, 0x938);
    temp_a1 = M2C_FIELD(arg0, s64 *, 0x930);
    if ((var_v1 < temp_a1) || (var_v1 = M2C_FIELD(arg0, s64 *, 0x940), ((temp_a1 < var_v1) != 0))) {
        M2C_FIELD(arg0, s64 *, 0x930) = var_v1;
    }
}
