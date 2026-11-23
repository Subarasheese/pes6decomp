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

static inline u8 match_event_kind(MatchEvent *record) {
    return func_00C132C0((u8 *)record);
}

static inline u8 match_event_player(MatchEvent *record) {
    return func_00C132B0((u8 *)record);
}

#endif
