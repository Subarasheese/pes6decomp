/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591E4F[][2];
extern s32 func_009B33A0(void *player, s32 x, s32 z);
extern u16 func_009B30B0(u16, u16);
extern f32 func_001CD9E0(f32);
extern s32 func_00288670(s32, s32);

s32 func_00C565C0(ShotActor *actor) {
    u16 angle = func_009B30B0(actor->shot.shotHeading, actor->player.angle);
    s32 power;
    const Pes6SquadSetupPlayer *entry;
    Pes6MatchPlayer *first = Pes6MatchPlayer_Get(D_00591E4F[actor->player.side][0]),
                    *second = Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
    func_00A14EC0(first, &actor->player);
    func_00A14EC0(second, &actor->player);
    func_001CD9E0((f32)(u32)func_009B33A0(&actor->player,
                                          (s32)(-13465.f * (f32)actor->player.goalDirection), 0));
    power = actor->player.distance114 * 3 / 10;
    if (power > 0x1200)
        power = 0x1200;
    power = power * (64 - angle) / 64;
    entry = &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    if (func_00288670(entry->current.base[27] & 127, 20) < 60 && power > 0x600)
        power = 0x600;
    if (power < 0x400)
        power = 0x400;
    return power;
}
