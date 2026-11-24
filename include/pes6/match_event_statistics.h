#ifndef PES6_MATCH_EVENT_STATISTICS_H
#define PES6_MATCH_EVENT_STATISTICS_H

#include "pes6/match_event_record.h"

typedef struct {
    u8 reserved00;
    u8 minute;
    union {
        u16 packedPosition;
        u8 bytes[2];
    } value;
    u8 subtype;
    u8 flags;
} MatchEventDetails;

extern MatchEventDetails *func_00C13280(MatchEvent *record);
extern u8 func_00C132C0(u8 *record);
extern u8 func_00C132B0(u8 *record);
extern u8 D_003E9D50, D_003E9D51, D_003E9D52;

static inline s32 match_event_is_selected_player(MatchEvent *record, u8 kind) {
    return func_00C132C0((u8 *)record) == kind && D_003E9D50 == func_00C132B0((u8 *)record);
}

static inline u8 match_event_kind(MatchEvent *record) {
    return func_00C132C0((u8 *)record);
}

static inline u8 match_event_player(MatchEvent *record) {
    return func_00C132B0((u8 *)record);
}

static inline s32 match_event_for_side(MatchEvent *record, u8 kind) {
    s32 selected = 0;
    if (match_event_kind(record) == kind) {
        int player = match_event_player(record);
        if (D_003E9D51 == ((player >> 5) & 1))
            selected = 1;
    }
    return selected;
}

#endif
