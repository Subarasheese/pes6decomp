/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_002DC190(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    }
}
