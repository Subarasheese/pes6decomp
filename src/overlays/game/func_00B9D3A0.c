/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern void func_00B364D0(u32 state);
extern void func_00BD4040(PairedContext *pair, s32 mode);
extern void func_00BD3BA0(void *pair, s32 bit, s32 enabled);
void func_00B9D3A0(PairedContext *pair) {
    if (pair != func_00B2A420(func_00BF6270())) {
        if (pair->control->alternate == 1) {
            pair->actor->previousAction = 0x80;
            pair->actor->action = 0x24;
            return;
        }
    } else {
        func_00B364D0(0);
        func_00BD4040(pair, 2);
        func_00BD3BA0(pair, 4, 1);
        func_00BD3BA0(pair, 5, 1);
        pair->actor->action = 0x22;
        return;
    }
    func_00B364D0(4);
    pair->actor->action = 0x7f;
}
