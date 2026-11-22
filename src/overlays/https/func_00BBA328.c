/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BBA328(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0) == 0x74) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
        if (arg1 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = arg1;
            return temp_v0;
        }
        return temp_v0;
    }
    return 0;
}
