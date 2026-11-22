/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BCE170(void *arg0) {
    s32 var_v0;
    void *temp_a0;

    if ((arg0 == NULL) || (var_v0 = M2C_FIELD(arg0, s32 *, 0x60), (var_v0 == 0))) {
        temp_a0 = M2C_FIELD(arg0, void **, 0xDC);
        var_v0 = 0;
        if (temp_a0 != NULL) {
            var_v0 = M2C_FIELD(temp_a0, s32 *, 0x10);
        }
    }
    return var_v0;
}
