/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_room_packets.h"
s32 func_0086B970(NetlibPacket *packet, NetlibRoomState *state) {
    if (!packet || !state)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x436e)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    netlib_read_room_options(packet, &state->options);
    func_00874460(packet);
    func_0086A8E0(state);
    state->selectedOption = state->options.values[3];
    state->options.received = 1;
    return 0;
}
