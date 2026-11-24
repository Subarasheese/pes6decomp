/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_role_masks.h"

typedef struct {
    u8 reserved00[0xbd], player, slot;
} SquadRolePlan;

extern u8 func_002B89E0(s32);
extern s32 func_0028DD60(const void *, const void *);
extern void func_001C6158(void *, u32, u32, s32 (*)(const void *, const void *));

void func_0028D7F0(const SquadRoleSettings *settings, const SquadLineup *team, SquadRolePlan *plan,
                   const u8 *available, s32 side) {
    enum { CHOICE_SCORE, CHOICE_SLOT };
    s32 choices[STARTING_ELEVEN][2];
    u32 masks[3];
    u8 player = func_002B89E0(side);
    if (player == 255)
        return;
    if (!available[player])
        return;
    {
        s32 i, best;
        const SquadPlayerProfile *p = team->players[player];
        for (i = 0; i < STARTING_ELEVEN; i++) {
            u8 role = team->role[i];
            getRoleMasks((u8)func_002937A0(role), masks);
            choices[i][CHOICE_SCORE] = func_0028F230(settings, p, role, masks, 100);
            choices[i][CHOICE_SLOT] = i;
        }
        func_001C6158(choices, 11, sizeof(choices[0]), func_0028DD60);
        {
            s32 *first = choices[0];
            best = 0;
            if (first[CHOICE_SLOT] == 0 && p->identity.registeredPosition)
                best++;
            plan->player = player;
            plan->slot = choices[best][CHOICE_SLOT];
        }
    }
}
