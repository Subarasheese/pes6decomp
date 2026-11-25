/* compiler: mwcc-3.0.1b198 */
#include "pes6/shootout_player_cue.h"

static inline s32 isKeeperCueCommand(u8 command) {
    if (command != 0x22 && command != 0x2b && command != 0x2a && command != 0x29 &&
        command != 0x27 && command != 0x06 && command != 0x0f && command != 0x08 &&
        command != 0x2c && command != 0x2d && command != 0x2f && command != 0x2e)
        return 0;
    return 1;
}

void func_00C98090(void) {
    u16 playCue = 0;
    PairedContext *keeper = func_00B2A420(D_00CBBE05[0]);
    if (D_00CBBDFD[0] >= 10 &&
        ((u16)keeper->actor->action == 0x0d || (u16)keeper->actor->action == 0x0f ||
         (u16)keeper->actor->action == 0x12 || (u16)keeper->actor->action == 0x16) &&
        isKeeperCueCommand(keeper->control->command))
        playCue = 1;
    else if (((u16)keeper->actor->action == 0x0d || (u16)keeper->actor->action == 0x0f ||
              (u16)keeper->actor->action == 0x12 || (u16)keeper->actor->action == 0x16) &&
             isKeeperCueCommand(keeper->control->command)) {
        if (!(D_00CBBDFD[0] & 1)) {
            if (D_00CB3300[0][0].counters[6] > D_00CB3300[0][1].counters[6])
                playCue = 1;
            if (D_00CB3300[0][0].counters[6] == D_00CB3300[0][1].counters[6] &&
                D_00CBBDF6[0] == 2) {
                playCue = 1;
                D_00CBBDF6[0] = 0;
            }
        } else {
            if (D_00CB3300[0][0].counters[6] < D_00CB3300[0][1].counters[6])
                playCue = 1;
            if (D_00CB3300[0][0].counters[6] == D_00CB3300[0][1].counters[6] &&
                D_00CBBDF7[0] == 2) {
                playCue = 1;
                D_00CBBDF7[0] = 0;
            }
        }
    }
    if (playCue)
        playShootoutPlayerCue(keeper);
}
