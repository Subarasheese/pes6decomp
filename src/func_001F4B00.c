/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_001F4B00(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x25) = (u8) (M2C_FIELD(arg0, u8 *, 0x25) | arg1);
    }
}
