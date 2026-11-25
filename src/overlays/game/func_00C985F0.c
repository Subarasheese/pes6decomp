/* compiler: mwcc-3.0.1b198 */
#include "pes6/shootout_player_cue.h"

void func_00C985F0(void) {
    u16 playCue = 0;
    PairedContext *taker = func_00B2A420(D_00CBBE04[0]);
    u16 action = (u16)taker->actor->action;
    if (action == 0x0d || action == 0x0f || action == 0x12 || action == 0x16) {
        u8 command = taker->control->command;
        if (command != 0x26) {
            if ((s32)D_00CBBDFD[0] % 2 == 0) {
                if (D_00CBBDF6[0] == 2) {
                    D_00CBBDF6[0] = 0;
                    playCue = 1;
                    D_00CBBDF7[0] = 1;
                }
            } else {
                if (D_00CBBDF7[0] == 2) {
                    D_00CBBDF7[0] = 0;
                    playCue = 1;
                    D_00CBBDF6[0] = 1;
                }
            }
            if (playCue)
                playShootoutPlayerCue(taker);
        }
    }
}
