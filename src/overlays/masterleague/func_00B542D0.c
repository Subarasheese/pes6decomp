/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
u8 func_00B542D0(void) {
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 == 0) {
        return 0U;
    }
    return M2C_FIELD(temp_v0, u8 *, 7);
}
