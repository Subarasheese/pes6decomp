#ifndef PES6_LOBBY_COMPETITION_SLOTS_H
#define PES6_LOBBY_COMPETITION_SLOTS_H
#include "types.h"

struct CompetitionEntry {
    s32 status;
    u8 reserved04[0x144];
    char description[0x94];
    s32 value1dc;
    s8 field1e0, field1e1;
    u8 reserved1e2[6];
    u8 changed;
};
typedef struct CompetitionEntry CompetitionEntry;
typedef struct {
    u8 reserved[0x28];
    CompetitionEntry *entries[3];
} CompetitionSlots;

#endif
