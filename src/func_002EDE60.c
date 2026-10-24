/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00223A80(void);

u8 func_002EDE60(s32 arg0) {
    void *record;

    record = func_00223A80();
    if (arg0 == 0) {
        return M2C_FIELD(record, u8 *, 4);
    }
    return M2C_FIELD(record, u8 *, 5);
}
