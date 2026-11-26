/* compiler: mwcc-3.0.1b151-O3 */
#include "pes6/netlib_socket.h"

s32 func_00862740(void *storage, s32 channel, s32 *cursor) {
    NetlibServerList *list = storage;
    s32 index;
    if (channel < 0 || channel >= 10)
        return -24;
    if (!cursor)
        index = 0;
    else {
        index = *cursor;
        if (index < 0 || index > list->count)
            index = 0;
    }
    for (; index < list->count; index++) {
        if (list->entries[index].channel == channel)
            break;
    }
    if (index == list->count) {
        index = -110;
        if (cursor)
            *cursor = index;
    } else if (cursor)
        *cursor = index + 1;
    return index;
}
