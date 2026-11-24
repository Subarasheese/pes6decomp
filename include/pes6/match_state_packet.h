#ifndef PES6_MATCH_STATE_PACKET_H
#define PES6_MATCH_STATE_PACKET_H

#include "pes6/ball.h"
typedef struct {
    u8 lastTouch, lastSide[3], touchActors[3], sideActors[2], state, reserved0A[2];
    f32 position[3];
    u16 ballHistory[3], reserved1E;
    s32 ballValue;
    u8 action, reserved25;
    u16 seed, complement, reserved2A;
    s32 remainingTime;
} MatchStatePayload;
typedef struct {
    s16 type, mode;
    u8 reserved4[0x31c - 4];
    MatchStatePayload payload;
    u8 remaining[0x3c4 - 0x34c];
} MatchStatePacket;
extern MatchStatePacket *func_00853430(s32 channel, s32 *existing, s32 size);
extern void func_00853240(MatchStatePacket *packet, s32 used), func_00851E70(MatchStatePacket *);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern s32 Pes6Random_Below(u16 limit);
extern u8 func_009B4050(void);
extern u8 D_00591E57[], D_00591E64[], D_00591E65[], D_00591E66[], D_00591E19[], D_00591E1A[],
    D_00591E1B[], D_00591E4D[], D_00591E4E[], D_00CBCDB1[];
extern f32 D_00591E58[], D_00591E5C[], D_00591E60[];
extern s32 D_008B145C[], D_008B1460[], D_008B1454[], D_008B1458[], Pes6MatchClock_Remaining[],
    D_008B14F4[];
extern s16 D_008B1464[], D_008B1466[];
typedef char check_match_state_payload[sizeof(MatchStatePayload) == 0x30 ? 1 : -1];
typedef char check_match_state_packet[sizeof(MatchStatePacket) == 0x3c4 ? 1 : -1];
static inline s32 sendMatchStatePacket(s16 mode) {
    s32 existing = 0;
    MatchStatePacket *packet = func_00853430(5, &existing, sizeof(*packet));
    if (!existing) {
        func_001C48E8(packet, 0, sizeof(*packet));
        packet->type = 0x17;
        packet->mode = mode;
        func_00851E70(packet);
        packet->payload.lastTouch = D_00591E57[0];
        packet->payload.lastSide[0] = D_00591E64[0];
        packet->payload.lastSide[1] = D_00591E65[0];
        packet->payload.lastSide[2] = D_00591E66[0];
        packet->payload.touchActors[0] = D_00591E19[0];
        packet->payload.touchActors[1] = D_00591E1A[0];
        packet->payload.touchActors[2] = D_00591E1B[0];
        packet->payload.sideActors[0] = D_00591E4D[0];
        packet->payload.sideActors[1] = D_00591E4E[0];
        packet->payload.position[0] = D_00591E58[0];
        packet->payload.position[1] = D_00591E5C[0];
        packet->payload.position[2] = D_00591E60[0];
        packet->payload.ballHistory[0] = Pes6Ball_Current->snapshotValues[0];
        packet->payload.ballHistory[1] = Pes6Ball_Current->snapshotValues[1];
        packet->payload.ballHistory[2] = Pes6Ball_Current->previousActions[0];
        packet->payload.ballValue = Pes6Ball_Current->field1470;
        packet->payload.action = func_009B4050();
        packet->payload.state = D_00CBCDB1[0];
        packet->payload.seed = Pes6Random_Below(0xefff);
        packet->payload.complement = ~packet->payload.seed;
        D_008B145C[0] = packet->payload.complement;
        D_008B1460[0] = packet->payload.seed;
        D_008B1454[0] = D_008B145C[0];
        D_008B1464[0] = 0;
        D_008B1458[0] = D_008B1460[0];
        D_008B1466[0] = 0;
        packet->payload.remainingTime = Pes6MatchClock_Remaining[0];
        D_008B14F4[0] = packet->payload.remainingTime;
    }
    func_00853240(packet, (u8 *)&packet->payload - (u8 *)packet + sizeof(packet->payload));
    return 0;
}

#endif
