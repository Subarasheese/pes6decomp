/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001ED880(s32, s32);                    /* extern */

void func_002E19F0(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_a1 & 0xFF) && !(temp_a1 & 0x100)) {
        func_001ED880(M2C_FIELD(arg0, s32 *, 0x1C), temp_a1);
    }
}
