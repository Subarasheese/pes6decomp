/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_state_packet.h"
extern u8 D_00591E79[];
extern void func_0085C0A0(void);
void func_0085BF40(const MatchStatePacket *packet) {
    func_0085C0A0();
    D_00591E57[0] = packet->payload.lastTouch;
    D_00591E64[0] = packet->payload.lastSide[0];
    D_00591E65[0] = packet->payload.lastSide[1];
    D_00591E66[0] = packet->payload.lastSide[2];
    D_00591E19[0] = packet->payload.touchActors[0];
    D_00591E1A[0] = packet->payload.touchActors[1];
    D_00591E1B[0] = packet->payload.touchActors[2];
    D_00591E4D[0] = packet->payload.sideActors[0];
    D_00591E4E[0] = packet->payload.sideActors[1];
    D_00591E58[0] = packet->payload.position[0];
    D_00591E5C[0] = packet->payload.position[1];
    D_00591E60[0] = packet->payload.position[2];
    Pes6Ball_Current->previousActions[0] = packet->payload.ballHistory[2];
    Pes6Ball_Current->snapshotValues[0] = packet->payload.ballHistory[0];
    Pes6Ball_Current->snapshotValues[1] = packet->payload.ballHistory[1];
    Pes6Ball_Current->field1470 = packet->payload.ballValue;
    D_00591E79[0] = packet->payload.action;
    D_00CBCDB1[0] = packet->payload.state;
    D_008B1454[0] = D_008B145C[0];
    D_008B1464[0] = 0;
    D_008B1458[0] = D_008B1460[0];
    D_008B1466[0] = 0;
    D_008B14F4[0] = packet->payload.remainingTime;
}
