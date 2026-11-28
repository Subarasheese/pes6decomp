#ifndef PES6_NETLIB_MATCH_SYNC_H
#define PES6_NETLIB_MATCH_SYNC_H

#include "types.h"

typedef struct {
    u16 tag;
    u16 reserved02;
    s32 state;
    u16 sequence;
    s8 value;
    u8 reserved0B;
    s32 states[4];
    s8 values[4];
    u16 sequences[4];
    s8 mode;
    u8 finished;
    u8 targeted;
    u8 participants;
    u16 payloadSize;
    u8 payload[0x200];
} NetlibMatchSyncPacket;

typedef struct {
    s32 mode;
    s8 ready;
    s8 finished;
    s8 dirty;
    s8 periodic;
    s32 requestedState;
    s8 localValue;
    s8 receivedValue;
    u8 participants;
    u8 reserved0F;
    s32 states[4];
    s8 values[4];
    u16 sequences[4];
    s16 selectedSlots[2];
    u8 clientRate, hostRate, pending, ticks, sent;
    u8 reserved35[3];
    s32 targeted;
    void (*readPayload)(u8 *, u16);
    u16 (*writePayload)(u8 *);
} NetlibMatchSync;

extern NetlibMatchSync *D_003EA358;
extern s32 func_002DCA40(void);
extern s32 func_0085E4F0(s16 slot, NetlibMatchSyncPacket *packet);
extern s32 func_0085E560(s16 slot, NetlibMatchSyncPacket *packet);
extern s32 func_0085E6A0(s16 slot, NetlibMatchSyncPacket *packet);
extern s32 func_0085E280(s32 notify);

#endif
