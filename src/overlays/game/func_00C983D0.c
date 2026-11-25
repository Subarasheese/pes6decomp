/* compiler: mwcc-3.0.1b198 */
#include "pes6/shootout_player_cue.h"

void func_00C983D0(void) {
    s32 playCue = 0;
    PairedContext *taker = func_00B2A420(D_00CBBE04[0]);
    u16 action = (u16)taker->actor->action;
    if (action == 0x0d || action == 0x0f || action == 0x12 || action == 0x16) {
        u8 command = taker->control->command;
        if (command != 0x26) {
            if ((s32)D_00CBBDFD[0] % 2 == 0) {
                if (D_00CBBDF6[0] == 2) {
                    D_00CBBDF6[0] = 0;
                    playCue = 1;
                } else if (D_00CB3300[0][0].counters[6] > D_00CB3300[0][1].counters[6]) {
                    /* Both command groups request the same cue in the PAL game. */
                    switch (command) {
                    case 15:
                    case 8:
                    case 6:
                        playCue = 1;
                        break;
                    default:
                        playCue = 1;
                        break;
                    }
                }
            } else {
                if (D_00CBBDF7[0] == 2) {
                    D_00CBBDF7[0] = 0;
                    playCue = 1;
                } else if (D_00CB3300[0][0].counters[6] < D_00CB3300[0][1].counters[6]) {
                    switch (command) {
                    case 15:
                    case 8:
                    case 6:
                        playCue = 1;
                        break;
                    default:
                        playCue = 1;
                        break;
                    }
                }
            }
            if (playCue)
                playShootoutPlayerCue(taker);
        }
    }
}
