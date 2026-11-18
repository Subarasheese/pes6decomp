/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u8 *Pes6MemRegion_Get(void);
s32 func_001FC7D0(void) {
    u8 *p;
    p = Pes6MemRegion_Get();
    if (p == 0) {
        return -1;
    }
    return *(s32 *)(p + 8);
}
