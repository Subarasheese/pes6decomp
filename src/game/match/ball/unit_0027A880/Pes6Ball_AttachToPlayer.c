/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *Pes6Ball_Current;
extern void *Pes6BallOwnerRecord;
extern char Pes6MatchState_Current[];
extern char D_00591E4C[];

void Pes6Ball_AttachToPlayer(void *arg0) {
    u8 temp_a3;

    M2C_FIELD(Pes6BallOwnerRecord, s8 *, 0x28B) = 0;
    M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x288) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(Pes6BallOwnerRecord, f32 *, 0x290) = (f32) M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(Pes6BallOwnerRecord, f32 *, 0x294) = (f32) M2C_FIELD(arg0, f32 *, 0xE4);
    M2C_FIELD(Pes6BallOwnerRecord, f32 *, 0x298) = (f32) M2C_FIELD(arg0, f32 *, 0xE8);
    temp_a3 = M2C_FIELD(arg0, u8 *, 0);
    (*(u8 *)D_00591E4C) = temp_a3;
    (*(u8 *)Pes6MatchState_Current) = temp_a3;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 3;
    if (M2C_FIELD(Pes6BallOwnerRecord, s32 *, 0x284) == 0) {
        M2C_FIELD(Pes6BallOwnerRecord, s32 *, 0x284) = 0x10;
    }
}
