/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/netlib_dialog.h"

s32 func_00814310(const s8 *event) {
    if (event == 0)
        return 0;
    if (*event == 1) {
        close_dialog_008A3390();
        return 1;
    } else {
        switch (display_network_notice(0x02030006, 1, 0)) {
        case 0:
            break;
        case 3:
            break;
        case 2:
            close_dialog_008A3390();
            break;
        case 1:
        case 4:
        default:
            close_dialog_008A3390();
            break;
        }
    }
    return 1;
}
