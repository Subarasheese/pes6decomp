/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001C48E8(void *, int, unsigned int);
extern char *Pes6BallOwnerRecord;

void func_00996060(void) {
    func_001C48E8(Pes6BallOwnerRecord + 0x284, 0, 0x40);
    func_001C48E8(Pes6BallOwnerRecord + 4, 0, 0x280);
    M2C_FIELD(Pes6BallOwnerRecord, s8 *, 0x2C4) = 0;
    M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x28D) = (u8) (M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x28D) | 2);
}
