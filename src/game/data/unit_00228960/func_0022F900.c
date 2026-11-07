/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_00228A80();                              /* extern */

void func_0022F900(s8 arg0) {
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x33EB0) = arg0;
    }
}
