/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *func_00842640(void);

s32 func_009645E0(s32 arg0) {
    void *entry;

    entry = func_00842640();
    if ((entry == NULL)) {
        return -1;
    }
    if ((arg0 == 1)) {
        M2C_FIELD(entry, s8 *, 9) = 1;
    } else {
        M2C_FIELD(entry, s8 *, 9) = 0;
    }
    return 1;
}
