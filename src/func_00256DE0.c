/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001BB080(s32);                         /* extern */
M2C_UNK func_001BB5F0(s32, s32);                    /* extern */

void func_00256DE0(void *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        func_001BB080(arg1);
        func_001BB5F0(M2C_FIELD(arg0, s32 *, 4), arg1);
    }
}
