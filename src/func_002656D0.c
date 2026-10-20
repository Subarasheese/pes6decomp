/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_002656D0(void *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 >= 0) && (arg1 < 3)) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    }
}
