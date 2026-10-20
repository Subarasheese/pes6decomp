/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_001E5EA0(void *arg0, s64 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s64 *, 0x10) = arg1;
        M2C_FIELD(arg0, u8 *, 0x3C) = (u8) (M2C_FIELD(arg0, u8 *, 0x3C) | 4);
    }
}
