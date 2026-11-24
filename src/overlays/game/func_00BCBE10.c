/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

extern u8 D_00CBD311[];
extern u8 D_00591DB4[];
extern s32 D_003EA780;
extern s32 D_003EA784;
extern s32 D_003EA79C;
extern u32 D_003EA794;
extern void Pes6World_SetActive(s32);
extern void func_00182B20(s32);
extern void func_00182B30(s32);
extern void func_002727C0(s32);
extern s32 func_00152130(s32, s32);
extern s32 func_00C00630(void);
extern void func_00209A00(Pes6PlayerInfo *, s32, s32);
extern void func_001AAF40(void *, s32);
extern void func_001A58E0(void *, s32);
extern void func_00996060(void);
extern void func_00C04780(void);
extern void func_00C23C70(void);
extern void func_00270580(s32);
extern void func_009A7540(void);
extern void func_009B4450(s32);
extern void func_0027A7B0(s32);
extern void func_0027A4B0(s32);
extern void func_00BA1660(void);
extern void func_00BA17E0(void);
extern void func_00B26020(void);

void func_00BCBE10(void) {
    u8 i;
    s32 event;
    Pes6MatchPlayer *actor;
    D_003EA784 = 1;
    D_00591DB4[0] = 0;
    if (!func_00152130(1, 16))
        return;
    if (!D_00CBD390[0]) {
        D_003EA780 = 12;
        return;
    }
    event = func_00C00630();
    switch (event) {
    case 36:
    case 38:
    case 40:
        D_003EA780 = 12;
        return;
    }
    i = 0;
    actor = Pes6MatchPlayers;
    Pes6Ball_Current->replayDisplay = 0;
    for (; i < REPLAY_SLOTS; i++, actor++) {
        func_00209A00(actor->info, 0, 0);
        func_001AAF40(actor->info->fieldState, 0);
        actor->info->active = 0;
        func_001A58E0(actor->info->fieldState, actor->info->active);
    }
    Pes6World_SetActive(0);
    func_00182B30(0);
    func_00182B20(0);
    func_00996060();
    func_00C04780();
    func_00C23C70();
    D_00CBD311[0] = 0;
    func_00270580(1);
    func_009A7540();
    func_009B4450(0);
    func_0027A7B0(1);
    func_0027A4B0(0);
    D_003EA79C = 0;
    func_002727C0(30);
    func_00BA1660();
    func_00BA17E0();
    func_00B26020();
    D_003EA794 = 0;
    D_003EA780 = 2;
}
