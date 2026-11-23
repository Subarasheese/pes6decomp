/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    float x, z;
    u8 reserved08[0x13];
    u8 actor, other, kind, reserved1E, flags;
} MatchEventNotice;
extern void *Pes6BallOwnerRecord;
extern u8 D_00CCAD64[];
extern s32 func_00C13F20(void *, MatchEventNotice *);
extern void func_00C13AB0(void *, s32, MatchEventNotice *);
void func_00C15050(void) {
    MatchEventNotice notice;
    s32 kind = func_00C13F20(Pes6BallOwnerRecord, &notice);
    if (kind != 0)
        func_00C13AB0(D_00CCAD64, kind, &notice);
}
