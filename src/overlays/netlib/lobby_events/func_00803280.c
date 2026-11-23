/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_request_dialog.h"

s32 func_00803280(const NetworkDialogEvent *event) {
    if (!event)
        return 0;
    if (event->status == 1) {
        netlib_dialog_mode_0088a930(0x12);
        releaseNetworkConfirmation();
        return 1;
    }
    switch (func_0083C270(0)) {
    case 4:
        netlib_dialog_mode_0088a930(0x11);
        break;
    case 0:
        break;
    case 1:
    case 2:
    default:
        netlib_dialog_mode_0088a930(0x11);
        releaseNetworkConfirmation();
        break;
    }
    return 1;
}
