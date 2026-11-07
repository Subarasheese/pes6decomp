/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00114E20(void *);                         /* extern */

s32 func_00650EF0(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s8 *, 0) = 5;
    M2C_FIELD(arg0, s8 *, 1) = 7;
    M2C_FIELD(arg0, s8 *, 2) = 6;
    M2C_FIELD(arg0, s8 *, 3) = 5;
    M2C_FIELD(arg0, s8 *, 5) = 4;
    M2C_FIELD(arg0, s8 *, 6) = 3;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    return func_00114E20(arg0);
}
