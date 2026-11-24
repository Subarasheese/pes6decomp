/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
#include "pes6/ball.h"
#include "pes6/shootout_player.h"

extern u8 D_00CBBE00[];
extern s32 func_002DCA30(void);
typedef struct {
    u8 mirrored : 1;
    u8 : 7;
} FootFlags;
typedef struct {
    u8 reserved00[0x50], mirror;
} KeeperMotion;
extern u8 D_00CBBDF4[], D_00CBBDFD[], D_00CBBE04[], D_00CBBE05[], D_00591E19[], D_008B14E2[];
extern s32 D_00591E14[];
extern void func_0084A620(s32), func_009A7540(void), func_002727C0(s32), func_00B24A80(s32),
    func_00B24890(void), func_00B24A10(void), func_009E3990(void),
    func_009EE050(Pes6MatchPlayer *, u16 angle);
extern s32 func_0084A750(void), func_00B945E0(void), func_002DCA50(void),
    func_0084F8D0(s32, void *);
extern void func_001AAF50(Pes6PlayerFieldState *, s32), func_001AAF40(Pes6PlayerFieldState *, s8),
    func_009832C0(Pes6MatchPlayer *, s8 action), func_00B254B0(Pes6MatchPlayer *),
    func_00209A00(Pes6PlayerInfo *, s32 clip, s32 frame), func_0027A600(Pes6MatchPlayer *, s32),
    func_0099FE40(void), func_00B25C50(s32), func_0027D650(s8), func_00850540(s8),
    func_0084CDD0(s32, s32, u8 *), func_0084F8A0(s8), func_002B2EF0(void),
    func_009983C0(Pes6MatchPlayer *, s32), func_0099C790(void), Pes6MatchFlow_SetState(s32, s8);
void func_009E4D10(void) {
    Pes6MatchPlayer *taker, *keeper;
    if (func_002DCA30()) {
        func_0084A620(0);
        if (func_0084A750())
            return;
    }
    D_00CBBDF4[0] = 0;
    func_009A7540();
    func_002727C0(0x11);
    func_00B24A80(1);
    func_00B24890();
    if (D_00CBBDFD[0] % 10 == 0)
        func_00B24A10();
    func_009E3990();
    taker = Pes6MatchPlayer_Get(D_00CBBE04[0]);
    func_009EE050(taker, 0x8000);
    taker->info->pad2D[0] =
        ((const FootFlags *)Pes6MatchSquads[taker->team].setupPlayers[taker->slot].current.base)
            ->mirrored &
        1;
    ((ShootoutPlayer *)taker)->active = 0;
    ((ShootoutPlayer *)taker)->frames = 0;
    func_001AAF50(taker->info->fieldState, 0);
    func_001AAF40(taker->info->fieldState, 1);
    if (taker->id == 1 || taker->id == 12)
        taker->side = taker[1].side;
    taker->role = 0x36;
    taker->action = 0;
    func_009832C0(taker, 5);
    func_00B254B0(taker);
    keeper = Pes6MatchPlayer_Get(D_00CBBE05[0]);
    keeper->x = -13305.0f;
    keeper->y = 0;
    keeper->z = 0;
    ((ShootoutPlayer *)keeper)->heading = 0;
    keeper->speed = 0;
    func_00209A00(keeper->info, (u16)func_00B945E0(), 0);
    ((KeeperMotion *)keeper->info)->mirror = 0;
    func_0027A600(keeper, 0);
    func_001AAF50(keeper->info->fieldState, 0);
    func_001AAF40(keeper->info->fieldState, 1);
    keeper->role = 0x36;
    keeper->action = 0x10;
    func_009832C0(keeper, 5);
    D_00591E14[0] = 0;
    Pes6Ball_Current->horizontalSpeed = 0;
    D_00CBBE00[0] = 0xff;
    D_00591E19[0] = 0xff;
    func_0099FE40();
    func_00B25C50(1);
    func_0027D650(0);
    if (func_002DCA30()) {
        s32 mode[3] = {4, 5, 8};
        if (func_002DCA50())
            mode[2] = 6;
        func_00850540(1);
        if (func_0084F8D0(0, mode) != 1)
            return;
        func_0084CDD0(0, -1, D_008B14E2);
        func_0084F8A0(0);
        func_002B2EF0();
    }
    func_009983C0(keeper, 6);
    func_0099C790();
    Pes6MatchFlow_SetState(2, 8);
}
