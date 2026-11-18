/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *Pes6Module_Get(void);

s32 Pes6Module_GetRegion(void) {
    void *entry = Pes6Module_Get();

    if (entry == NULL) {
        return 0;
    }
    return M2C_FIELD(entry, s32 *, 0x4);
}
