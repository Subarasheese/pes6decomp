/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001ED840(s32, s32, s32);               /* extern */

void func_002E19B0(void *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_a2 & 0xFF) && !(temp_a2 & 0x100)) {
        func_001ED840(M2C_FIELD(arg0, s32 *, 0x1C), arg1 & 0xFF, temp_a2);
    }
}
