/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
enum { SAVED_STARTERS_OFFSET = 7 };

typedef struct {
    u8 reserved00[6], setting, starters[11], reserved12[0x8b - 0x12];
} FormationSavedSide;
extern FormationMenuTeam D_008EE750[FORMATION_SIDES];
extern FormationSavedSide D_00591A90[FORMATION_SIDES];
extern u8 D_008EE730[FORMATION_SIDES][FORMATION_STARTERS], D_003EA4F0[2], D_003EA4F1;
extern u16 D_008EE190[];
extern u8 D_00591EFC[], D_00591A96[], D_00591B21[];
extern s32 D_003EA4E0;
extern void func_008BFC70(s32, const FormationOptions *), func_008C0040(s32, FormationOptions *),
    func_0099D5E0(void);
static inline u8 formationFlag(void) {
    if (D_008EE190[0] & 0x80)
        return 1;
    return 0;
}
void Pes6FormationMenu_Close(void) {
    s32 side;
    FormationMenuTeam *team;
    const u8 *saved;
    const u8 *active;
    s32 slot;
    if (D_003EA4E0 != 0)
        return;
    for (side = 0, team = D_008EE750; side < FORMATION_SIDES; side++, team++) {
        if (team->selection != 0xff && (D_008EE190[0] & 0x10)) {
            func_008BFC70(side, &team->options);
            if ((D_008EE190[0] & 0x30) != 0x30)
                continue;
        }
        if (team->selection != 0xff || (!formationFlag() && (s16)(D_008EE190[0] & 15) == 3))
            func_008C0040(side, &team->options);
    }
    for (slot = 0, saved = (const u8 *)&D_00591A90, active = (const u8 *)&D_008EE730;
         slot < FORMATION_STARTERS; slot++, saved++, active++) {
        if (active[0] != saved[SAVED_STARTERS_OFFSET]) {
            D_00591EFC[0] = 1;
            break;
        }
        if (active[FORMATION_STARTERS] !=
            saved[sizeof(FormationSavedSide) + SAVED_STARTERS_OFFSET]) {
            D_00591EFC[0] = 1;
            break;
        }
    }
    if (D_003EA4F0[0] != D_00591A96[0])
        D_00591EFC[0] = 1;
    if (D_003EA4F1 != D_00591B21[0])
        D_00591EFC[0] = 1;
    if ((s16)(D_008EE190[0] & 15) != 5 && (s16)(D_008EE190[0] & 15) != 3)
        func_0099D5E0();
}
