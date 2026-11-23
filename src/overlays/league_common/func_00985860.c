/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[4];
    u16 mode : 4;
    u16 displayIndex : 6;
    u16 position : 6;
    u8 reserved06[16];
} LeagueTeamSlot;
typedef struct {
    u8 reserved00[0x1f0];
    LeagueTeamSlot slots[32];
    u8 reserved4b0;
    u8 indices[32];
} LeagueTeamRoster;
extern LeagueTeamRoster *func_002260F0(u8 team);
void func_00985860(void) {
    s32 team;
    for (team = 0; team < 80; ++team) {
        LeagueTeamRoster *roster = func_002260F0((u8)team);
        if (roster) {
            s32 i;
            for (i = 0; i < 32; ++i) {
                roster->slots[i].mode = 2;
                roster->slots[i].displayIndex = (roster->slots[i].position = i % 5 + 1);
                roster->indices[i] = (u8)i;
            }
        }
    }
}
