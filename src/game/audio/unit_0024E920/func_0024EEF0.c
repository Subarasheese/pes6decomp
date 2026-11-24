/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_adx.h"

extern void func_00168170(s32);

void func_0024EEF0(s32 state) {
    if (audioUnavailable())
        return;
    func_00168170(state);
}
