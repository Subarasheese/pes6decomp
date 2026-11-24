/* compiler: mwcc-3.0.1b151 */
#pragma opt_repositioncode off
#include "pes6/restart_player.h"
extern void func_00207390(Pes6PlayerInfo *, s32), func_00209A00(Pes6PlayerInfo *, s32, s32);
extern s32 func_009BAE30(Pes6MatchPlayer *);
extern s32 func_00BBB8C0(s32), func_002AE670(s32), func_00B7BD20(Pes6MatchPlayer *);
extern void func_00B7C220(Pes6MatchPlayer *);
extern u8 D_005926E2[];
typedef struct {
    u8 pad[6];
    u16 clip;
} ActorPose;
void func_00B7C7F0(Pes6MatchPlayer *p) {
    RestartReaction *motion = (RestartReaction *)p;
    if (func_00B7BD20(p))
        return;
    if (p->info->unk30 != 0x385) {
        switch (((ActorPose *)p->info->appearance)->clip) {
        case 0x2a1:
        case 0x29e:
            if (func_009BAE30(p)) {
                func_00B7C220(p);
                return;
            }
            break;
        case 0x172:
            func_00209A00(p->info, 0x172, 0);
            func_00207390(p->info, 4);
            p->role = 0x11;
            p->action = 0x50;
            return;
        }
        func_00209A00(p->info, 0x385, 0);
        func_00207390(p->info, 4);
    }
    p->speed = 0;
    p->y = 0;
    motion->target = motion->heading;
    motion->wait = func_00BBB8C0(7) * 2 + 6 < 33 ? D_005926E2[func_00BBB8C0(7) * 2]
                                                 : func_002AE670(func_00BBB8C0(7) * 2 + 6);
    p->role = 0x11;
    p->action = 10;
}
