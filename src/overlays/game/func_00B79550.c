/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x36d4];
    s32 frameCount;
} MatchAnimationData;
extern MatchAnimationData *D_003E74CC;
extern u8 D_00591BE4[];
extern s32 func_00BC03A0(u16), func_00BBB8C0(s32);
extern void func_00209A00(Pes6PlayerInfo *, s32, u16),
    func_00207780(Pes6PlayerInfo *, s32, u16, u8);
void func_00B79550(Pes6MatchPlayer *p, s32 blend) {
    s32 duration, transition;
    s32 frame;
    transition = 24;
    switch (func_00BC03A0(p->info->unk30)) {
    case 0x3d:
        transition = 30;
        break;
    }
    duration = 100 + func_00BBB8C0(2 * D_00591BE4[0]);
    frame = func_00BBB8C0(D_003E74CC->frameCount - 1);
    if (blend) {
        func_00207780(p->info, 0x1bf, (u16)frame, (u8)transition);
        p->pad2C[0x62 - 0x2c] = duration;
    } else {
        func_00209A00(p->info, 0x1bf, (u16)frame);
        p->pad2C[0x62 - 0x2c] = duration;
    }
}
