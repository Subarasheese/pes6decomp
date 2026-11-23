/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/netlib_confirmation.h"

extern char D_0088A970[512];

s32 func_00803920(const NetworkDialogEvent *event) {
    s32 fmt = func_001F08B0(0x02030005);
    if (!event)
        return 0;
    if (!fmt) {
        NetworkDialogState *state = &D_0088A930;
        if (state)
            state->missingMessage = 1;
    }
    if (event->status == 1) {
        {
            NetworkDialogState *state = &D_0088A930;
            if (state)
                state->mode3C = 0x12;
        }
        releaseNetworkConfirmation();
        return 1;
    }
    func_001C48E8(D_0088A970, 0, 512);
    sprintf(D_0088A970, (const char *)fmt, event->text);
    {
        switch (displayConfirmation(D_0088A970, 3, 0, 1)) {
        case 2: {
            NetworkDialogState *state = &D_0088A930;
            if (state)
                state->mode3C = 8;
        }
            releaseNetworkConfirmation();
            break;
        case 1:
        case 3:
        default: {
            NetworkDialogState *state = &D_0088A930;
            if (state)
                state->mode3C = 0xB;
        }
            releaseNetworkConfirmation();
            break;
        case 0:
            break;
        }
    }
    if (func_0082C8A0(0x54) == 1) {
        releaseNetworkConfirmation();
        {
            NetworkDialogState *state = &D_0088A930;
            if (state)
                state->mode3C = 0x11;
        }
    } else if (func_0082C8A0(0x52) == 1) {
        releaseNetworkConfirmation();
        {
            NetworkDialogState *state = &D_0088A930;
            if (state)
                state->mode3C = 0x11;
        }
    }
    return 1;
}
