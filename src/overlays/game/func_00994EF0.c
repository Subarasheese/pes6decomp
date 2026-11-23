/* compiler: mwcc-3.0.1b151 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    u8 reserved[8];
    u8 actor;
    u8 reserved09[0x27b];
    s32 state;
    u8 countdown;
    u8 reserved289[2];
    u8 pending;
} BallAction;
extern BallAction *Pes6BallOwnerRecord;
extern s32 func_009946A0(const u8 *, s32), func_00991EB0(s32, s32);
void func_00994EF0(const u8 *actor) {
    if (func_009946A0(actor, 0))
        return;
    if (Pes6BallOwnerRecord->actor == *actor && func_00991EB0(6, 0) >= 5) {
        Pes6BallOwnerRecord->state = 0;
        Pes6BallOwnerRecord->countdown = 0;
        return;
    }
    {
        Pes6BallOwnerRecord->state = 6;
        Pes6BallOwnerRecord->pending = 0;
    }
}
