/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_request_dialog.h"

s32 func_00806840(const NetworkDialogEvent *event) {
    if (!event)
        return 0;
    if (event->status == 1) {
        netlib_dialog_mode_0088adb0(0xf);
        releaseNetworkConfirmation();
        return 1;
    }
    switch (func_0083BFA0(0)) {
    case 4:
        netlib_dialog_mode_0088adb0(0xe);
        break;
    case 0:
        break;
    case 1:
    case 2:
    default:
        netlib_dialog_mode_0088adb0(0xe);
        releaseNetworkConfirmation();
        break;
    }
    return 1;
}
