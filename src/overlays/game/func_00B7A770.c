/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
extern u16 func_009B3070(u16 first, u16 second);
typedef struct {
    u8 reserved00[0x26];
    u16 heading, target;
} OfficialFacing;
extern u8 D_00CBCDE2[];
extern void func_009832C0(Pes6MatchPlayer *, s32);
extern s32 func_00A0C770(Pes6MatchPlayer *, s32), func_00BF7550(Pes6MatchPlayer *);
s32 func_00B7A770(void) {
    s32 selected = 0;
    Pes6MatchPlayer *p = Pes6MatchPlayers;
    if (p->info->active) {
        if (!p->id && p->role != 0xe1) {
            p->role = 0xe1;
            p->action = 13;
            selected = 1;
        } else if ((func_00BF7550(p) &&
                    func_009B3070(((OfficialFacing *)p)->heading, ((OfficialFacing *)p)->target) <=
                        0x4000 &&
                    !func_00A0C770(p, 0x300)) ||
                   p->role == 0xa3 || p->role == 0x82) {
            if (p->id == D_00CBCDE2[0]) {
                func_009832C0(p, 0x37);
                p->action = 0;
                p->role = 0x32;
                selected = 1;
            } else {
                func_009832C0(p, 0x37);
                p->action = 0;
                p->role = 0x48;
                selected = 1;
            }
        }
    }
    return selected;
}
