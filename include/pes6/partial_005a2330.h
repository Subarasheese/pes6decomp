#ifndef PES6_PARTIAL_005A2330_H
#define PES6_PARTIAL_005A2330_H

#include "types.h"

typedef struct {
    u8 kind, firstEnabled;
    s16 reserved02, first[2], firstSaved[2];
    u8 secondEnabled, reserved0D;
    s16 second[2], secondSaved[2];
} MatchSlotEntry;

typedef struct {
    u8 count, field01;
    MatchSlotEntry entries[7];
} MatchSideSlots;

typedef struct {
    u8 enabled, field01;
    s16 scores[2];
    u8 field06, field07;
    MatchSlotEntry entries[2];
} MatchSharedSlots;

typedef struct {
    u8 header;
    u8 flags[2];
    u8 setting03, field04, field05;
    union {
        MatchSideSlots teams[2];
        MatchSharedSlots shared;
    } slots;
    u8 values[2];
    u8 reserved140[0x13], field153;
} PartialState005A2330;

typedef char check_match_slot_entry_size[sizeof(MatchSlotEntry) == 0x16 ? 1 : -1];
typedef char check_match_side_slots_size[sizeof(MatchSideSlots) == 0x9C ? 1 : -1];
typedef char check_match_slot_state_size[sizeof(PartialState005A2330) == 0x154 ? 1 : -1];
extern PartialState005A2330 D_005A2330;

#endif
