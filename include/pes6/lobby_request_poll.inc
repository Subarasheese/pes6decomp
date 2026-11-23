/* Shared by the lobby request commands. Each command owns its phase, timer,
 * reply status and completion flag. The packet function determines the command. */
s32 PES6_POLL_REQUEST(PES6_REQUEST_ARGUMENTS) {
    s32 unavailable = 0;
    if (netlib_channel_unavailable(channel) == 1)
        unavailable = 1;
    if (channel < 0 || channel >= 9)
        PES6_REQUEST_PHASE[0] = -1;
    if (D_008A4398[0] == 0)
        PES6_REQUEST_PHASE[0] = -1;
    switch (PES6_REQUEST_PHASE[0]) {
    case 0:
        if (func_00862110(D_008A4398[0], channel) == 1) {
            if (PES6_SEND_REQUEST(&D_008A4398[0][channel], PES6_REQUEST_VALUE) == 0) {
                PES6_REQUEST_RECEIVED[0] = 0;
                PES6_REQUEST_TICKS[0] = 0;
                PES6_REQUEST_PHASE[0]++;
            } else {
                PES6_REQUEST_PHASE[0] = -1;
            }
            if (unavailable == 1)
                PES6_REQUEST_PHASE[0] = -1;
        } else {
            PES6_REQUEST_PHASE[0] = -1;
        }
        break;
    case 1:
        if (PES6_REQUEST_RECEIVED[0] == 1) {
            if (PES6_REQUEST_STATUS[0] == 0) {
                PES6_REQUEST_PHASE[0]++;
            } else {
                PES6_REQUEST_PHASE[0]++;
                PES6_REQUEST_PHASE[0]++;
            }
        } else {
            if (func_00862110(D_008A4398[0], channel) == 0)
                PES6_REQUEST_PHASE[0] = -1;
            if (++PES6_REQUEST_TICKS[0] > 7200)
                PES6_REQUEST_PHASE[0] = 3;
            if (unavailable == 1)
                PES6_REQUEST_PHASE[0] = -1;
        }
        break;
    case 2:
        PES6_REQUEST_PHASE[0] = 0;
        PES6_REQUEST_TICKS[0] = 0;
        if (netlib_channel_five_status(channel) == 1)
            return 3;
        return 4;
    case 3:
        PES6_REQUEST_PHASE[0] = 0;
        PES6_REQUEST_TICKS[0] = 0;
        if (netlib_channel_five_status(channel) == 1)
            return 3;
        return 1;
    default:
        PES6_REQUEST_PHASE[0] = 0;
        PES6_REQUEST_TICKS[0] = 0;
        if (netlib_channel_five_status(channel) == 1)
            return 3;
        return 2;
    }
    return 0;
}
