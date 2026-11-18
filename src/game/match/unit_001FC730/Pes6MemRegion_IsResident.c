/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *Pes6MemRegion_Get(void);

s32 Pes6MemRegion_IsResident(void) {
    u8 *info = Pes6MemRegion_Get();

    if (info != NULL) {
        return info[0xC] == 2;
    }
    return 0;
}
