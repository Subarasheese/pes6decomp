/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_highlights.h"

extern u8 D_00CBD4F0[2][18];
extern void func_00BCA680(u8, u8);

void func_00BCA680(u8 team, u8 slot) {
    s32 i;
    Pes6MatchPlayer *player = &Pes6MatchPlayers[1];
    for (i = 0; i < 22; i++, player++) {
        if (player->team == (u8)team && player->slot == (u8)slot)
            return;
    }
    for (i = 0; i < 18; i++) {
        if (D_00CBD4F0[(u8)team][i] == 0xff) {
            D_00CBD4F0[(u8)team][i] = slot;
            return;
        }
    }
}
