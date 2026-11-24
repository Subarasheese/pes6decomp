/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 value;
    u8 reserved[0x347];
} SquadColumn;
extern SquadColumn D_00592A55[][32], D_00592A56[][32];
extern void func_009A1580(void);
void func_00B94C80(Pes6MatchPlayer *p, s32 decision) {
    switch (decision) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        ++D_00592A55[p->team][p->slot].value;
        func_009A1580();
        break;
    case 4:
        ++D_00592A56[p->team][p->slot].value;
        func_009A1580();
        break;
    }
}
