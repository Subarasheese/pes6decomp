/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern void func_008DCA20(void *, s32, s32, s32);

void func_008DCB70(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        func_008DCA20(arg0, arg1, arg2, M2C_FIELD(arg0, u8 *, 0x18) != 0);
    }
}
