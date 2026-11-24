#ifndef PES6_MATCH_EVENT_BUFFER_H
#define PES6_MATCH_EVENT_BUFFER_H

#include "pes6/match_event_record.h"
enum { EVENT_COUNT = 5000, EVENT_DATA_BYTES = 0x6400 };
typedef struct {
    MatchEvent entries[EVENT_COUNT];
    u8 data[EVENT_DATA_BYTES];
    u16 used, count;
    u8 eventSize[128];
    u8 listeners[12];
} MatchEventBuffer;
extern MatchEventBuffer D_00CBFAA0;
/* func_00C13A20 clears the complete buffer. */
typedef char check_match_event_buffer_size[sizeof(MatchEventBuffer) == 0xb2b0 ? 1 : -1];

#endif
