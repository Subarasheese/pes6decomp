/* compiler: mwcc-3.0.1b151 */

#include "pes6/ball.h"
#include "pes6/target_heading.h"
typedef struct {
    u8 pad00[0x4e], readiness, pad4F[0x90 - 0x4f];
    s32 heightLimit;
    u8 pad94[0xa0 - 0x94];
    s32 savedY, reservedA4, shotAngle;
    u8 padAC[0x10c - 0xac];
    u16 ballHeading;
    u8 pad10E[2];
    u32 ballDistance;
    u8 pad114[0x1ce - 0x114];
    s16 targetX, targetZ;
} KeeperHeightDecision;
typedef union {
    Pes6MatchPlayer player;
    KeeperHeightDecision decision;
} KeeperActor;
typedef struct {
    u8 pad00[0x68], candidate, pad69[0x7c - 0x69];
    s32 shotHeight;
    u8 pad80[0x1454 - 0x80];
    f32 targetX, targetY, targetZ;
} KeeperBallTarget;
typedef union {
    Pes6Ball ball;
    KeeperBallTarget decision;
} KeeperBall;
#define keeperBall ((KeeperBall *)Pes6Ball_Current)
extern u16 func_009B30B0(u16 first, u16 second);
extern s32 func_00A194A0(KeeperActor *actor), func_002AE670(s32 value);
extern f32 D_005926D8[];
extern u8 D_005926EC[];
static inline s32 keeperMagnitude(s32 value) { return value > 0 ? value : -value; }

s32 func_00A46820(KeeperActor *actor, s32 angle, s32 movement, s32 distance, s32 mode) {
    if (actor->decision.savedY == 0x7fff || mode == 7)
        return 1;
    if (actor->decision.shotAngle == 0x7fff) {
        actor->decision.shotAngle = 0;
        return 1;
    }
    if (!(-keeperBall->decision.targetY <= (f32)actor->decision.heightLimit))
        return 0;
    if (actor->player.distance114 < 512 &&
        func_009B30B0(actor->decision.ballHeading,
                      func_009B3480(&actor->player, keeperBall->decision.targetX,
                                    keeperBall->decision.targetZ)) >= 64 &&
        distance > 0x9000)
        return 1;
    if ((!func_00A194A0(actor) &&
         (actor->decision.readiness >= D_005926EC[0] || (u16)angle <= 96) && distance >= 0x4000 &&
         (actor->decision.ballDistance > 0x40000 || (u16)angle <= 64)) ||
        actor->decision.targetX || actor->decision.targetZ) {
        if (D_005926D8[0] < (f32)func_002AE670(48) && (u16)angle >= 96 &&
            keeperMagnitude(actor->decision.heightLimit - actor->decision.savedY) <=
                keeperMagnitude(actor->decision.heightLimit + keeperBall->decision.shotHeight))
            return 0;
        if (D_005926D8[0] < (f32)func_002AE670(48) || (u16)movement < 32 || (u16)movement > 96 ||
            (distance >= 0x10000 &&
             ((u16)movement < 64 || actor->decision.readiness > func_002AE670(40) ||
              keeperBall->ball.horizontalSpeed <= 0x1800)) ||
            actor->decision.readiness <= keeperBall->decision.candidate)
            return 1;
        return 0;
    }
    return 0;
}
