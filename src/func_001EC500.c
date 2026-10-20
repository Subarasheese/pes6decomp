/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_001EC500(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    }
}
