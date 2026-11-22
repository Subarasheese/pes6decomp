/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *func_00821780(void);

s32 func_00930850(s8 arg0) {
    void *entry;

    entry = func_00821780();
    if (entry == NULL) {
        return 0;
    }
    M2C_FIELD(entry, s8 *, 0x504) = arg0;
    return 1;
}
