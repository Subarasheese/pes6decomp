/* compiler: mwcc-3.0.1b151 */
#include "pes6/restart_player.h"
extern void func_00207390(Pes6PlayerInfo *, s32), func_00209A00(Pes6PlayerInfo *, s32, s32);
extern s32 func_009BAE30(Pes6MatchPlayer *);
extern s32 func_00207920(Pes6PlayerInfo *), func_00BBB8C0(s32), func_002AE670(s32);
extern u32 func_00288670(u32 rating, u32 base);
extern void func_00209540(Pes6PlayerInfo *, s32 clip, s32 frame), func_00B7C220(Pes6MatchPlayer *);
extern u8 D_00591BE4[];
void func_00B7BB60(Pes6MatchPlayer *p) {
    f32 frame;
    s32 active;
    p->role = 0x11;
    p->action = 0;
    if (p->info->unk30 == 0x29e)
        frame = (f32)func_00207920(p->info);
    else
        frame = 0.0f;
    active = 0;
    if (func_009BAE30(p))
        active = 1;
    if (!active) {
        if (func_00BBB8C0(4) || ((RestartReaction *)p)->controlled) {
            func_00209540(p->info, 0x2a5, (s32)frame);
            p->action = 5;
        } else {
            if (((RestartReaction *)p)->variation < func_002AE670(20) / 2 && !func_00BBB8C0(3) &&
                ((s32)func_00288670(
                     ((const u8 *)&Pes6MatchSquads[p->team].players[p->slot])[0x81] & 0x7f, 40) >=
                 70)) {
                func_00209540(p->info, 0x2a1, (s32)frame);
                p->action = 2;
            } else {
                ((RestartReaction *)p)->wait = func_00BBB8C0(D_00591BE4[0]);
                func_00209A00(p->info, 0x2a4, 0);
                p->action = 11;
            }
        }
        func_00207390(p->info, 8);
    } else {
        func_00B7C220(p);
    }
}
