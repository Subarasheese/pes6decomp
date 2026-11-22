/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00BA28B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32)(M2C_FIELD(arg0, s32 *, 0x14) | arg1);
}
