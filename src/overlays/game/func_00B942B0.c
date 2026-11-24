/* compiler: mwcc-3.0.1b151 */
#include "pes6/restart_player.h"
#include "pes6/ball.h"
typedef struct {
    u8 reserved00[0xa0];
    s32 heading;
} RestartMotion;
extern Pes6MatchPlayer D_0058E7F0[];
extern u8 D_00591E4C[], D_00591E4D[], D_00591E4E[], D_00591E4F[][2], D_00591C09[], D_00CBCC62[],
    D_0059274E[];
extern s16 D_00592746[], D_00592748[];
extern s32 D_00591F38[], D_00591E14[];
extern void func_00B798F0(f32 *x, f32 *z, u8 id), func_00927280(void), func_00915000(s32),
    func_0017E150(s32), func_00B27FE0(void), func_00996060(void), func_00C04780(void),
    func_00C23C70(void), func_00BA64E0(s32);
extern s32 func_00B79860(Pes6MatchPlayer *), func_002CA7A0(Pes6MatchPlayer *);
extern void func_00209A00(Pes6PlayerInfo *, s32 clip, s32 frame),
    Pes6Ball_PlaceAtRest(f32 x, f32 z), func_009EE050(Pes6MatchPlayer *, u16 angle),
    func_009983C0(Pes6MatchPlayer *, s32), func_009981A0(void), func_00997F50(void);
extern s32 func_00AFBA70(s32 id);
extern void func_002561A0(s32), func_00B26FA0(void), func_00A969A0(void), func_002727C0(s32),
    func_00B79210(void), func_00B27010(s32), func_0099FE40(void), func_009B5820(void),
    Pes6MatchFlow_SetState(s32, s8);
static inline Pes6MatchPlayer *preparePenaltyTaker(void) {
    Pes6MatchPlayer *taker;
    u16 angle;
    taker = Pes6MatchPlayer_Get(D_00591E4D[0]);
    angle = taker->angle;
    Pes6Ball_Current->dir = angle;
    ((RestartMotion *)taker)->heading = angle;
    Pes6Ball_PlaceAtRest(Pes6Ball_Current->pos[0], Pes6Ball_Current->pos[2]);
    taker->info->field2D = playerMirrored(taker);
    func_009EE050(taker, Pes6Ball_Current->dir);
    D_00591E4F[taker->side][0] = taker->id;
    taker->actionGroup = 0;
    taker->role = 0x36;
    taker->action = 1;
    D_00591E4E[0] = func_00AFBA70(taker->id);
    return taker;
}
void func_00B942B0(void) {
    Pes6MatchPlayer *taker, *keeper;
    Pes6MatchPlayer *p;
    s32 i;
    func_00B798F0(&Pes6Ball_Current->pos[0], &Pes6Ball_Current->pos[2], D_00591E4D[0]);
    func_00927280();
    func_00915000(6);
    func_0017E150(1);
    if (D_00591C09[0] == 5)
        func_00B27FE0();
    func_00996060();
    func_00C04780();
    func_00C23C70();
    func_00BA64E0(1);
    D_00591E4C[0] = 0;
    p = D_0058E7F0;
    for (i = 0; i < 22; ++i, ++p) {
        if (func_00B79860(p) && p->role != 0xff) {
            func_00209A00(p->info, 0x1bf, 0);
            p->x = p->aimX;
            p->y = 0;
            p->z = p->aimZ;
            p->speed = 0;
            p->role = 0x31;
            p->action = 0;
        }
    }
    taker = preparePenaltyTaker();
    keeper = Pes6MatchPlayer_Get(D_00591E4E[0]);
    D_00591E4F[taker->side ^ 1][0] = D_00591E4E[0];
    if (!D_00CBCC62[0]) {
        if (!func_002CA7A0(keeper))
            func_009983C0(taker, 7);
        else
            func_009983C0(keeper, 7);
        func_009981A0();
    } else
        func_00997F50();
    func_002561A0(5);
    func_00B26FA0();
    func_00A969A0();
    func_002727C0(5);
    D_0059274E[0] = 1;
    D_00592746[0] = 0x500;
    D_00592748[0] = -0x200;
    D_00591F38[0] = 0x7fff;
    D_00591E14[0] = 0;
    func_00B79210();
    func_00B27010(1);
    func_0099FE40();
    func_009B5820();
    Pes6MatchFlow_SetState(2, 8);
}
