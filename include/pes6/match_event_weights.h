#ifndef PES6_MATCH_EVENT_WEIGHTS_H
#define PES6_MATCH_EVENT_WEIGHTS_H

#include "pes6/match_event_index.h"
#include "pes6/match_event_pitch.h"

typedef struct {
    u8 kind, next, team, slot;
    f32 weight;
} WeightedMatchEvent;

enum { WEIGHTED_EVENT_CAPACITY = 96 };
typedef struct {
    WeightedMatchEvent events[WEIGHTED_EVENT_CAPACITY];
    u8 count, first, last;
} WeightedMatchEvents;

extern void func_00C22390(WeightedMatchEvents *list, WeightedMatchEvent *event);
extern MatchEvent *func_002C6250(MatchEvent *event);

static inline void weighPossessionChange(WeightedMatchEvents *list, MatchEvent *current,
                                         MatchEvent *previous, f32 scale,
                                         u8 primaryKind, u8 secondaryKind) {
    WeightedMatchEvent result;
    u8 prior = match_event_player(previous);
    s32 team = (match_event_player(current) >> 5) & 1;
    if (((prior >> 5) & 1) != team) {
        MatchEventDetails *details = func_00C13280(current);
        result.weight = -10.0f;
        if (details->flags & 7)
            result.weight *= 1.2f;
        if (details->flags & 0x30)
            result.weight *= 1.2f;
        {
            MatchEventDetails *period = func_00C13280(func_002C6250(current));
            s32 half = func_00C18DC0(period->minute);
            s32 combined = half + team;
            f32 direction = 1 - 2 * (combined % 2);
            if (direction * pitchX(details->value.packedPosition) < -7392.8003f)
                result.weight *= 1.2f;
        }
        result.kind = primaryKind;
        result.team = team;
        result.weight = (result.weight * scale) * scale;
        result.slot = match_event_player(current) & 31;
        func_00C22390(list, &result);
        if (details->subtype != 0xff) {
            result.weight = -1.0f * result.weight;
            result.kind = secondaryKind;
            result.team = (details->subtype >> 5) & 1;
            result.slot = details->subtype & 31;
            func_00C22390(list, &result);
        }
    }
}

#endif
