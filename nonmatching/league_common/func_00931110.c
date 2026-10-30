/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00931110(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0);
        M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 1);
        M2C_FIELD(arg1, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 2);
        M2C_FIELD(arg1, s8 *, 3) = 0;
    }
}
