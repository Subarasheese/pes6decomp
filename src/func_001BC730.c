/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_001BC730(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        M2C_FIELD(arg0, s32 *, 0x14) = arg2;
        M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    }
}
