/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_002F1800(void *arg0, s8 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        M2C_FIELD(arg0, s8 *, 1) = arg1;
    }
}
