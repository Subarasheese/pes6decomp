/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_room.h"
#include "pes6/netlib_packet_buffer.h"
extern void *func_001C48E8(void *destination, s32 byte, u32 length);
extern char *func_001C8590(char *destination, const char *source, u32 length);
s32 func_0086FB40(void *connection, NetlibRoomState *state, const char *name, s8 hasPassword,
                  const char *password) {
    NetlibPacket packet;
    if (!state)
        return NETLIB_INVALID_ARGUMENT;
    func_001C48E8(state, 0, sizeof(*state));
    if (name && ((const u8 *)name)[0])
        func_001C8590(state->name, name, sizeof(state->name) - 1);
    if (password && ((const u8 *)password)[0]) {
        func_001C8590(state->password, password, sizeof(state->password) - 1);
        state->hasPassword = 1;
    }
    netlib_begin_packet(&packet, 0x4310);
    func_008741D0(&packet, name, sizeof(state->name) - 1);
    func_00874420(&packet, &hasPassword);
    func_008741D0(&packet, password, sizeof(state->password) - 1);
    return netlib_send_packet(&packet, connection);
}
