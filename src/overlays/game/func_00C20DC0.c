/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    Pes6MatchPlayer *player;
    void *control;
} RestartContext;
extern RestartContext *func_00B2A420(u32);
extern u32 func_00BF6270(void);
extern void func_00BEDBE0(RestartContext *), func_00BBB960(s32);
extern void func_001AAF50(Pes6PlayerFieldState *, s32), func_001AAF40(Pes6PlayerFieldState *, s8);
extern void func_00B27010(s32), func_00B25380(Pes6MatchPlayer *), Pes6Ball_SetByte0(int);
extern u8 Pes6MatchFlow_GetState(s32);
extern void func_009E1CB0(s32), func_009B4450(s32), func_00AD0A20(void);
extern s32 func_002DCA30(void), func_00152130(s32, u8);
extern void func_00C20820(void), func_00C20A90(void), func_00C20BA0(void), func_00C20CA0(void);
extern s32 D_008B145C[];
extern u8 D_00591BE4[];
void func_00C20DC0(void) {
    RestartContext *active;
    switch (Pes6MatchFlow_GetState(3)) {
    case 0:
        func_00C20CA0();
        break;
    case 1:
        func_00C20BA0();
        break;
    case 2:
        if (func_002DCA30())
            func_00BBB960(D_008B145C[0]);
        active = func_00B2A420(func_00BF6270());
        func_00BEDBE0(active);
        func_001AAF50(active->player->info->fieldState, 0);
        func_001AAF40(active->player->info->fieldState, 1);
        func_00B27010(0);
        func_00B25380(active->player);
        Pes6Ball_SetByte0(0);
        func_009E1CB0(3);
        break;
    case 3:
        func_00C20A90();
        break;
    case 4:
        func_00AD0A20();
        if (func_00152130(1, (u8)((60 / (s32)D_00591BE4[0]) << 5)) == 1)
            func_009E1CB0(3);
        break;
    case 5:
        func_00C20820();
        break;
    }
    func_009B4450(0);
}
