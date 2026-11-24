/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
/* The saved roster follows the 32 original player IDs in the match-team record. */
enum { PES6_SAVED_ROSTER_OFFSET = 0x1134 };
extern s32 func_00210DF0(void);
extern u16 func_00224150(u16 team, u8 slot, s32 mode), func_00AF70F0(u16 team, u8 slot),
    func_00AF6340(u8 slot), func_00225720(void);
extern u16 func_00224A80(u16 team, u8 slot);
extern u16 *func_00223420(u16 team, u8 slot), *func_002232E0(u16 team, u8 slot);
extern u8 D_00591C09[];
static inline u16 selectedPlayer(u16 team, u8 slot) {
    u16 *entry = func_00223420(team, slot);
    return entry == 0 ? 0 : *entry;
}
static inline u16 originalPlayer(u16 team, u8 slot) {
    u16 *entry = func_002232E0(team, slot);
    return entry == 0 ? 0 : *entry;
}
static inline s32 clubPlayer(u16 team, u8 slot) {
    u16 value;
    if (D_00591C09[0] == 4) {
        if (team == 0x127)
            value = slot + 0x7080;
        else
            value = func_00224A80(team, slot);
    } else {
        value = selectedPlayer(team, slot);
    }
    return value;
}
u16 Pes6Team_GetPlayerId(u16 team, u8 slot, s32 mode) {
    if (mode != 0 && mode != 1 && mode != 2)
        mode = 0;
    if (func_00210DF0() == 2) {
        if (team >= 0xfe && team < 0x10e)
            return func_00224150(team, slot, (u8)mode);
    } else if (func_00210DF0() == 1) {
        if (team >= 0xcc && team < 0xdd)
            return func_00AF70F0(team, slot);
        if (D_00591C09[0] == 14 && team == func_00225720())
            return func_00AF6340(slot);
    }
    if (((team >= 0x40 && team <= 0xcb) || (team >= 0x113 && team <= 0x117) || team == 0x126 ||
         team == 0x127 || team == 0x112) &&
        slot >= CLUB_SLOTS)
        return 0;
    if ((s32)team >= 0 && team < 0x40 && slot >= NATIONAL_SLOTS)
        return 0;
    if ((team == 0x123 && slot < CLUB_SLOTS) || (team == 0x124 && slot < CLUB_SLOTS) ||
        (team == 0x125 && slot < CLUB_SLOTS))
        return slot + (0x7000 + (team - 0x123) * CLUB_SLOTS);
    if ((team == 0x126 || team == 0x127) && slot < CLUB_SLOTS)
        return *(const u16 *)((u32)slot * sizeof(u16) + (u32)func_00237530(team) +
                              PES6_SAVED_ROSTER_OFFSET);
    if (team >= 0x40 && team < 0xcc && slot < CLUB_SLOTS) {
        if (mode == 0)
            return clubPlayer(team, slot);
        if (mode == 1)
            return selectedPlayer(team, slot);
        return originalPlayer(team, slot);
    }
    if (team == 0x112 && slot < CLUB_SLOTS)
        return selectedPlayer(team, slot);
    if (team >= 0x113 && team < 0x118 && slot < CLUB_SLOTS)
        return selectedPlayer(team, slot);
    if (team == 0x110 || team == 0x111)
        return selectedPlayer(team, slot);
    if (mode == 0)
        return selectedPlayer(team, slot);
    return originalPlayer(team, slot);
}
