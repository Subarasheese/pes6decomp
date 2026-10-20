/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001EDD00(s32);                             /* extern */

s32 func_001F2410(void *arg0) {
    if (arg0 != NULL) {
        return func_001EDD00(M2C_FIELD(arg0, s32 *, 0x48));
    }
    return 0;
}
