/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void * func_002EE1E0(s32);
u8 func_00BA5290(s32 arg0) {
    void *temp_v0;
    temp_v0 = func_002EE1E0(arg0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, u8 *, 2);
    }
    return 0U;
}
