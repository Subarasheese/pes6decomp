/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
#include "pes6/ball.h"
typedef struct {
    u8 pad00[0x26];
    u16 facing, target;
} PlayerFacing;
extern u8 D_00591E4D[], D_00591E4E[];
extern void func_00209820(Pes6PlayerInfo *), func_00207BE0(Pes6PlayerInfo *),
    func_00930240(Pes6MatchPlayer *), func_00209A00(Pes6PlayerInfo *, s32 clip, s32 frame),
    func_002096E0(Pes6PlayerInfo *, s32 frame);
extern s32 func_00BBB8C0(s32), func_00BBB7F0(s32), func_00BC13A0(s32),
    func_009B3480(Pes6MatchPlayer *, f32 x, f32 z);
void func_00B940B0(Pes6MatchPlayer *p) {
    switch ((u16)p->action) {
    case 0: {
        u8 keeperId;
        u8 playerId;
        playerId = p->id;
        if (playerId == D_00591E4D[0])
            return;
        keeperId = D_00591E4E[0];
        if (playerId != keeperId) {
            s16 d = Pes6MatchPlayer_Get(keeperId)->goalDirection;
            f32 x = p->x;
            if ((f32)d * x <= -7961.0f)
                func_00209A00(p->info, 0, 0);
            else
                func_00209A00(p->info, 0x1bf, 0);
            func_002096E0(p->info, func_00BBB7F0(8));
            p->speed = 0;
            {
                Pes6Ball *ball = Pes6Ball_Current;
                ((PlayerFacing *)p)->facing = func_009B3480(p, ball->pos[0], ball->pos[2]);
            }
            ((PlayerFacing *)p)->target = ((volatile PlayerFacing *)p)->facing;
            p->role = 7;
            p->action = 0;
        } else {
            u16 clip;
            switch (func_00BBB8C0(5)) {
            case 0:
            default:
                clip = (u16)func_00BC13A0(0x41);
                break;
            case 1:
                clip = (u16)func_00BC13A0(0x3e);
                break;
            case 2:
                clip = (u16)func_00BC13A0(0x40);
                break;
            case 3:
                clip = (u16)func_00BC13A0(0x3f);
                break;
            }
            func_00209A00(p->info, (u16)clip, 0);
            {
                u16 face = p->angle;
                ((PlayerFacing *)p)->target = face;
                ((PlayerFacing *)p)->facing = face;
            }
            p->speed = 0;
            p->action = 7;
        }
        break;
    }
    case 7:
        func_00209820(p->info);
        func_00207BE0(p->info);
        func_00930240(p);
        break;
    }
}
