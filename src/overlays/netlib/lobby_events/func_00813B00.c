/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/netlib_confirmation.h"

extern char D_008A33D0[512];

s32 func_00813B00(const NetworkDialogEvent *event) {
    s32 fmt = func_001F08B0(0x2030002);
    if (!event)
        return 0;
    if (!fmt) {
        NetworkDialogState *state = &D_008A3390;
        if (state)
            state->missingMessage = 1;
    }
    if (event->status == 1) {
        {
            NetworkDialogState *state = &D_008A3390;
            if (state)
                state->mode3C = 0x11;
        }
        releaseRemoteConfirmation();
        return 1;
    }
    func_001C48E8(D_008A33D0, 0, 512);
    sprintf(D_008A33D0, (const char *)fmt, event->text);
    {
        switch (displayConfirmation(D_008A33D0, 3, 0, 0)) {
        case 2: {
            NetworkDialogState *state = &D_008A3390;
            if (state)
                state->mode3C = 0x7;
        }
            releaseRemoteConfirmation();
            break;
        case 1:
        case 3:
        default: {
            NetworkDialogState *state = &D_008A3390;
            if (state)
                state->mode3C = 0x11;
        }
            releaseRemoteConfirmation();
            break;
        case 0:
            break;
        }
    }
    return 1;
}
