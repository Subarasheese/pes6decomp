/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
#include "pes6/ball.h"
typedef struct {
    u8 pad00[0x28];
    u16 movement;
    u8 pad2A[0x5c - 0x2a];
    u8 fatigue;
    u8 pad5D[0x10c - 0x5d];
    u16 ballHeading;
} RangeFields;
typedef union {
    Pes6MatchPlayer player;
    RangeFields range;
} RangeActor;
typedef struct {
    u8 pad00[0x47c];
    f32 x[224], y[224], z[224];
} BallForecast;
extern u8 D_005926E8[], D_005926DE[];
extern u16 func_009B30B0(u16 first, u16 second);
extern u16 func_00A9C660(u8 *player);
extern s32 func_00AA3540(RangeActor *player);
extern s32 func_009B33A0(void *player, s32 x, s32 z);
s32 func_00A5AFB0(RangeActor *actor, s32 range) {
    s32 frame;
    if (func_009B30B0(actor->range.ballHeading, Pes6Ball_Current->dir) >= 32)
        return 1;
    if (range < 0x900000)
        return 1;
    if (func_00AA3540(actor) <= 0x40000)
        return 1;
    if (func_009B30B0(actor->range.ballHeading, Pes6Ball_Current->dir) <= 32)
        return 1;
    if (range < 0x1440000 &&
        func_009B30B0(func_00A9C660((u8 *)actor), actor->range.movement) <= 32 &&
        actor->player.speed > 0x1100 - 12 * actor->range.fatigue)
        return 1;
    if (range < 0xc40000) {
        for (frame = 0; frame < (s32)D_005926E8[0]; frame += D_005926DE[0]) {
            const BallForecast *path = (const BallForecast *)Pes6Ball_Current;
            if (path->y[frame] < -336.f && (u32)func_009B33A0(&actor->player, (s32)path->x[frame],
                                                              (s32)path->z[frame]) <= 0x2400)
                return 1;
        }
    }
    return 0;
}
