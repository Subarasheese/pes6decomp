/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_request_dialog.h"

s32 func_008033C0(const NetworkDialogEvent *event) {
    if (!event)
        return 0;
    if (event->status == 1) {
        netlib_dialog_mode_0088a930(0x13);
        releaseNetworkConfirmation();
        return 1;
    }
    if (func_0082C8A0(0x51) == 1) {
        s32 result;
        releaseNetworkConfirmation();
        result = func_0082C7C0(0x51);
        switch (result) {
        case 0:
            netlib_dialog_mode_0088a930(0xc);
            break;
        case -21:
            netlib_dialog_mode_0088a930(0xe);
            break;
        default:
            netlib_dialog_mode_0088a930(0x11);
            break;
        }
    } else if (func_0082C8A0(0x54) == 1) {
        releaseNetworkConfirmation();
        netlib_dialog_mode_0088a930(0x11);
    } else if (func_0082C8A0(0x52) == 1) {
        releaseNetworkConfirmation();
        netlib_dialog_mode_0088a930(0x11);
    } else if (func_0082C5B0(0x51) > 7200) {
        netlib_dialog_mode_0088a930(0x11);
        releaseNetworkConfirmation();
    }
    return 1;
}
