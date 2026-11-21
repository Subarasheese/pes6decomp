/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *func_00842650(void);

s32 func_009662B0(s8 arg0) {
    void *entry;

    entry = func_00842650();
    if (entry == NULL) {
        return -1;
    }
    M2C_FIELD(entry, s8 *, 4) = arg0;
    return 1;
}
