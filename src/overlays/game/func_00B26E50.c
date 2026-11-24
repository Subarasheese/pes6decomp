/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/game_flags.h"
void func_00B26E50(s32 enabled) {
    D_00CBBE62->bit1 = enabled != 0;
    D_00CBBE62->bit0 = 1;
}
