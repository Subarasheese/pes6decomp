/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_request_dialog.h"

s32 func_00805030(const NetworkDialogEvent *event) {
    if (!event)
        return 0;
    if (event->status == 1) {
        netlib_dialog_mode_0088ab70(0xd);
        releaseNetworkConfirmation();
        return 1;
    }
    switch (func_0083BE40(0)) {
    case 4:
        netlib_dialog_mode_0088ab70(0xc);
        break;
    case 0:
        break;
    case 1:
    case 2:
    default:
        netlib_dialog_mode_0088ab70(0xc);
        releaseNetworkConfirmation();
        break;
    }
    return 1;
}
