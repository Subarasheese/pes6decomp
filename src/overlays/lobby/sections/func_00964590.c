/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *func_00842640(void);

s32 func_00964590(s32 arg0) {
    void *entry;

    entry = func_00842640();
    if (entry == NULL) {
        return -1;
    }
    if (arg0 == 1) {
        M2C_FIELD(entry, s8 *, 0xA) = 0;
    } else {
        M2C_FIELD(entry, s8 *, 0xA) = 1;
    }
    return 1;
}
