/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/netlib_confirmation.h"

typedef struct {
    s8 status;
    u8 reserved[7];
    char first[0x31];
    char second[1];
} NetworkPairEvent;
extern u32 func_001CDA50(s32);
extern char D_0088AE20[512];

s32 func_00806DF0(const NetworkPairEvent *event) {
    s32 fmt = func_001F08B0(0x020D002A);
    u32 language = func_001CDA50(1);
    if (!event)
        return 0;
    if (!fmt) {
        NetworkDialogState *state = &D_0088ADB0;
        if (state)
            state->missingMessage = 1;
    }
    if (event->status == 1) {
        {
            NetworkDialogState *state = &D_0088ADB0;
            if (state)
                state->mode6C = 0xF;
        }
        releaseNetworkConfirmation();
        return 1;
    }
    func_001C48E8(D_0088AE20, 0, 512);
    switch (language) {
    case 5:
        sprintf(D_0088AE20, (const char *)fmt, event->second, event->first);
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    default:
        sprintf(D_0088AE20, (const char *)fmt, event->first, event->second);
        break;
    }
    {
        switch (displayConfirmation(D_0088AE20, 3, 0, 1)) {
        case 2: {
            NetworkDialogState *state = &D_0088ADB0;
            if (state)
                state->mode6C = 5;
        }
            releaseNetworkConfirmation();
            break;
        case 1:
        case 3:
        default: {
            NetworkDialogState *state = &D_0088ADB0;
            if (state)
                state->mode6C = 7;
        }
            releaseNetworkConfirmation();
            break;
        case 0:
            break;
        }
    }
    if (func_0082C8A0(0x6B) == 1) {
        releaseNetworkConfirmation();
        {
            NetworkDialogState *state = &D_0088ADB0;
            if (state)
                state->mode6C = 0xE;
        }
    } else if (func_0082C8A0(0x69) == 1) {
        releaseNetworkConfirmation();
        {
            NetworkDialogState *state = &D_0088ADB0;
            if (state)
                state->mode6C = 0xE;
        }
    }
    return 1;
}
