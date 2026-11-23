/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/netlib_confirmation.h"

extern char D_0088ABB0[512];

s32 func_00805540(const NetworkDialogEvent *event) {
    s32 fmt = func_001F08B0(0x020D002C);
    if (!event)
        return 0;
    if (!fmt) {
        NetworkDialogState *state = &D_0088AB70;
        if (state)
            state->missingMessage = 1;
    }
    if (event->status == 1) {
        {
            NetworkDialogState *state = &D_0088AB70;
            if (state)
                state->mode3C = 0xD;
        }
        releaseNetworkConfirmation();
        return 1;
    }
    func_001C48E8(D_0088ABB0, 0, 512);
    sprintf(D_0088ABB0, (const char *)fmt, event->text);
    {
        switch (displayConfirmation(D_0088ABB0, 3, 0, 1)) {
        case 2: {
            NetworkDialogState *state = &D_0088AB70;
            if (state)
                state->mode3C = 5;
        }
            releaseNetworkConfirmation();
            break;
        case 1:
        case 3:
        default: {
            NetworkDialogState *state = &D_0088AB70;
            if (state)
                state->mode3C = 7;
        }
            releaseNetworkConfirmation();
            break;
        case 0:
            break;
        }
    }
    if (func_0082C8A0(0x7A) == 1) {
        releaseNetworkConfirmation();
        {
            NetworkDialogState *state = &D_0088AB70;
            if (state)
                state->mode3C = 0xC;
        }
    } else if (func_0082C8A0(0x78) == 1) {
        releaseNetworkConfirmation();
        {
            NetworkDialogState *state = &D_0088AB70;
            if (state)
                state->mode3C = 0xC;
        }
    }
    return 1;
}
