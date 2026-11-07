/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_001DED10(void *arg0, s8 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x42) = arg1;
        M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) | 1);
    }
}
