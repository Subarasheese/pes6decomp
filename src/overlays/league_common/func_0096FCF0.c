/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"
extern u16 func_00224D90(u8 team, u8 index);
void func_0096FCF0(u8 slot) {
    SavedTeam *team = func_002260F0(slot);
    s32 pass, index, j;
    if (!team)
        return;
    for (index = 0; index < SAVED_SQUAD_SIZE; index++)
        team->lineup[index] = index;
    for (pass = 0; pass < SAVED_SQUAD_SIZE; pass++)
        for (index = 0; index < SAVED_SQUAD_SIZE; index++)
            if (((u32)func_00224D90(slot, team->lineup[index]) & 0xFFFFU) == 0U) {
                for (j = index; j < SAVED_SQUAD_SIZE - 1; j++) {
                    u8 prev = team->lineup[j];
                    team->lineup[j] = team->lineup[j + 1];
                    team->lineup[j + 1] = prev;
                }
            }
    for (index = 0; index < 11; index++)
        team->starters[index] = team->lineup[index];
}
