/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"
#include "pes6/team_category.h"
extern u16 func_00225720(void);
static inline u8 teamCategory(u16 team) {
    s32 group = teamCategoryGroup(team);
    if (group != 3) {
        if (group != 5) {
            if (group != 1) {
                if (group != 2)
                    return 5;
                if (team == 0x35)
                    return 4;
                return 0;
            }
            return 1;
        }
        return 2;
    }
    return 3;
}
u8 func_00226240(void) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 5;
    return teamCategory(func_00225720());
}
