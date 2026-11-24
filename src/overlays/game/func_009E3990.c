/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
#include "pes6/ball.h"
typedef struct {
    u8 reserved00[0x40];
    f32 rotation[4];
} BallDraw;
typedef struct {
    BallDraw *draw;
    u8 reserved04[8], enabled;
} BallRenderState;
extern Pes6MatchPlayer D_0058E7F0[];
extern u8 D_00591E4C[], D_00CBBDFD[];
extern s32 func_00BBB7F0(s32 spread);
extern void Pes6Ball_PlaceAtRest(f32 x, f32 z), func_00209A00(Pes6PlayerInfo *, s32 clip, s32 frame);
extern void func_009832C0(Pes6MatchPlayer *, s8 action), func_001AAF40(Pes6PlayerFieldState *, s8);
typedef struct {
    u8 reserved00[0x24], active;
} ShootoutPlayerStatus;
void func_009E3990(void) {
    Pes6MatchPlayer *player;
    s32 i;
    ((BallRenderState *)Pes6Ball_Current)->enabled = 1;
    ((BallRenderState *)Pes6Ball_Current)->draw->rotation[0] = 0;
    ((BallRenderState *)Pes6Ball_Current)->draw->rotation[1] = 0;
    ((BallRenderState *)Pes6Ball_Current)->draw->rotation[2] = 0;
    ((BallRenderState *)Pes6Ball_Current)->draw->rotation[3] = 1.0f;
    Pes6Ball_Current->pos[0] = -10649.0f + (f32)func_00BBB7F0(8);
    Pes6Ball_Current->pos[1] = -28.0f;
    Pes6Ball_Current->pos[2] = 0.0f;
    Pes6MatchState_Current.owner = 0;
    D_00591E4C[0] = 0;
    Pes6Ball_PlaceAtRest(Pes6Ball_Current->pos[0], Pes6Ball_Current->pos[2]);
    Pes6Ball_Current->unk65 = 0;
    player = D_0058E7F0;
    for (i = 0; i < 22; ++i, ++player) {
        func_00209A00(player->info, 0x1bf, 0);
        player->role = 0x4a;
        player->action = 0;
        func_009832C0(player, 0x37);
        func_001AAF40(player->info->fieldState, 0);
        if (D_00CBBDFD[0] >= 100)
            ((ShootoutPlayerStatus *)player)->active = 1;
    }
}
