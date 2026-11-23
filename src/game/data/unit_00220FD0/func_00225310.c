/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"

extern char *func_001C8590(char *dst, const char *src, u32 count);
void func_00225310(u8 slot, const char *name) {
    SavedTeam *team = savedTeamAt(slot);
    if (team && name)
        func_001C8590(team->name, name, sizeof(team->name));
}
