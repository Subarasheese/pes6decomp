/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F3C40(s32, s32);                    /* extern */

void func_002E44B0(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_001F3C40(M2C_FIELD(arg0, s32 *, 0x18), arg1 & 0xFF);
    }
}
