/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

s32 func_00BEA438(s32, s32, s32);

s32 func_00BE9000(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v0;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x10);
    if ((temp_a2 == 0) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0xC), (temp_v0 == 0))) {
        return 0x804;
    }
    return func_00BEA438(arg1, temp_v0, temp_a2);
}
