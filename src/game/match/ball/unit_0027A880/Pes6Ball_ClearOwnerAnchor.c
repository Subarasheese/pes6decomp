/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *Pes6Ball_Current;
extern void *Pes6BallOwnerRecord;

void Pes6Ball_ClearOwnerAnchor(void) {
    M2C_FIELD(Pes6BallOwnerRecord, s8 *, 0x28B) = 0;
    M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x288) = 0xFF;
    M2C_FIELD(Pes6BallOwnerRecord, f32 *, 0x290) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    M2C_FIELD(Pes6BallOwnerRecord, f32 *, 0x294) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
    M2C_FIELD(Pes6BallOwnerRecord, f32 *, 0x298) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
}
