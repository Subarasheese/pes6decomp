/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591E4F[][2];
extern u8 D_00591E50[][2];
extern f32 D_005926D8[];
extern s32 func_00288670(s32, s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB780(s16);
extern s32 func_002AE670(s32);
extern void func_00A53E10(ShotActor *);

static inline s32 shotContestAbility(ShotActor *actor) {
    const Pes6SquadSetupPlayer *entry =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return func_00288670(entry->current.base[4] & 127, 50);
}

static inline u8 shotContest(ShotActor *actor, ShotActor *rival, s32 bias) {
    s32 attack = shotContestAbility(actor);
    s32 defense = shotContestAbility(rival);
    return (u8)func_00BBB780((s16)(attack - defense + bias));
}

static inline void contestRise(ShotActor *actor, ShotActor *rival) {
    if (actor->shot.playerDistancesSquared[rival->player.id] < 0xc400) {
        if (!shotContest(actor, rival, -10)) {
            if (!shotContest(actor, rival, 20)) {
                s32 amount = func_00BBB8C0(shotContestAbility(actor));
                actor->shot.velocityY = actor->shot.velocityY * (f32)(900 + amount) / 1000.f;
            }
        }
    }
}

void func_00A64140(ShotActor *actor) {
    if (!(actor->shot.velocityY <= 0.f))
        return;
    contestRise(actor, (ShotActor *)Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]));
    contestRise(actor, (ShotActor *)Pes6MatchPlayer_Get(D_00591E50[actor->player.side ^ 1][0]));
    func_00A53E10(actor);
    if (!(D_005926D8[0] <= (f32)func_002AE670(40)))
        return;
    if (shotBall->ball.horizontalSpeed <= 0x5800)
        return;
    if (actor->shot.velocityY < 0.f) {
        actor->shot.velocityY = 0.f;
    }
}
