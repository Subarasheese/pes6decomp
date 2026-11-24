/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/game_flags.h"
extern s32 D_00CBBF28[];
void func_00B23E50(s32 side, s32 enabled, s32 value) {
    D_00CBBF24->bit0 = 1;
    D_00CBBF24->bit3 = enabled != 0;
    D_00CBBF24->bit2 = side == 1;
    D_00CBBF28[0] = value;
}
