/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern s32 func_00223520(u16 *team, u8 *slot);
extern u16 *func_00223A00(void), *func_00223A10(void);
u16 *func_002232E0(u16 team, u8 slot) {
    u16 *player = 0;
    s32 kind = func_00223520(&team, &slot);
    if (kind != 3) {
        if (kind != 2) {
            if (kind != 1) {
                player = func_00223A10();
                if (player)
                    player += slot + team * NATIONAL_SLOTS;
            } else {
                player = func_00223A00();
                if (player)
                    player += slot + team * CLUB_SLOTS;
            }
        } else {
            player = func_00223A00();
            if (player) {
                team = func_00237530(team)->originalTeam;
                player += slot + team * CLUB_SLOTS;
            }
        }
    }
    return player;
}
