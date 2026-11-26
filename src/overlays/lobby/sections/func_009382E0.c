/* compiler: mwcc-3.0.1b198 */
#include "pes6/netlib_confirmation.h"

typedef struct {
    s8 status;
    u8 reserved01[7];
    char text[0x38];
    u8 active;
} LobbyConfirmationEvent;
extern char D_00A433D0[512];

s32 func_009382E0(LobbyConfirmationEvent *event) {
    s32 fmt = func_001F08B0(0x020D0015);
    if (!event)
        return 0;
    if (!fmt) {
        NetworkDialogState *state = &D_00A43380;
        if (state)
            state->missingMessage = 1;
    }
    if (event->status == 1) {
        event->active = 1;
        {
            NetworkDialogState *state = &D_00A43380;
            if (state)
                state->mode3C = 15;
        }
        releaseRemoteConfirmation();
        return 1;
    }
    func_001C48E8(D_00A433D0, 0, 512);
    if (!event->text[0]) {
        NetworkDialogState *state = &D_00A43380;
        if (state)
            state->mode3C = 11;
        releaseRemoteConfirmation();
        return 1;
    }
    sprintf(D_00A433D0, (const char *)fmt, event->text);
    {
        switch (displayConfirmation(D_00A433D0, 3, 0, 0)) {
        case 2: {
            NetworkDialogState *state = &D_00A43380;
            if (state)
                state->mode3C = 4;
        }
            releaseRemoteConfirmation();
            break;
        case 1:
        case 3:
        default: {
            NetworkDialogState *state = &D_00A43380;
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
