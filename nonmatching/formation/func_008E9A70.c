/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008E9A70(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        M2C_FIELD(arg1, u8 *, 0x7CC) = (u8) M2C_FIELD(arg0, u8 *, 1);
        M2C_FIELD(arg1, u8 *, 0x7CD) = (u8) M2C_FIELD(arg0, u8 *, 2);
        M2C_FIELD(arg1, u8 *, 0x7CE) = (u8) M2C_FIELD(arg0, u8 *, 3);
    }
}
