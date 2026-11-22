/* compiler: mwcc-3.0.1b151 */
#include "pes6/ball.h"
#include "pes6/match_player.h"

extern f32 D_005926D8[];

extern s32 func_00A07B40(void);
extern s32 func_00A0D0F0(Pes6MatchPlayer *actor);
extern s32 func_00997EF0(Pes6MatchPlayer *actor);
extern s32 func_002AE670(s32 span);
extern void func_002802C0(Pes6MatchPlayer *actor, s32 amount);
extern s32 func_0027DA80(Pes6MatchPlayer *actor, s32 action);

void func_00282F80(void) {
    Pes6MatchPlayer *actor;
    s32 player;

    if (Pes6MatchState_Current.unkFC)
        return;
    actor = &Pes6MatchPlayers[1];
    player = 0;
    do {
        if (actor->info->active == 0)
            goto next_player;
        if (actor->id == Pes6MatchState_Current.owner && Pes6MatchState_Current.owner != 0)
            goto next_player;
        if (func_00A07B40() != 0 && actor->info->fieldState->flag03 != 0)
            goto next_player;
        if (actor->id != D_00591E00.state.sideActors[actor->side][0] &&
            actor->id != D_00591E00.state.sideActors[actor->side][1] && actor->id != 1 &&
            actor->id != 12 && actor->id != 0 && actor->distance114 > 0x100 &&
            func_00A0D0F0(actor) == 0)
            goto next_player;
        if (Pes6MatchState_Current.actor34) {
            if (actor->id == Pes6MatchState_Current.actor34) {
                if (Pes6Ball_Current->unk65 != 0)
                    goto next_player;
            } else {
                Pes6MatchPlayer *peer = Pes6MatchPlayer_Get(Pes6MatchState_Current.actor34);
                if (Pes6Ball_Current->action == 5 && actor->role != 7 &&
                    peer->distance114 > 0x180 && func_00997EF0(actor) != 0)
                    goto select_action;
                if (actor->side == peer->side)
                    goto next_player;
            }
        } else if (actor->id == Pes6MatchState_Current.lastTouch && Pes6Ball_Current->unk65 != 0 &&
                   actor->actionGroup != 3) {
            goto next_player;
        }
    select_action:
        if (actor->id != Pes6MatchState_Current.touchActors[0] && actor->info->unk30 != 0x37e &&
            actor->info->unk30 != 0x37f && Pes6MatchState_Current.actor34 == 0 &&
            (D_005926D8[0] <= (f32)func_002AE670(4))) {
            func_0027DA80(actor, 24);
            goto next_player;
        }
        switch (actor->actionGroup) {
        case 4:
            func_002802C0(actor, 0x1000);
            break;
        case 1:
        case 2:
            if (Pes6Ball_Current->horizontalSpeed > 0x6000) {
                func_0027DA80(actor, 24);
                goto next_player;
            }
            func_002802C0(actor, 0x1440);
            break;
        case 7:
            if (Pes6Ball_Current->horizontalSpeed > 0x6000 && func_0027DA80(actor, 24) != 0)
                goto next_player;
            func_002802C0(actor, 0x2400);
            break;
        case 6:
            if (Pes6Ball_Current->horizontalSpeed > 0x6000 && func_0027DA80(actor, 24) != 0)
                goto next_player;
            func_002802C0(actor, 0x1e40);
            break;
        case 5:
            func_002802C0(actor, 0xc40);
            break;
        case 3:
        case 8:
        case 255:
            func_0027DA80(actor, 24);
            break;
        }
    next_player:
        ++actor;
        ++player;
    } while (player < 22);
}
