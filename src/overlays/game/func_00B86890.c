/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern void func_00B364D0(u32 value);
extern void func_00BD4040(PairedContext *pair, s32 mode);
extern void func_00BD3BA0(void *pair, s32 bit, s32 enabled);
void func_00B86890(PairedContext *pair) {
    if (pair == func_00B2A420(func_00BF6270())) {
        func_00B364D0(0);
        func_00BD4040(pair, 3);
        func_00BD3BA0(pair, 4, 1);
        func_00BD3BA0(pair, 5, 1);
        pair->control->ready = 1;
        pair->actor->action = 0x10;
    } else if (pair->control->alternate == 1) {
        pair->actor->action = 0x12;
    } else {
        pair->actor->action = 0x7f;
    }
}
