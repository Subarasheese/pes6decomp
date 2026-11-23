/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_request_dialog.h"

s32 func_00805170(const NetworkDialogEvent *event) {
    if (!event)
        return 0;
    if (event->status == 1) {
        netlib_dialog_mode_0088ab70(0xe);
        releaseNetworkConfirmation();
        return 1;
    }
    if (func_0082C8A0(0x76) == 1) {
        s32 result;
        releaseNetworkConfirmation();
        result = func_0082C7C0(0x76);
        switch (result) {
        case 0:
            netlib_dialog_mode_0088ab70(0x8);
            break;
        case -21:
            netlib_dialog_mode_0088ab70(0xa);
            break;
        default:
            netlib_dialog_mode_0088ab70(0xc);
            break;
        }
    } else if (func_0082C8A0(0x7a) == 1) {
        releaseNetworkConfirmation();
        netlib_dialog_mode_0088ab70(0xc);
    } else if (func_0082C8A0(0x78) == 1) {
        releaseNetworkConfirmation();
        netlib_dialog_mode_0088ab70(0xc);
    } else if (func_0082C5B0(0x76) > 7200) {
        netlib_dialog_mode_0088ab70(0xc);
        releaseNetworkConfirmation();
    }
    return 1;
}
