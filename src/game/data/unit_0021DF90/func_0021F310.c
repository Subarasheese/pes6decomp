/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern s32 func_001C7E10(const char *, const char *);
extern const char *func_0021E4C0(u16 team, s32 nameKind, s32 source, u16 context);

void func_0021F310(u16 team) {
    s32 kind;
    Pes6ClubInfo *club = clubInfo(team);
    if (!club)
        return;
    if ((u32)((u16)team - SAVED_FIRST) < 2) {
        club->nameChanged = 1;
    } else {
        club->nameChanged = 0;
        for (kind = 0; kind < 2; kind++) {
            const char *original = func_0021E4C0(team, kind, 1, 0xffff);
            if (func_001C7E10(original, clubName(club, kind)) != 0) {
                club->nameChanged = 1;
                return;
            }
        }
    }
}
