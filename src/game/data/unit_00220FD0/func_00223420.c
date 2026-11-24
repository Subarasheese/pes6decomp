/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern s32 func_00223520(u16 *team, u8 *slot);
extern u16 *func_00223B40(void), *func_00223B50(void);
u16 *func_00223420(u16 team, u8 slot) {
    u16 *player = 0;
    s32 kind = func_00223520(&team, &slot);
    if (kind != 3) {
        if (kind != 2) {
            if (kind != 1) {
                player = func_00223B50();
                if (player)
                    player += slot + team * NATIONAL_SLOTS;
            } else {
                player = func_00223B40();
                if (player)
                    player += slot + team * CLUB_SLOTS;
            }
        } else {
            if (team == 0x126 || team == 0x127) {
                Pes6MatchTeamData *saved = func_00237530(team);
                if (saved)
                    player = &saved->playerIds[slot];
            }
        }
    }
    return player;
}
