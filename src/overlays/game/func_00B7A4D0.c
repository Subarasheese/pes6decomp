/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
#include "pes6/ball.h"
extern Pes6MatchPlayer D_0058E7F0[];
extern u8 D_00591E4D[], D_00591E4E[], D_00591F24[], D_005926FD[];
extern s32 func_002CA7A0(Pes6MatchPlayer *), func_00BF3FC0(void), func_00997E60(const u8 *);
typedef struct {
    u8 reserved00[0x10], controlled, reserved11[0x45 - 0x11], variation;
} RestartField;
void func_00B7A4D0(void) {
    Pes6MatchPlayer *p;
    u8 i;
    p = D_0058E7F0;
    for (i = 0; i < 22; ++i, ++p) {
        if (!func_002CA7A0(p))
            continue;
        switch (D_00591F24[0]) {
        case 4:
            return;
        case 1:
            if (p->id == D_00591E4D[0])
                continue;
            if (func_00BF3FC0() && p->id == D_00591E4E[0])
                continue;
            if (p->role == 0x35)
                continue;
            if (((const u8 *)&D_00591E00)[0x67 + p->team] == 1 && !((RestartField *)p)->controlled)
                continue;
            break;
        case 3:
            if (p->id == D_00591E4D[0])
                continue;
            if (((const u8 *)&D_00591E00)[0x67 + p->team] == 1 && !((RestartField *)p)->controlled)
                continue;
            break;
        case 2:
            if (p->id == D_00591E4D[0])
                continue;
            if (!((RestartField *)p)->controlled)
                continue;
            break;
        case 6:
            if (p->id == D_00591E4D[0])
                continue;
            if (!((RestartField *)p)->controlled)
                continue;
            break;
        case 7:
            if (p->id == D_00591E4D[0])
                continue;
            if (p->id == D_00591E4E[0])
                continue;
            if (!((RestartField *)p)->controlled)
                continue;
            break;
        default:
            break;
        }
        if (func_00997E60(&p->id) &&
            !((const u8 *)&Pes6MatchSquads[p->team].players[p->slot])[0xf8]) {
            if (!((RestartField *)p)->controlled) {
                if (!D_005926FD[0]) {
                    ((RestartField *)p)->variation = 0;
                    p->role = 0x82;
                    p->action = 0;
                } else {
                    p->role = 0xa3;
                    p->action = 0;
                }
            } else {
                p->role = 1;
                p->action = 0x30;
            }
        }
    }
}
