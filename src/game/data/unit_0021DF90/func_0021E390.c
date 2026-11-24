/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern void func_0021F310(u16 team);
extern void *memset(void *, s32, u32), *memcpy(void *, const void *, u32);

void func_0021E390(u16 team, s32 kind, const char *name) {
    Pes6ClubInfo *club;
    s32 shortName = 1;
    if (kind != 1)
        shortName = 0;
    kind = shortName;
    club = clubInfo(team);
    if (club) {
        switch (kind) {
        case 0:
            memset(club->name, 0, sizeof(club->name));
            memcpy(club->name, name, sizeof(club->name));
            break;
        case 1:
            memset(club->shortName, 0, sizeof(club->shortName));
            memcpy(club->shortName, name, sizeof(club->shortName));
            break;
        }
        func_0021F310(team);
    }
}
