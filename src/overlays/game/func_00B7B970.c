/* compiler: mwcc-3.0.1b151 */
#include "pes6/restart_player.h"
typedef struct {
    u8 reserved00[0x5b], flag;
} RestartAnimation;
extern u8 Pes6MatchFlow_GetState(s32);
extern void func_00C1EE80(Pes6MatchPlayer *), func_00208610(Pes6PlayerInfo *),
    func_00207390(Pes6PlayerInfo *, s32), func_00209A00(Pes6PlayerInfo *, s32, s32);
extern s32 func_00207D10(Pes6PlayerInfo *), func_009BAE30(Pes6MatchPlayer *), func_00B79380(void),
    func_00A07A50(void);
void func_00B7B970(Pes6MatchPlayer *p) {
    if (func_00207D10(p->info)) {
        ((RestartAnimation *)p->info)->flag = 0;
        switch (Pes6MatchFlow_GetState(1)) {
        case 1:
            if (!((RestartReaction *)p)->controlled) {
                func_00C1EE80(p);
                goto checkPhase;
            }
            p->role = 7;
            p->action = 0;
            break;
        }
        switch (p->info->unk30) {
        case 0x2a1:
        case 0x2a3:
            func_00208610(p->info);
            func_00207390(p->info, 10);
            break;
        case 0x1fd:
            if (!func_009BAE30(p)) {
                func_00209A00(p->info, 0x1bf, 0);
                func_00207390(p->info, 10);
                break;
            }
        default:
            func_00208610(p->info);
            func_00207390(p->info, 6);
            break;
        }
        switch (p->info->unk30) {
        case 0x1bf:
        case 0:
            p->speed = 0;
            break;
        case 0x114:
            ((RestartReaction *)p)->target = ((RestartReaction *)p)->heading;
            break;
        }
    checkPhase:
        switch ((u8)Pes6MatchFlow_GetState(1)) {
        case 1:
            return;
        default:
            if (func_00B79380()) {
                p->role = 0xfd;
                p->action = 0;
                return;
            } else if (func_00A07A50()) {
                if (((RestartReaction *)p)->controlled) {
                    p->role = 7;
                    p->action = 0;
                } else {
                    func_00C1EE80(p);
                    return;
                }
            } else {
                p->role = 0;
                p->action = 0;
            }
        }
    }
}
