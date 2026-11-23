/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/netlib_dialog.h"

s32 func_00805F70(const s8 *event) {
    if (event == 0)
        return 0;
    if (*event == 1) {
        close_dialog_0088ADB0();
        return 1;
    } else {
        switch (display_network_notice(0x020D003E, -1, 1)) {
        case 0:
            break;
        case 3:
            break;
        case 2:
            close_dialog_0088ADB0();
            break;
        case 1:
            break;
        case 4:
            break;
        }
    }
    return 1;
}
