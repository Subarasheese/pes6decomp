#ifndef PES6_SAVED_TEAMS_H
#define PES6_SAVED_TEAMS_H
#include "types.h"

enum { SAVED_TEAM_COUNT = 80, SAVED_SQUAD_SIZE = 32 };
typedef struct {
    u16 playerId;
    u8 teamSlot, shirtNumber;
    u8 reserved04[2];
    u8 packedStat06, reserved07, packedStat08, reserved09, packedStat0A, reserved0B;
    u8 attributes[10];
} SavedTeamPlayer;
typedef struct {
    u16 teamId;
    u8 category;
    char name[49];
    u8 reserved34[0x1b8 - 0x34];
    u8 settings[0x2c];
    SavedTeamPlayer players[SAVED_SQUAD_SIZE];
    u8 reserved4A4[2];
    u8 starters[11];
    u8 lineup[SAVED_SQUAD_SIZE];
    u8 reserved4D1[3];
} SavedTeam;
typedef struct {
    u8 reserved00;
    u8 selectedTeam;
    u8 reserved02[0x1F0];
    u8 records54[32][54];
    u8 records24[32][24];
    u8 reservedBB2[2], listSettings[1];
} SavedTeamList;
extern u8 *Pes6SaveData_Current;
extern s32 Pes6SaveData_IsUnavailable(void);
static inline SavedTeamList *savedTeamList(void) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (Pes6SaveData_Current)
        return (SavedTeamList *)(Pes6SaveData_Current + 0x42A50);
    return 0;
}
static inline SavedTeam *savedTeamAt(u8 slot) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (Pes6SaveData_Current && slot < SAVED_TEAM_COUNT)
        return (SavedTeam *)(Pes6SaveData_Current + slot * sizeof(SavedTeam) + 0x44328);
    return 0;
}
static inline u16 savedTeamId(u8 slot) {
    SavedTeam *team = savedTeamAt(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xFFFF;
    if (!team)
        return 0xFFFF;
    return team->teamId;
}
static inline u8 savedTeamCategory(u8 slot) {
    SavedTeam *team = savedTeamAt(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!team)
        return 0;
    return team->category;
}
static inline u8 selectedTeamSlot(void) {
    SavedTeamList *list = savedTeamList();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xFF;
    if (!list)
        return 0xFF;
    return list->selectedTeam;
}
#endif
