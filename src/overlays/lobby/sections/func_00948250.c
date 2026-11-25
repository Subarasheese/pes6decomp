/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"

s32 func_00948250(s32 value) {
    LobbyContactList *list = lobby_contact_list();
    if (list == 0)
        return 0;
    list->count = value;
    return 1;
}
