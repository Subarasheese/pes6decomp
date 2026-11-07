/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_002D5980(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 2) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = 0;
    }
}
