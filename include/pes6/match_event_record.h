#ifndef PES6_MATCH_EVENT_RECORD_H
#define PES6_MATCH_EVENT_RECORD_H

#include "types.h"
typedef struct {
    u16 stamp;
    u8 kind;
    u8 player;
} MatchEvent;
#define NO_EVENT ((MatchEvent *)-1)

#endif
