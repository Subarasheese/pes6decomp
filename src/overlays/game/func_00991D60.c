/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern void *Pes6BallOwnerRecord;

void func_00991D60(void) {
    M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x2C4) = (u8) (M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x2C4) + 1);
}
