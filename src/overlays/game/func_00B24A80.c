/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/game_flags.h"
void func_00B24A80(s32 enabled) {
    D_00CBBF0C->bit0 = 1;
    D_00CBBF0C->bit1 = enabled != 0;
}
