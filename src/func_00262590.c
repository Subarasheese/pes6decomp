/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00221150(void);
s32 func_00263170(void);

s32 func_00262590(void) {
    void *result;

    if (func_00263170() != 0) {
        result = func_00221150();
    } else {
        result = NULL;
    }
    return M2C_FIELD(result, s32 *, 4);
}
