/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
extern s32 func_00868290(NetlibPacket *, void *);
extern s32 func_0086B180(NetlibPacket *, void *);
extern s32 func_00871B60(NetlibPacket *, void *, void *);

s32 func_00862040(NetlibConnection *connection, NetlibPacket *packet) {
    s32 status = 0;
    switch (packet->tag) {
    case 0x0004:
        *(s32 *)((u8 *)connection + 0xf8a0) = 0;
        func_0086B180(packet, &connection->error);
        break;
    case 0x0005:
        break;
    case 0x4401:
        status = func_00871B60(packet, &connection->error, ((u8 *)connection + 0x161c0));
        break;
    case 0x0006:
        status = func_00868290(packet, ((u8 *)connection + 0x1622c));
        func_001C48E8(((u8 *)connection + 0x16230), 0, 0x14);
        break;
    default:

        break;
    }
    return status;
}
