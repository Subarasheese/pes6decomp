/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"
typedef struct {
    u8 pad00[0x47c];
    f32 x[224], y[224], z[224];
} Forecast;

extern u8 *Pes6BallOwnerRecord;
extern u16 func_009B3070(u16 first, u16 second);
extern s32 func_00952420(TacticalActor *actor, u16 heading, u16 halfAngle, u32 distanceSquared);
extern s32 func_00BBB8C0(s32);
extern s32 func_00288670(s32, s32);
extern s32 func_0098F410(TacticalActor *);
extern s32 func_00949160(TacticalActor *, u16, s32, s32);

static inline s32 magnitude(s32 v) { return v > 0 ? v : -v; }

static inline s32 ability(TacticalActor *actor, s32 index, s32 scale) {
    const Pes6SquadSetupPlayer *entry =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return func_00288670(entry->current.base[index] & 127, scale);
}

s32 func_00957490(TacticalActor *actor) {
    u8 target;
    if (func_00BBB8C0(120 - ability(actor, 24, 40)))
        return 0;
    if (Pes6BallOwnerRecord[actor->player.side])
        return 0;
    if (actor->player.speed > 0x800)
        return 0;
    if (Pes6Ball_Current->horizontalSpeed > 0x3000 &&
        !(((Forecast *)Pes6Ball_Current)->y[0] <= -160.f) &&
        magnitude((s32)Pes6Ball_Current->vy) < 0xeb0 &&
        func_009B3070(Pes6Ball_Current->dir, actor->player.angle) < 0x5000 &&
        func_0098F410(actor)) {
        target = (u8)func_00949160(actor, Pes6Ball_Current->dir, 1, 0x1800);
        if (target != 255) {
            if (!func_00952420(actor, actor->ai.headings[target], 0x2000,
                               actor->ai.distancesSquared[target]))
                return 0;
            if (actor->ai.distancesSquared[target] < 0x900000)
                return 1;
        }
    }
    return 0;
}
