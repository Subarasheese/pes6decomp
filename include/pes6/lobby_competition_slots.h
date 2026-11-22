#ifndef PES6_LOBBY_COMPETITION_SLOTS_H
#define PES6_LOBBY_COMPETITION_SLOTS_H
#include "types.h"

typedef struct CompetitionEntry CompetitionEntry;
typedef struct {
    u8 reserved[0x28];
    CompetitionEntry *entries[3];
} CompetitionSlots;

#endif
