/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad00[4];
    s32 phase;
} LeagueSavePhase;
typedef struct {
    u8 pad00[0x1174];
    u8 teamSlots[32];
} LeagueTeamSlots;
extern LeagueSavePhase *Pes6SaveData_Current;
extern LeagueTeamSlots *func_00237530(u16);
extern u8 func_00225820(void);
extern void func_00224700(u8, u8, u8);
extern void func_0094C790(s32), func_00BC6410(void), func_00BC62A0(void), func_00BC62F0(void);
extern s32 Pes6File_AllChannelsIdle(void), func_00BCD600(s32);
extern void SD_stop(u32);
s32 func_00965790(void) {
    s32 result = -1;
    LeagueTeamSlots *team;
    s32 i;
    switch (Pes6SaveData_Current->phase) {
    case 0:
        func_0094C790(1); /* fall through */
    case 1:
        if (!Pes6File_AllChannelsIdle())
            break;
        func_00BC6410();
        func_0094C790(2); /* fall through */
    case 2:
        func_0094C790(3); /* fall through */
    case 3:
        if (func_00BCD600(2)) {
            team = func_00237530(0x126);
            if (!team)
                break;
            for (i = 0; i < 32; ++i)
                func_00224700(func_00225820(), (u8)i, team->teamSlots[i]);
            func_0094C790(4);
        }
        func_00BC62A0();
        break;
    case 4:
        func_0094C790(5);
        break;
    case 5:
        func_00BC62F0();
        SD_stop(0x9A080400);
        result = 26;
        break;
    }
    if (result != -1)
        func_0094C790(0);
    return result;
}
