/* compiler: mwcc-3.0.1b151-O3 */
#include "pes6/netlib_socket_transport.h"
extern s32 func_00865E00(NetlibConnection *connection);
extern s32 func_00865A30(NetlibConnection *connection);
extern s32 func_00864D60(NetlibConnection *connection);
extern s32 func_008642D0(NetlibConnection *connection);
extern s32 func_008629D0(NetlibConnection *connection);
extern s32 func_00862800(NetlibConnection *connection);
extern s32 func_008637B0(NetlibConnection *connection);
extern s8 D_003EA36C;
extern void (*D_003EA360)(NetlibConnection *, s32, s32);
extern void (*D_003EA35C)(NetlibConnection *, s32);
s32 func_00866040(NetlibConnection *connection) {
    s32 status = 1;
    s32 i;
    for (i = 0; i < 9; i++) {
        NetlibSocketChannel *channel = &((NetlibSocketChannel *)connection->pad0000)[i];
        if (channel->descriptor == -1)
            continue;
        status = func_0085F2E0(&connection->packets[i], channel);
        if (status == -99) {
            func_002DE2D0(channel->descriptor);
            channel->descriptor = -1;
            channel->state = 0;
            channel->sequence = 0;
            continue;
        }
        if (status == -64 || status == -73)
            continue;
        if (status != 0 && D_003EA360) {
            D_003EA360(connection, i, status);
            continue;
        }
        D_003EA36C = 0;
        switch (i) {
        case 1:
            status = func_00865E00(connection);
            break;
        case 2:
            status = func_00865A30(connection);
            break;
        case 3:
            status = func_00864D60(connection);
            break;
        case 4:
            status = func_008642D0(connection);
            break;
        case 5:
            status = func_008629D0(connection);
            break;
        case 6:
            status = func_00862800(connection);
            break;
        case 8:
            status = func_008637B0(connection);
            break;
        default:
            break;
        }
        if (status >= 0 && D_003EA35C)
            D_003EA35C(connection, i);
    }
    return status;
}
