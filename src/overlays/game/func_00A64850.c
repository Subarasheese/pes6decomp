/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern s32 D_00592260[];
extern s32 func_00288670(s32, s32);
extern s32 func_00AA3540(ShotActor *);
extern u16 func_009B3070(u16, u16);
extern s32 func_00A1FE80(s32, s32);
extern s32 func_00BBB780(s16);
extern s32 D_00592268[];

static inline s32 shotRating(ShotActor *actor, s32 index) {
    const Pes6SquadSetupPlayer *entry =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return func_00288670(entry->current.base[index] & 127, 50);
}

void func_00A64850(ShotActor *actor, u16 direction, s32 power, s32 rise, u32 mode) {
    s32 attribute = 10 * shotRating(actor, 22);
    if (mode == 0 || mode == 1) {
        u16 turn = func_009B3070(actor->shot.movement, direction);
        s32 limit;
        if (turn <= 0x2800)
            limit = func_00A1FE80((actor->player.speed * 9) / 10, 0xe00);
        else {
            turn -= 0x2000;
            turn = turn * 60 / 100;
            limit = actor->player.speed * (0x8000 - turn) / 0x8000;
        }
        if (limit < attribute + 0x600)
            limit = attribute + 0x600;
        if (power > limit)
            power = limit;
    }
    if (mode != 1 && rise < 0) {
        s32 limit;
        u16 turn;
        if (func_00AA3540(actor) < 0xc400 &&
            !(u8)func_00BBB780((s16)((actor->shot.contestValue + shotRating(actor, 4)) / 2 - 60)))
            limit = (-shotRating(actor, 22)) * 3;
        else
            limit = (-shotRating(actor, 22)) * 5;
        limit = limit * actor->player.speed / (actor->shot.runLimit - 512);
        turn = func_009B3070(actor->shot.facing, direction);
        if (turn < func_009B3070(actor->shot.movement, direction))
            turn = func_009B3070(actor->shot.movement, direction);
        if (rise > limit)
            rise = limit;
        rise = rise * (0x8000 - turn) / 0x8000;
    }
    D_00592260[0] = power;
    D_00592268[0] = rise;
}
