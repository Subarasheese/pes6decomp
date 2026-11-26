/* compiler: mwcc-3.0.1b151-O3 */
#include "pes6/netlib_socket.h"

s32 func_008626C0(void *storage, s32 index, s32 timeout) {
    NetlibServerList *list = storage;
    if (!(list && timeout >= 0)) {
        return -24;
    } else {
        if (index >= 0 && index < list->count) {
            list->state = 0;
            return func_008663A0(list->entries[index].address, list->entries[index].port,
                                 &((NetlibSocketChannel *)storage)[list->entries[index].channel],
                                 timeout);
        } else {
            return -24;
        }
    }
}
