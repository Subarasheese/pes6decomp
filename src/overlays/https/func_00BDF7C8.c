/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BDF7C8(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return *M2C_FIELD(arg0, s32 **, 4);
}
