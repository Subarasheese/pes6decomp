#ifndef PES6_HIGHLIGHT_REQUESTS_H
#define PES6_HIGHLIGHT_REQUESTS_H

#include "pes6/match_highlights.h"

/* Some callers index a field from its own retail symbol instead of from the start of the metadata.
 * Both views advance by a full HighlightInfo. */
typedef struct {
    u8 value;
    u8 rest[sizeof(HighlightInfo) - 1];
} HighlightByteField;
typedef struct {
    s32 serial;
    u8 rest[sizeof(HighlightInfo) - sizeof(s32)];
} HighlightSerialField;
extern HighlightByteField D_00CBD3B7[], D_00CBD3BA[];
extern HighlightSerialField D_00CBD3DC[];
static inline s32 validIndex(s32 index, s32 low, s32 high) {
    s32 valid = 0;
    if (low <= index) {
        if (index < high)
            valid = 1;
    }
    return valid;
}
static inline s32 allocatedClip(u8 index) {
    s32 valid = 0;
    if (validIndex(index, 0, HIGHLIGHTS) && D_00CBD390[(u8)index])
        valid = 1;
    return valid;
}
static inline s32 clipSerial(HighlightRequest *request, u8 slot, s32 fieldBase) {
    s32 valid = 0;
    if (allocatedClip(slot) &&
        request->serial == (fieldBase ? D_00CBD3DC[slot].serial : D_00CBD3B0[slot].serial))
        valid = 1;
    return valid;
}
static inline s32 clipKind(HighlightRequest *request, u8 slot, s32 kind, s32 fieldBase) {
    s32 valid = 0;
    if (clipSerial(request, slot, fieldBase) &&
        (fieldBase ? D_00CBD3B7[slot].value : D_00CBD3B0[slot].kind) == kind)
        valid = 1;
    return valid;
}
static inline s32 markedClip(HighlightRequest *request, u8 slot, s32 kind, s32 fieldBase) {
    s32 valid = 0;
    if (clipKind(request, slot, kind, fieldBase) &&
        (fieldBase ? D_00CBD3BA[slot].value : D_00CBD3B0[slot].priority) ==
            HIGHLIGHT_SAVED_PRIORITY)
        valid = 1;
    return valid;
}
static inline s32 requestMatches(HighlightRequest *request, s32 state, s32 kind, s32 fieldBase) {
    if (!request || request->state != state)
        return 0;
    return markedClip(request, request->slot, kind, fieldBase);
}
static inline void clearPendingHighlightRequests(void) {
    s32 i;
    for (i = 0; i < HIGHLIGHTS; i++) {
        HighlightRequest *request = &D_00CBD5D0.requests[i];
        if (request && request->state == 1) {
            if (requestMatches(request, 1, 6, 0)) {
                if (request->keep == 1)
                    D_00CBD3B0[request->slot].priority = 0;
                else
                    func_00BC6A60(request->slot);
            }
            request->state = 0;
        }
    }
}

#endif
