/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern void *Pes6BallOwnerRecord;

s32 func_00996180(void) {
    return M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x28D) & 1;
}
