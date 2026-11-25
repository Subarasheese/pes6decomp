/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/game_flags.h"

void func_00B26490(s32 enabled) {
    D_00CBBE8A->bit2 = enabled != 0;
    D_00CBBE8A->bit0 = 1;
}
