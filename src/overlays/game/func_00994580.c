/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern void *Pes6BallOwnerRecord;

void func_00994580(void) {
    M2C_FIELD(Pes6BallOwnerRecord, s32 *, 0x284) = 0xD;
    M2C_FIELD(Pes6BallOwnerRecord, s8 *, 0x28B) = 0;
}
