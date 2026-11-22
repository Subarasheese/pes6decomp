/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
extern s32 func_00866FC0(NetlibPacket *, void *);
extern s32 func_00867040(NetlibPacket *, void *, void *, void *);
extern s32 func_00867110(NetlibPacket *, void *, void *);
extern s32 func_00868C30(NetlibPacket *, void *);

s32 func_0085F780(NetlibConnection *connection, NetlibPacket *packet) {
    switch (packet->tag) {
    case 0x3087:
        *(s32 *)((u8 *)connection + 0x15e14) = 0;
        func_001C48E8(((u8 *)connection + 0x1561c), 0, 0x7f8);
        return func_00867110(packet, &connection->error, ((u8 *)connection + 0x15618));
    case 0x3088:
        return func_00867040(packet, &connection->error, ((u8 *)connection + 0x1561c),
                             ((u8 *)connection + 0x15e14));
    case 0x3089:
        return 0x3089;
    case 0x308B:
        return func_00866FC0(packet, &connection->error);
    case 0x308D:
        return func_00868C30(packet, &connection->error);
    default:
        return NETLIB_UNEXPECTED_TAG;
    }
}
