/* compiler: mwcc-3.0.1b198 */
#include "pes6/netlib_confirmation.h"

extern char D_00A43610[512];

s32 func_0093A420(const NetworkDialogEvent *event) {
    s32 fmt = func_001F08B0(0x020D000A);
    if (!event)
        return 0;
    if (!fmt) {
        NetworkDialogState *state = &D_00A435D0;
        if (state)
            state->missingMessage = 1;
    }
    if (event->status == 1) {
        {
            NetworkDialogState *state = &D_00A435D0;
            if (state)
                state->mode3C = 15;
        }
        releaseRemoteConfirmation();
        return 1;
    }
    func_001C48E8(D_00A43610, 0, 512);
    sprintf(D_00A43610, (const char *)fmt, event->text);
    {
        switch (displayConfirmation(D_00A43610, 3, 0, 0)) {
        case 2: {
            NetworkDialogState *state = &D_00A435D0;
            if (state)
                state->mode3C = 4;
        }
            releaseRemoteConfirmation();
            break;
        case 1:
        case 3:
        default: {
            NetworkDialogState *state = &D_00A435D0;
            if (state)
                state->mode3C = 15;
        }
            releaseRemoteConfirmation();
            break;
        case 0:
            break;
        }
    }
    return 1;
}
