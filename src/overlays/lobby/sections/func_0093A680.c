/* compiler: mwcc-3.0.1b198 */
#include "pes6/netlib_dialog.h"

s32 func_0093A680(LobbyNoticeInput *event) {
    if (event == 0)
        return 0;

    if (event->action == 1) {

        close_dialog_00A435D0();
        return 1;
    } else {
        switch (display_network_notice(0x020D0033, 1, 0)) {
        case 0:
            break;
        case 3:
            break;
        case 2:
            close_dialog_00A435D0();
            break;
        case 1:
        case 4:
        default:
            close_dialog_00A435D0();
            break;
        }
    }
    return 1;
}
