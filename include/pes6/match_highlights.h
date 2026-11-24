#ifndef PES6_MATCH_HIGHLIGHTS_H
#define PES6_MATCH_HIGHLIGHTS_H

#include "pes6/match_replay.h"
enum {
    HIGHLIGHTS = 6,
    HIGHLIGHT_PLAYERS = 11,
    HIGHLIGHT_FRAMES = 150,
    HIGHLIGHT_SAVED_PRIORITY = 89
};
typedef struct {
    ReplayPoint position;
    u16 facing;
    f32 time;
    u16 flags : 5, firstClip : 11;
    u16 secondClip;
    f32 secondTime;
    u16 otherFacing;
    u8 active, reserved17;
} HighlightPlayerFrame;
typedef struct {
    u8 pose[REPLAY_SLOTS][2], reserved2E[2];
    HighlightPlayerFrame slots[REPLAY_SLOTS];
    ReplayQuaternion ballOrientation;
    ReplayPoint ballPosition;
    u8 ballState, reserved267;
    u16 marker, secondMarker;
    u8 flagA, flagB, reserved26E[2];
} HighlightFrame;
typedef struct {
    s16 values[21];
} HighlightPlayerConfig;
typedef struct {
    u32 header;
    HighlightFrame frames[HIGHLIGHT_FRAMES];
    HighlightPlayerConfig config[2][HIGHLIGHT_PLAYERS];
} HighlightClip;
typedef struct {
    u8 side, phase, field02, actor, reserved04[2], secondActor, kind, field08, event, priority,
        reserved0B;
    u8 roster[2][HIGHLIGHT_PLAYERS], reserved22[10];
    s32 serial;
    u16 value30;
    u8 reserved32[2];
} HighlightInfo;
typedef struct {
    s32 state;
    u8 field04, countdown, slot, keep;
    s32 serial;
    u8 actor, team, player, reserved0F;
    s32 playerSerial;
    u8 reserved14[0x28];
} HighlightRequest;
typedef struct {
    u8 header[0x14];
    HighlightRequest requests[HIGHLIGHTS];
} HighlightQueue;
extern HighlightClip *D_00CBD390[];
extern HighlightInfo D_00CBD3B0[];
extern HighlightQueue D_00CBD5D0;
extern HighlightRequest *func_00BC8DB0(s32 index);
extern void func_00BC6A60(s32 index), func_00BC9000(s32 force);
extern s32 func_00BC71E0(ReplayBuffer *, u8 actor, u8 secondActor, u8 priority, u8 event, s32 mode);
typedef char check_highlight_frame_size[sizeof(HighlightFrame) == 0x270 ? 1 : -1];
typedef char check_highlight_clip_size[sizeof(HighlightClip) == 0x17140 ? 1 : -1];
typedef char check_highlight_info_size[sizeof(HighlightInfo) == 0x34 ? 1 : -1];
typedef char check_highlight_request_size[sizeof(HighlightRequest) == 0x3c ? 1 : -1];
static inline void reassignRequest(u8 from, u8 to) {
    s32 reqIndex;
    for (reqIndex = 0; reqIndex < HIGHLIGHTS; reqIndex++) {
        HighlightRequest *request = func_00BC8DB0(reqIndex);
        if (request && request->slot == from) {
            request->slot = (u8)to;
            if (to == HIGHLIGHTS)
                request->state = 0;
        }
    }
}
static inline s32 clipMarker(HighlightClip *clip) {
    s32 i, j;
    for (i = 0; i < HIGHLIGHT_FRAMES; i++)
        for (j = 0; j < REPLAY_SLOTS; j++) {
            HighlightPlayerFrame *slot = &clip->frames[i].slots[j];
            s32 code = slot->firstClip;
            if (code >= 0x5ca && code < 0x5e2)
                return clip->frames[i].marker;
        }
    return REPLAY_NO_MARKER;
}

#endif
