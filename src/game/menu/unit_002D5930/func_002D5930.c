/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_002D5930(void *arg0, s16 arg1, s16 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 2) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = 0;
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 6) = arg2;
        M2C_FIELD(arg0, s16 *, 4) = 0;
    }
}
