/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001DF4F0(s32, s32);

void func_0063AD60(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_001DF4F0(M2C_FIELD(arg0, s32 *, 0xC), arg1 & 0xFF);
    }
}
