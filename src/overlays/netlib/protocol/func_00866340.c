/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_socket.h"

s32 func_00866340(NetlibServerList *list, const char *name, s32 port, s32 timeout) {
    if (list && timeout >= 0) {
        s32 status = func_008663A0(name, port, &((NetlibSocketChannel *)list)[1], timeout);
        if (status == 0)
            list->state = 0;
        return status;
    }
    return -24;
}
