/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00C041E0(s32);

s32 func_00C0A570(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x13C);
    if (temp_a0 != -1) {
        func_00C041E0(temp_a0);
    }
    return 0;
}
