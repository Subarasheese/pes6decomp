/* compiler: mwcc-3.0.1b198 */
#include "pes6/netlib_dialog.h"

s32 func_00936EF0(LobbyNoticeInput *event) {
    if (event == 0)
        return 0;
    event->active = 1;
    if (event->action == 1) {
        close_dialog_00A43380();
        return 1;
    } else {
        switch (display_network_notice(0x02000010, -1, 0)) {
        case 0:
            break;
        case 3:
            break;
        case 2:
            close_dialog_00A43380();
            break;
        case 1:
            break;
        case 4:
            break;
        }
    }
    return 1;
}
