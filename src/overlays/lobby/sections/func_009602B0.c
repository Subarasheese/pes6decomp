/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_active_id.h"

s32 func_009602B0(void) {
    s32 id;
    u8 status;
    LobbyConnectionSelection *connection = (LobbyConnectionSelection *)func_0082C2A0();
    if (!connection)
        return 0;
    id = *D_008AA110;
    status = *D_008AA10F;
    switch (status) {
    case 0:
        id = 0;
        break;
    case 1:
        id = 0;
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        id = 0;
        break;
    }
    if (!id) {
        status = connection->status;
        id = connection->id;
        switch (status) {
        case 0:
            id = 0;
            break;
        case 1:
            id = 0;
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            id = 0;
            break;
        }
    }
    return id;
}
