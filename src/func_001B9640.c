/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(void *);                      /* extern */
M2C_UNK func_001B92F0(s32, s32);                    /* extern */

void func_001B9640(void *arg0) {
    if (arg0 != NULL) {
        func_001B92F0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        if (arg0 != NULL) {
            func_00153FA0(arg0);
        }
    }
}
